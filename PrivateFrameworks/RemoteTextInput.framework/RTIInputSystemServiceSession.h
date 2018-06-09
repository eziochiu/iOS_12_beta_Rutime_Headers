/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
 */

@interface RTIInputSystemServiceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate, RTIInputSystemSessionProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isPaused;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly, copy) RTIDataPayload *currentDataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPaused;
@property (readonly) Class superclass;

+ (id)sessionWithConnection:(id)arg1;

- (void).cxx_destruct;
- (void)_killConnectionWithCallback;
- (void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id /* block */)arg1;
- (oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3;
- (id)connection;
- (id)currentDataPayload;
- (void)dealloc;
- (void)didInitializeWithConnection:(id)arg1;
- (oneway void)endRemoteTextInputSessionWithID:(id)arg1;
- (void)flushOperations;
- (void)flushOperationsWithResultHandler:(id /* block */)arg1;
- (void)handleTextActionPayload:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (bool)isPaused;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 didChangePause:(bool)arg2 withReason:(id)arg3;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setIsPaused:(bool)arg1;

@end
