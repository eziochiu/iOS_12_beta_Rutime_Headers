/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_protocol_definition : NSObject <OS_nw_protocol_definition> {
    int (* allocate_flow_state;
    int (* allocate_globals;
    int (* allocate_instance_state;
    int (* allocate_metadata;
    int (* allocate_options;
    int (* check_equality_options;
    int (* copy_metadata;
    int (* copy_options;
    unsigned int  custom_flow_map_key_size;
    int (* deallocate_cache_entry;
    int (* deallocate_flow_state;
    int (* deallocate_globals;
    int (* deallocate_instance_state;
    int (* deallocate_metadata;
    int (* deallocate_options;
    int (* destroy;
    int (* handle_error;
    int (* handle_inbound;
    int (* handle_outbound;
    struct nw_protocol_identifier { 
        BOOL name[32]; 
        int level; 
        int mapping; 
    }  identifier;
    int (* inbound_starting;
    int (* inbound_stopping;
    int (* initialize;
    int (* outbound_starting;
    int (* outbound_stopping;
    int (* should_flush_cache;
    int (* start;
    int (* stop;
    unsigned char  unique_identifier;
    int  variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)description;
- (id)init;

@end
