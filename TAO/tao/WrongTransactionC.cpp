/* -*- C++ -*- */
// $Id$

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "tao/WrongTransactionC.h"
#include "tao/Environment.h"
#include "tao/CDR.h"

#if (TAO_HAS_MINIMUM_CORBA == 0)

// default constructor
CORBA_WrongTransaction::CORBA_WrongTransaction (void)
  : CORBA_UserException ("IDL:omg.org/CORBA/WrongTransaction:1.0")
{
}

// destructor - all members are of self managing types
CORBA_WrongTransaction::~CORBA_WrongTransaction (void)
{
}

// copy constructor
CORBA_WrongTransaction::CORBA_WrongTransaction (const CORBA_WrongTransaction &_tao_excp)
  : CORBA_UserException (_tao_excp._id ())
{
}

// assignment operator
CORBA_WrongTransaction&
CORBA_WrongTransaction::operator= (const CORBA_WrongTransaction &_tao_excp)
{

  this->CORBA_UserException::operator= (_tao_excp);
  return *this;
}

// narrow
CORBA_WrongTransaction_ptr
CORBA_WrongTransaction::_downcast (CORBA::Exception *exc)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/CORBA/WrongTransaction:1.0", exc->_id ())) // same type
    return ACE_dynamic_cast (CORBA_WrongTransaction_ptr, exc);
  else
    return 0;
}


void CORBA_WrongTransaction::_raise (void)
{
  TAO_RAISE(*this);
}

void CORBA_WrongTransaction::_tao_encode (TAO_OutputCDR &cdr,
                                          CORBA::Environment &ACE_TRY_ENV) const
{
  if (cdr << *this)
    return;
  ACE_THROW (CORBA::MARSHAL ());
}

void CORBA_WrongTransaction::_tao_decode (TAO_InputCDR &cdr,
                                          CORBA::Environment &ACE_TRY_ENV)
{
  if (cdr >> *this)
    return;
  ACE_THROW (CORBA::MARSHAL ());
}

CORBA::Exception *CORBA_WrongTransaction::_alloc (void)
{
  CORBA::Exception *retval = 0;

  ACE_NEW_RETURN (retval,
                  CORBA_WrongTransaction,
                  0);

  return retval;
}

CORBA::Boolean
operator<< (TAO_OutputCDR &cdr, const CORBA_WrongTransaction &wt)
{
  if (cdr << wt._id ())
    return 1;
  return 0;
}

CORBA::Boolean
operator>> (TAO_InputCDR &, CORBA_WrongTransaction &)
{
  return 1;
}

#endif /* TAO_HAS_MINIMUM_CORBA */
