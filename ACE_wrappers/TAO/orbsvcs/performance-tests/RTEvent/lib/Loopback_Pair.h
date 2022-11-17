/**
 * @file Loopback_Pair.h
 *
 * $Id: Loopback_Pair.h 76589 2007-01-25 18:04:11Z elliott_c $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

#ifndef TAO_PERF_RTEC_LOOPBACK_PAIR_H
#define TAO_PERF_RTEC_LOOPBACK_PAIR_H

#include "Servant_var.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "Loopback_Supplier.h"
#include "Loopback_Consumer.h"

/**
 * @class Loopback_Pair
 *
 * @brief Simplify the initialization of a Loopback connection through
 *        the event channel.
 */
class TAO_RTEC_Perf_Export Loopback_Pair
{
public:
  /// Constructor
  /**
   * We need a default constructor because this class is often used in
   * arrays.
   */
  Loopback_Pair (void);

  /**
   * @param experiment_id For tests that run multiple experiments
   *        this number is changed on each iteration, guaranteeing
   *        better isolation.
   * @param base_event_type The event type generated by the supplier.
   *        The Loopback_Consumer consumes the same event, the
   *        Loopback_Supplier generates (base_event_type + 1), and the
   *        consumer subscribes for that type too.
   * @param iterations The number of iterations expected on the test.
   * @param workload_in_usecs The consumer workload, in microseconds.
   * @param gsf The high resolution timer global scale factor.
   *
   */
  void init (CORBA::Long experiment_id,
             CORBA::Long base_event_type,
             PortableServer::POA_ptr supplier_poa,
             PortableServer::POA_ptr consumer_poa);

  /// Connect to the event channel
  void connect (RtecEventChannelAdmin::EventChannel_ptr ec);

  /// Disconnect from the event channel
  void disconnect (void);

  //@{
  /** @name Accessors
   */
  Loopback_Supplier *loopback_supplier (void) const;

  Loopback_Consumer *loopback_consumer (void) const;
  //@}

private:
  Servant_var<Loopback_Supplier> loopback_supplier_;
  Servant_var<Loopback_Consumer> loopback_consumer_;
};

#if defined(__ACE_INLINE__)
#include "Loopback_Pair.inl"
#endif /* __ACE_INLINE__ */

#endif /* TAO_PERF_RTEC_LOOPBACK_PAIR_H */
