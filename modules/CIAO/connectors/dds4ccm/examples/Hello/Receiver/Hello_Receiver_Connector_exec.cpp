// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler v1.6.9 ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be/be_codegen.cpp:1278

#include "Hello_Receiver_Connector_exec.h"
#include "ciao/CIAO_common.h"

namespace CIAO_Hello_DDS_Hello_receiver_Connector_Impl
{
  //============================================================
  // Facet Executor Implementation Class: string_Reader_exec_i
  //============================================================
  
  string_Reader_exec_i::string_Reader_exec_i (void)
  {
  }
  
  string_Reader_exec_i::~string_Reader_exec_i (void)
  {
  }
  
  // Operations from ::CCM_DDS::string_Reader
  //============================================================
  // Facet Executor Implementation Class: ListenerControl_exec_i
  //============================================================
  
  ListenerControl_exec_i::ListenerControl_exec_i (void)
  {
  }
  
  ListenerControl_exec_i::~ListenerControl_exec_i (void)
  {
  }
  
  // Operations from ::CCM_DDS::ListenerControl
  
  ::CORBA::Boolean
  ListenerControl_exec_i::enabled (void)
  {
    /* Your code here. */
    return false;
  }
  
  void
  ListenerControl_exec_i::enabled (
    ::CORBA::Boolean /* enabled */)
  {
    /* Your code here. */
  }
  //============================================================
  // Facet Executor Implementation Class: DataReader_exec_i
  //============================================================
  
  DataReader_exec_i::DataReader_exec_i (void)
  {
  }
  
  DataReader_exec_i::~DataReader_exec_i (void)
  {
  }
  
  // Operations from ::DDS::DataReader
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::enable (void)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::StatusCondition_ptr
  DataReader_exec_i::get_statuscondition (void)
  {
    /* Your code here. */
    return ::DDS::StatusCondition::_nil ();
  }
  
  ::DDS::StatusMask
  DataReader_exec_i::get_status_changes (void)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::InstanceHandle_t
  DataReader_exec_i::get_instance_handle (void)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReadCondition_ptr
  DataReader_exec_i::create_readcondition (
    ::DDS::SampleStateMask /* sample_states */,
    ::DDS::ViewStateMask /* view_states */,
    ::DDS::InstanceStateMask /* instance_states */)
  {
    /* Your code here. */
    return ::DDS::ReadCondition::_nil ();
  }
  
  ::DDS::QueryCondition_ptr
  DataReader_exec_i::create_querycondition (
    ::DDS::SampleStateMask /* sample_states */,
    ::DDS::ViewStateMask /* view_states */,
    ::DDS::InstanceStateMask /* instance_states */,
    const char * /* query_expression */,
    const ::DDS::StringSeq & /* query_parameters */)
  {
    /* Your code here. */
    return ::DDS::QueryCondition::_nil ();
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::delete_readcondition (
    ::DDS::ReadCondition_ptr /* a_condition */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::delete_contained_entities (void)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::set_qos (
    const ::DDS::DataReaderQos & /* qos */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::get_qos (
    ::DDS::DataReaderQos & /* qos */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::set_listener (
    ::DDS::DataReaderListener_ptr /* a_listener */,
    ::DDS::StatusMask /* mask */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::DataReaderListener_ptr
  DataReader_exec_i::get_listener (void)
  {
    /* Your code here. */
    return ::DDS::DataReaderListener::_nil ();
  }
  
  ::DDS::TopicDescription_ptr
  DataReader_exec_i::get_topicdescription (void)
  {
    /* Your code here. */
    return ::DDS::TopicDescription::_nil ();
  }
  
  ::DDS::Subscriber_ptr
  DataReader_exec_i::get_subscriber (void)
  {
    /* Your code here. */
    return ::DDS::Subscriber::_nil ();
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::get_sample_rejected_status (
    ::DDS::SampleRejectedStatus & /* status */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::get_liveliness_changed_status (
    ::DDS::LivelinessChangedStatus & /* status */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::get_requested_deadline_missed_status (
    ::DDS::RequestedDeadlineMissedStatus & /* status */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::get_requested_incompatible_qos_status (
    ::DDS::RequestedIncompatibleQosStatus & /* status */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::get_subscription_matched_status (
    ::DDS::SubscriptionMatchedStatus & /* status */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::get_sample_lost_status (
    ::DDS::SampleLostStatus & /* status */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::wait_for_historical_data (
    const ::DDS::Duration_t & /* max_wait */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::get_matched_publications (
    ::DDS::InstanceHandleSeq & /* publication_handles */)
  {
    /* Your code here. */
    return 0;
  }
  
  ::DDS::ReturnCode_t
  DataReader_exec_i::get_matched_publication_data (
    ::DDS::PublicationBuiltinTopicData & /* publication_data */,
    ::DDS::InstanceHandle_t /* publication_handle */)
  {
    /* Your code here. */
    return 0;
  }
  
  //============================================================
  // Component Executor Implementation Class: Hello_receiver_Connector_exec_i
  //============================================================
  
  Hello_receiver_Connector_exec_i::Hello_receiver_Connector_exec_i (void)
  {
  }
  
  Hello_receiver_Connector_exec_i::~Hello_receiver_Connector_exec_i (void)
  {
  }
  
  // Supported operations and attributes.
  
  // Component attributes.
  
  // Port operations.
  
  ::CCM_DDS::CCM_string_Reader_ptr
  Hello_receiver_Connector_exec_i::get_receiver_data (void)
  {
    /* Your code here. */
    // return ::CCM_DDS::CCM_string_Reader::_nil ();
  }
  
  ::CCM_DDS::CCM_ListenerControl_ptr
  Hello_receiver_Connector_exec_i::get_receiver_control (void)
  {
    /* Your code here. */
    // return ::CCM_DDS::CCM_ListenerControl::_nil ();
  }
  
  ::DDS::CCM_DataReader_ptr
  Hello_receiver_Connector_exec_i::get_receiver_dds_entity (void)
  {
    /* Your code here. */
    // return ::DDS::CCM_DataReader::_nil ();
  }
  
  // Operations from Components::SessionComponent.
  
  void
  Hello_receiver_Connector_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->context_ =
      ::Hello_DDS::CCM_Hello_receiver_Connector_Context::_narrow (ctx);
    
    if ( ::CORBA::is_nil (this->context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }
  
  void
  Hello_receiver_Connector_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }
  
  void
  Hello_receiver_Connector_exec_i::ccm_activate (void)
  {
    /* Your code here. */
  }
  
  void
  Hello_receiver_Connector_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }
  
  void
  Hello_receiver_Connector_exec_i::ccm_remove (void)
  {
    /* Your code here. */
  }
  
  extern "C" RECEIVER_CONNECTOR_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Hello_DDS_Hello_receiver_Connector_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();
    
    ACE_NEW_RETURN (
      retval,
      Hello_receiver_Connector_exec_i,
      ::Components::EnterpriseComponent::_nil ());
    
    return retval;
  }
}

