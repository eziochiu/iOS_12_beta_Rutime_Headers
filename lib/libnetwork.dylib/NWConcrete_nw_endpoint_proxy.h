/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_endpoint_proxy : NSObject <OS_nw_endpoint_proxy> {
    unsigned int  __pad_bits;
    NSObject<OS_nw_array> * child_endpoint_handlers;
    NWConcrete_nw_endpoint_handler * connected_child;
    unsigned int  direct_prohibited;
    NSObject<OS_nw_array> * failed_child_endpoint_handlers;
    unsigned int  next_child_endpoint_index;
    NSObject<OS_nw_array> * pac_resolvers;
    NSObject<OS_xpc_object> * parsed_proxy_settings;
    NSObject<OS_xpc_object> * proxy_settings;
    unsigned int  synthesized_url;
    struct __CFURL { } * url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyWithHandler:(id)arg1 toChildren:(id /* block */)arg2;
- (void)cancelWithHandler:(id)arg1 forced:(bool)arg2;
- (void)dealloc;
- (id)init;
- (void)startWithHandler:(id)arg1;
- (void)updatePathWithHandler:(id)arg1;

@end
