/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_endpoint_handler : NSObject <OS_nw_endpoint_handler> {
    NSObject<OS_nw_association> * association;
    NSObject<OS_nw_object> * callback_context;
    NSObject<OS_nw_path> * current_path;
    unsigned int  dry_run;
    NSObject<OS_nw_endpoint> * endpoint;
    struct nw_endpoint_handler_event_s { 
        unsigned int domain; 
        unsigned int event; 
    }  event;
    unsigned char  id_chain;
    BOOL  id_str;
    NSObject<OS_xpc_object> * inactive_agent_dictionaries;
    NSObject<OS_xpc_object> * inactive_agent_uuids;
    int  last_child_id;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    int  mode;
    NSObject<NWConcrete_nw_endpoint_mode_handler> * mode_handler;
    NSObject<OS_nw_parameters> * parameters;
    NWConcrete_nw_endpoint_handler * parent_handler;
    unsigned int  private;
    int (* report_callback;
    unsigned int  reuse_association;
    int  state;
    NSObject<OS_dispatch_queue> * tls_client_queue;
    id /* block */  tls_message_block;
    id /* block */  tls_prepare_block;
    unsigned int  top_id;
    NSObject<OS_xpc_object> * triggered_agent_uuids;
    unsigned int  triggering_voluntary_agents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 reportCallback:(int (*)arg3 context:(id)arg4 parent:(id)arg5 identifier:(unsigned int)arg6;

@end
