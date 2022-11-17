// $Id: params_dup.c 78565 2007-06-13 12:42:02Z sma $

#include "params_dup.h"

#include <openssl/asn1.h>


DSA *
DSAPARAMS_DUP_WRAPPER_NAME (DSA * dsa)
{
  return DSAparams_dup (dsa);
}

DH *
DHPARAMS_DUP_WRAPPER_NAME (DH * dh)
{
  return DHparams_dup (dh);
}

