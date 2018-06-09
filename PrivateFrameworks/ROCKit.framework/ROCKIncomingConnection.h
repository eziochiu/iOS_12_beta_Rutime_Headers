/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKIncomingConnection : NSObject {
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;

+ (id)connectionWithXPCConnection:(id)arg1 handlerQueue:(id)arg2 xpcHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)arg1 handlerQueue:(id)arg2 xpcHandler:(id /* block */)arg3;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
