/* -*- C++ -*- $Id: Messenger_i.cpp 91816 2010-09-17 08:35:56Z johnnyw $ */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "Messenger_i.h"
#include <iostream>
// Implementation skeleton constructor
Messenger_i::Messenger_i (void)
{
}

// Implementation skeleton destructor
Messenger_i::~Messenger_i (void)
{
}

CORBA::Boolean Messenger_i::send_message (
    const char * user_name,
    const char * subject,
    char *& message
  )
{
  std::cout << "Message from: " << user_name << std::endl;
  std::cout << "Subject:      " << subject << std::endl;
  std::cout << "Message:      " << message << std::endl;
  CORBA::string_free(message);
  message = CORBA::string_dup("Thanks for the message.");
  return true;
}
