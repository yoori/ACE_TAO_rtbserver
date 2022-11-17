// $Id: test_i.h 81140 2008-03-28 09:19:19Z vzykov $

#ifndef _TEST_I_H_
#define _TEST_I_H_

#include "testS.h"

class Simple_Server_i : public POA_Simple_Server
{
public:
  Simple_Server_i (CORBA::ORB_ptr orb);
  // ctor

  virtual void remote_call ();

  virtual void shutdown ();

private:
  CORBA::ORB_var orb_;
};

#endif /* _TEST_I_H_ */
