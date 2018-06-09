/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSMutableDictionary * _customXpcHandlers;
    id /* block */  _invalidationHandler;
    id /* block */  _messageHandler;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ messageHandler;
@property (nonatomic, readonly) int pid;

- (void).cxx_destruct;
- (void)_registerCallbacks;
- (void)addCustomXPCHandler:(id /* block */)arg1 forKey:(id)arg2;
- (id)connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (id /* block */)invalidationHandler;
- (id /* block */)messageHandler;
- (int)pid;
- (void)removeCustomXPCHandler:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMessageHandler:(id /* block */)arg1;

@end
