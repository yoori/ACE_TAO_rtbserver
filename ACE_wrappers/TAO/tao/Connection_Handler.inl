// -*- C++ -*-
//
//$Id: Connection_Handler.inl 91520 2010-08-27 12:23:14Z johnnyw $

#include "tao/Transport.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE TAO_ORB_Core *
TAO_Connection_Handler::orb_core (void)
{
  return this->orb_core_;
}

ACE_INLINE TAO_Transport *
TAO_Connection_Handler::transport (void)
{
  return this->transport_;
}

ACE_INLINE bool
TAO_Connection_Handler::is_closed (void) const
{
  return (this->state_ == TAO_LF_Event::LFS_CONNECTION_CLOSED ||
          this->state_ == TAO_LF_Event::LFS_TIMEOUT || this->is_closed_);
}

ACE_INLINE bool
TAO_Connection_Handler::is_timeout (void) const
{
  return (this->state_ == TAO_LF_Event::LFS_TIMEOUT);
}

ACE_INLINE bool
TAO_Connection_Handler::is_open (void) const
{
  return this->state_ == TAO_LF_Event::LFS_SUCCESS;
}

ACE_INLINE bool
TAO_Connection_Handler::is_connecting (void) const
{
  return this->state_ == TAO_LF_Event::LFS_CONNECTION_WAIT;
}

ACE_INLINE void
TAO_Connection_Handler::connection_pending (void)
{
  if (!this->connection_pending_)
    {
      this->connection_pending_ = true;
      this->transport()->add_reference();
    }
}

ACE_INLINE void
TAO_Connection_Handler::cancel_pending_connection (void)
{
  if (this->connection_pending_)
    {
      this->connection_pending_ = false;
      this->transport()->remove_reference();
    }
}

/// Derived classes should implement this for proper support with the
/// Blocking Flushing Strategy.
ACE_INLINE int
TAO_Connection_Handler::handle_write_ready (const ACE_Time_Value *)
{
  return 0;
}

//@@ CONNECTION_HANDLER_SPL_METHODS_ADD_HOOK

inline
TAO_TCP_Connection_Handler::TAO_TCP_Connection_Handler(
  TAO_ORB_Core* orb_core)
  : TAO_Connection_Handler(orb_core)
{
}

template <ACE_PEER_STREAM_1, ACE_SYNCH_DECL>
TAO_TCP_Connection_Service_Handler<ACE_PEER_STREAM_2, ACE_SYNCH_USE>::
  TAO_TCP_Connection_Service_Handler(
    TAO_ORB_Core* orb_core, ACE_Thread_Manager* thr_mgr,
    ACE_Message_Queue<ACE_SYNCH_USE>* mq,
    ACE_Reactor* reactor)
    : TAO_TCP_Connection_Handler(orb_core),
      ACE_Svc_Handler<ACE_PEER_STREAM_2, ACE_SYNCH_USE>(thr_mgr, mq, reactor)
{
}

template <ACE_PEER_STREAM_1, ACE_SYNCH_DECL>
int
TAO_TCP_Connection_Service_Handler<ACE_PEER_STREAM_2, ACE_SYNCH_USE>::
  get_local_addr(ACE_Addr& address) const
{
  return this->peer().get_local_addr(address);
}

template <ACE_PEER_STREAM_1, ACE_SYNCH_DECL>
int
TAO_TCP_Connection_Service_Handler<ACE_PEER_STREAM_2, ACE_SYNCH_USE>::
  get_remote_addr(ACE_Addr& address) const
{
  return this->peer().get_remote_addr(address);
}

TAO_END_VERSIONED_NAMESPACE_DECL
