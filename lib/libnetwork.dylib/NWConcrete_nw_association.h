/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_association : NSObject <OS_nw_association> {
    unsigned int  __pad_bits;
    struct nw_hash_table { } * cache_entries;
    struct nw_hash_table { } * connected_flow_handles;
    void * deactivation_timer;
    unsigned int  dormant;
    NSObject<OS_nw_endpoint> * endpoint;
    NSObject<OS_nw_path_evaluator> * evaluator;
    struct nw_hash_table { } * handles;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_path> * previous_path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;

@end
