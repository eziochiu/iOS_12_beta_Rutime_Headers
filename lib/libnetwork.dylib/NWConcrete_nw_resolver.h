/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_resolver : NSObject <OS_nw_resolver> {
    id /* block */  cancel_handler;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_context> * context;
    void * crazy_eyeballs_timer;
    int  dns_error;
    struct _DNSServiceRef_t { } * dns_service;
    unsigned int  dns_service_id;
    struct _DNSServiceRef_t { } * dns_service_secondary_pointer;
    NSObject<OS_nw_endpoint> * endpoint;
    NSObject<OS_nw_array> * endpoint_array;
    unsigned char  flags;
    unsigned int  forced_protocol;
    void * internally_retained_object;
    unsigned int  is_custom_resolver;
    unsigned int  local_only;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    NSObject<OS_nw_parameters> * parameters;
    void * query_timer;
    int  status;
    id /* block */  update_block;
    unsigned int  used_cached_results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 dns_service_id:(unsigned int)arg3 localOnly:(bool)arg4;

@end
