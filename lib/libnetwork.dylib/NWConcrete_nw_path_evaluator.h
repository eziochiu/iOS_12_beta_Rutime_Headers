/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_path_evaluator : NSObject <OS_nw_path_evaluator> {
    id /* block */  cancel_handler;
    unsigned int  cancelled;
    unsigned char  client_id;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_browse_descriptor> * descriptor;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned int  flow_count;
    unsigned int  is_default;
    unsigned int  is_listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    NSObject<OS_nw_parameters> * parameters;
    NWConcrete_nw_path * path;
    unsigned int  started;
    id /* block */  update_block;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
