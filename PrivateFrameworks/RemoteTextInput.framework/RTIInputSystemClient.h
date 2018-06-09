/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
 */

@interface RTIInputSystemClient : NSObject <RTIInputSystemSessionProtocol, RTIInputSystemSessionResponseProtocol> {
    NSMutableDictionary * _activeSessions;
    NSMutableSet * _allowanceRequestors;
    NSMutableSet * _begunSessionIDs;
    NSMutableDictionary * _connections;
    <RTIInputSystemClientDelegate> * _delegate;
    NSMutableSet * _endpointConnections;
    bool  _environmentEnabled;
    bool  _isInDealloc;
    NSArray * _machNames;
}

@property (nonatomic, retain) NSMutableDictionary *activeSessions;
@property (nonatomic, retain) NSMutableSet *allowanceRequestors;
@property (nonatomic, retain) NSMutableSet *begunSessionIDs;
@property (nonatomic, retain) NSMutableDictionary *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RTIInputSystemClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *endpointConnections;
@property (getter=isEnvironmentEnabled, nonatomic, readonly) bool environmentEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *machNames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginAllActiveSessions;
- (void)_beginAllActiveSessionsForServices:(id)arg1;
- (void)_beginSessionWithID:(id)arg1 forServices:(id)arg2;
- (void)_endAllActiveSessions;
- (void)_endAllActiveSessionsForServices:(id)arg1;
- (void)_endSessionWithID:(id)arg1 forServices:(id)arg2;
- (void)_initializeConnection:(id)arg1 withMachName:(id)arg2;
- (void)_modifyTextEditingAllowedForReason:(id)arg1 block:(id /* block */)arg2;
- (bool)_remoteTextEditingIsAllowed;
- (void)_updateAttributesForSessionWithID:(id)arg1;
- (void)_updateTextForSessionWithID:(id)arg1;
- (id)activeSessions;
- (void)addEndpoint:(id)arg1;
- (id)allowanceRequestors;
- (void)beginAllowingRemoteTextInput:(id)arg1;
- (oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3;
- (id)begunSessionIDs;
- (id)connections;
- (void)dealloc;
- (id)delegate;
- (void)endAllowingRemoteTextInput:(id)arg1;
- (oneway void)endRemoteTextInputSessionWithID:(id)arg1;
- (id)endpointConnections;
- (void)enumerateServices:(id)arg1 force:(bool)arg2 withBlock:(id /* block */)arg3;
- (id)initWithMachNames:(id)arg1;
- (bool)isEnvironmentEnabled;
- (id)machNames;
- (void)notifyServiceOfPause:(bool)arg1 withReason:(id)arg2;
- (oneway void)performTextOperations:(id)arg1;
- (oneway void)performTextOperations:(id)arg1 resultHandler:(id /* block */)arg2;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2;
- (void)removeEndpoint:(id)arg1;
- (void)setActiveSessions:(id)arg1;
- (void)setAllowanceRequestors:(id)arg1;
- (void)setBegunSessionIDs:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointConnections:(id)arg1;
- (void)setEnvironmentEnabled:(bool)arg1 withReason:(id)arg2;
- (void)setMachNames:(id)arg1;

@end
