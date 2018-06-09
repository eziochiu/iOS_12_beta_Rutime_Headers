/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol> {
    bool  _connected;
    <CXCallSourceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (getter=isConnected, nonatomic) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isPermittedToUsePrivateAPI, nonatomic, readonly) bool permittedToUsePrivateAPI;
@property (getter=isPermittedToUsePublicAPI, nonatomic, readonly) bool permittedToUsePublicAPI;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CXProviderVendorProtocol> *vendorProtocolDelegate;

- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)arg1;
- (void)beginWithCompletionHandler:(id /* block */)arg1;
- (id)bundleIdentifier;
- (id)bundleURL;
- (oneway void)commitTransaction:(id)arg1;
- (id)delegate;
- (id)description;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(bool)arg1;
- (id)identifier;
- (id)init;
- (bool)isConnected;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (id)queue;
- (oneway void)registerWithConfiguration:(id)arg1;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (oneway void)requestTransaction:(id)arg1 reply:(id /* block */)arg2;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)vendorProtocolDelegate;

@end
