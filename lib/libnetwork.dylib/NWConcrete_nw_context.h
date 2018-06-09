/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_context : NSObject <OS_nw_context> {
    struct atomic_flag { 
        bool _Value; 
    }  activated;
    struct nw_hash_table { } * address_endpoints;
    struct nw_mem_buffer_manager { } * buffer_manager_128;
    struct nw_mem_buffer_manager { } * buffer_manager_16;
    struct nw_mem_buffer_manager { } * buffer_manager_2;
    struct nw_mem_buffer_manager { } * buffer_manager_64;
    struct nw_mem_buffer_manager { } * buffer_manager_8;
    void * channel_globals;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  channel_lock;
    struct nw_hash_table { } * globals;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  globals_lock;
    struct nw_hash_table { } * host_endpoints;
    char * identifier;
    unsigned int  is_implicit;
    unsigned int  is_private;
    unsigned int  isolate_protocol_cache;
    unsigned int  isolate_protocol_stack;
    struct nw_hash_table { } * other_endpoints;
    void * path_globals;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  path_lock;
    void * purge_timer;
    int  scheduling_mode;
    NSObject<OS_dispatch_workloop> * workloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(const char *)arg1;

@end
