/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_listener : NSObject <OS_nw_listener, nw_listener_inbox_delegate> {
    NSObject<OS_nw_advertise_descriptor> * advertise_descriptor;
    id /* block */  advertised_endpoint_changed_handler;
    unsigned int  client_qos_class;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_parameters> * current_derived_parameters;
    unsigned int  defer_socket;
    struct _DNSServiceRef_t { } * dnsref;
    void * dnssrc;
    NSObject<OS_nw_path_evaluator> * evaluator;
    id /* block */  event_handler;
    NSObject<OS_nw_array> * flow_registrations;
    BOOL  id_str;
    unsigned short  id_value;
    NSObject<OS_xpc_object> * inactive_agent_dictionaries;
    NSObject<OS_xpc_object> * inactive_agents;
    NSObject<OS_nw_array> * inboxes;
    NSObject<OS_nw_connection> * join_connection;
    NSObject<OS_nw_endpoint> * local_endpoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    id /* block */  new_connection_handler;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_path> * path;
    int  state;
    NSObject<OS_xpc_object> * triggered_agents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)handleInbound:(id)arg1 addProtocolInbox:(bool)arg2;
- (void)handleInboxCancelComplete:(id)arg1;
- (void)handleInboxFailed:(id)arg1 error:(id)arg2;
- (id)initWithParameters:(id)arg1;

@end
