/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarksXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <WebBookmarksXPCConnectionDelegate> * _delegate;
    NSMutableDictionary * _entitlementLookupCache;
    NSMutableDictionary * _messageHandlers;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic) <WebBookmarksXPCConnectionDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1;
- (id)connection;
- (id)delegate;
- (bool)hasBoolEntitlement:(id)arg1;
- (id)initClientForMachService:(const char *)arg1;
- (id)initWithConnection:(id)arg1;
- (id)messageWithName:(const char *)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withReplyHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id /* block */)arg1 forMessageNamed:(const char *)arg2;
- (void)setMessageHandlers:(id)arg1;

@end
