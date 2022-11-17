/**
 * @file EC_Destroyer.cpp
 *
 * $Id: EC_Destroyer.cpp 91675 2010-09-08 19:09:19Z johnnyw $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

#include "EC_Destroyer.h"

#if !defined(__ACE_INLINE__)
#include "EC_Destroyer.inl"
#endif /* __ACE_INLINE__ */

EC_Destroyer::EC_Destroyer (RtecEventChannelAdmin::EventChannel_ptr ec)
  :  ec_ (RtecEventChannelAdmin::EventChannel::_duplicate (ec))
{
}

EC_Destroyer::~EC_Destroyer (void)
{
  try{
    this->ec_->destroy ();
  } catch (const CORBA::Exception&) {
    // @@ TODO Log this event, check the Servant_var.cpp comments for
    // details.
  }
}
