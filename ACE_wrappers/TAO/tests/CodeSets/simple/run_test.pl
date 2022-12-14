eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
     & eval 'exec perl -S $0 $argv:q'
     if 0;

# $Id: run_test.pl 88314 2009-12-23 12:02:42Z vzykov $
# -*- perl -*-

use lib "$ENV{ACE_ROOT}/bin";
use PerlACE::TestTarget;

my $server = PerlACE::TestTarget::create_target (1) || die "Create target 1 failed\n";
my $client = PerlACE::TestTarget::create_target (2) || die "Create target 2 failed\n";

$server->AddLibPath ('../libs/IBM1047_ISO8859/.');
$client->AddLibPath ('../libs/IBM1047_ISO8859/.');
$server->AddLibPath ('../libs/UCS4_UTF16/.');
$client->AddLibPath ('../libs/UCS4_UTF16/.');

my $iorbase = "server.ior";
my $server_iorfile = $server->LocalFile ($iorbase);
my $client_iorfile = $client->LocalFile ($iorbase);
$server->DeleteFile($iorbase);
$client->DeleteFile($iorbase);

my $client_conf = $client->LocalFile ("cs_test.conf");
my $server_conf = $server->LocalFile ("cs_test.conf");

$SV = $server->CreateProcess ("server", "-o $server_iorfile -ORBDottedDecimalAddresses 1");
$CL = $client->CreateProcess ("client", "-k file://$client_iorfile -ORBSvcConf $client_conf");

$status = 0;

print STDOUT "Client using char translator\n\n";

$server_status = $SV->Spawn ();
if ($server_status != 0) {
    print STDERR "ERROR: Starting server returned $server_status\n";
    exit 1;
}
if ($server->WaitForFileTimed ($iorbase,
                               $server->ProcessStartWaitInterval()) == -1) {
    print STDERR "ERROR: cannot find file <$server_iorfile>\n";
    $SV->Kill (); $SV->TimedWait (1);
    exit 1;
}

$client_status = $CL->SpawnWaitKill ($client->ProcessStartWaitInterval ());
if ($client_status != 0) {
    print STDERR "ERROR: client returned $client_status\n";
    $status = 1;
}

$server_status = $SV->WaitKill ($server->ProcessStopWaitInterval ());
if ($server_status != 0) {
    print STDERR "ERROR: server returned $server_status\n";
    $status = 1;
}

$server->DeleteFile($iorbase);
$client->DeleteFile($iorbase);

print STDOUT "\nServer using char translator\n\n";

$SV->Arguments ("-o $server_iorfile -ORBDottedDecimalAddresses 1 -ORBSvcConf $server_conf");
$CL->Arguments ("-k file://$client_iorfile");

$server_status = $SV->Spawn ();
if ($server_status != 0) {
    print STDERR "ERROR: Starting server 2 returned $server_status\n";
    exit 1;
}
if ($server->WaitForFileTimed ($iorbase,
                               $server->ProcessStartWaitInterval()) == -1) {
    print STDERR "ERROR: cannot find file <$server_iorfile>\n";
    $SV->Kill (); $SV->TimedWait (1);
    exit 1;
}

$client_status = $CL->SpawnWaitKill ($client->ProcessStartWaitInterval ());
if ($client_status != 0) {
    print STDERR "ERROR: client 2 returned $client_status\n";
    $status = 1;
}

$server_status = $SV->WaitKill ($server->ProcessStopWaitInterval ());
if ($server_status != 0) {
    print STDERR "ERROR: server 2 returned $server_status\n";
    $status = 1;
}

$server->DeleteFile($iorbase);
$client->DeleteFile($iorbase);

exit $status;
