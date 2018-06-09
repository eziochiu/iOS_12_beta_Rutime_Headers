/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface CKKSControl : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_xpc_object> * _endpoint;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_xpc_object> *endpoint;

+ (id)controlObject:(id*)arg1;

- (void).cxx_destruct;
- (id)connection;
- (id)endpoint;
- (id)initWithConnection:(id)arg1;
- (void)rpcFetchAndProcessChanges:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcFetchAndProcessClassAChanges:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcGetCKDeviceIDWithReply:(id /* block */)arg1;
- (void)rpcKnownBadState:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcPerformanceCounters:(id /* block */)arg1;
- (void)rpcPushOutgoingChanges:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcResetCloudKit:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcResetLocal:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcResync:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcStatus:(id)arg1 reply:(id /* block */)arg2;
- (void)rpcTLKMissing:(id)arg1 reply:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setEndpoint:(id)arg1;

@end
