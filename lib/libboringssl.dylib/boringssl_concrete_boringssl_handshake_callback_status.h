/* made by EzioChiu
   Image: /usr/lib/libboringssl.dylib
 */

@interface boringssl_concrete_boringssl_handshake_callback_status : NSObject <OS_boringssl_handshake_callback_status> {
    bool  complete;
    id /* block */  completion_callback;
    int  message_type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
