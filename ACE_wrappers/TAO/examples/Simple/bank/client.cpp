// $Id: client.cpp 83322 2008-10-20 09:51:35Z vzykov $

# include "Bank_Client_i.h"

// The client program for the application.
int
ACE_TMAIN(int argc, ACE_TCHAR *argv[])
{
  Bank_Client_i client;

  ACE_DEBUG ((LM_DEBUG,
              ACE_TEXT ("\nBank client\n\n")));

  if (client.run ("Bank", argc, argv) == -1)
    return -1;
  else
    return 0;
}
