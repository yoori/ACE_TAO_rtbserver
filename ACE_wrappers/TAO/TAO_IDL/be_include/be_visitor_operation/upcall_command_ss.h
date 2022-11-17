// -*- C++ -*-

//=============================================================================
/**
 *  @file    upcall_command_ss.h
 *
 *  $Id: upcall_command_ss.h 91059 2010-07-12 08:21:28Z parsons $
 *
 *  Visitor that generates operation-specific TAO::Upcall_Command
 *  objects in skeletons.
 *
 *
 *  @author Ossama Othman
 */
//=============================================================================

#ifndef _BE_VISITOR_OPERATION_UPCALL_COMMAND_SS_H_
#define _BE_VISITOR_OPERATION_UPCALL_COMMAND_SS_H_

class be_visitor_operation_upcall_command_ss
  : public be_visitor_operation
{
public:

  /// constructor
  be_visitor_operation_upcall_command_ss (be_visitor_context * ctx);

  /// destructor
  ~be_visitor_operation_upcall_command_ss (void);

  /// Same as visit_operation() but override full_skel_name and
  /// upcall_command_name.
  int visit (be_operation * node,
             char const * full_skel_name,
             char const * upcall_command_name);

private:

  /// Generate the upcall.
  int gen_upcall (be_operation * node);

};

#endif /* _BE_VISITOR_OPERATION_UPCALL_COMMAND_SS_H_ */
