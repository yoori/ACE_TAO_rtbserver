
//=============================================================================
/**
 *  @file    any_op_ch.h
 *
 *  $Id: any_op_ch.h 88828 2010-02-04 09:09:22Z johnnyw $
 *
 *  Visitors for generation of code for Arrays in client header. This one
 *  generates the Any operators.
 *
 *
 *  @author Aniruddha Gokhale
 */
//=============================================================================


#ifndef _BE_VISITOR_ARRAY_ANY_OP_CH_H_
#define _BE_VISITOR_ARRAY_ANY_OP_CH_H_

// ************************************************************
// class be_visitor_array_any_op_ch
// ************************************************************

/**
 * @class be_visitor_array_any_op_ch
 *
 * @brief be_visitor_array_any_op_ch
 *
 * This is a concrete visitor for array that generates the Any operator
 * declarations
 */
class be_visitor_array_any_op_ch : public be_visitor_decl
{

public:
  /// constructor
  be_visitor_array_any_op_ch (be_visitor_context *ctx);

  /// destructor
  ~be_visitor_array_any_op_ch (void);

  /// visit array
  virtual int visit_array (be_array *node);

};

#endif /* _BE_VISITOR_ARRAY_ANY_OP_CH_H_ */
