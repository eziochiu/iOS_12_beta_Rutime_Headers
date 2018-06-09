/* made by EzioChiu
   Image: /usr/lib/libboringssl.dylib
 */

@interface boringssl_concrete_boringssl_ctx_callback : NSObject <OS_boringssl_ctx_callback> {
    id /* block */  add_callback;
    unsigned short  callback_type;
    id /* block */  free_callback;
    id /* block */  parse_callback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
