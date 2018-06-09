/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_protocol_transform : NSObject <OS_nw_protocol_transform> {
    unsigned int  clear_application;
    unsigned int  clear_internet;
    unsigned int  clear_transport;
    int  data_mode;
    NSObject<OS_xpc_object> * disabled_protocols;
    int  fallback_mode;
    int  multipath_service;
    unsigned int  no_fallback;
    unsigned int  no_proxy;
    unsigned int  prohibit_direct;
    NSObject<OS_nw_endpoint> * replace_endpoint;
    unsigned int  tfo;
    unsigned int  tfo_no_cookie;
    NSObject<OS_nw_protocol_stack> * transform_stack;
    unsigned int  use_tfo_heuristics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
