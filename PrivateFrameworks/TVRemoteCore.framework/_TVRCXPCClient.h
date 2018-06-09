/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCXPCClient : NSObject <TVRCXPCRequestProtocol, TVRCXPCResponseProtocol> {
    NSMutableDictionary * _eventObserversByID;
    <TVRCXPCRequestProtocol> * _remoteObject;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *eventObserversByID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <TVRCXPCRequestProtocol> *remoteObject;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_broadcastStateUpdateToDevices:(id)arg1;
- (void)_disconnectAllDevices;
- (void)_setupConnectionIfNeeded;
- (void)addEventObserver:(id)arg1 forDeviceWithIdentifier:(id)arg2;
- (void)beginDeviceQuery;
- (void)beginWifiMonitoring;
- (void)cancelAuthChallengeForDeviceWithIdentifier:(id)arg1;
- (void)closeConnectionToDeviceWithIdentifier:(id)arg1;
- (void)deviceQueryUpdatedDiscoveredDevices:(id)arg1;
- (void)deviceUpdatedState:(id)arg1;
- (void)deviceWithState:(id)arg1 encounteredAuthChallengeOfType:(long long)arg2 codeToEnterOnDevice:(id)arg3;
- (void)enableTVRemoteModule;
- (void)endDeviceQuery;
- (void)endWifiMonitoring;
- (id)eventObserversByID;
- (void)fulfillAuthChallengeForDeviceWithIdentifier:(id)arg1 withLocallyEnteredCode:(id)arg2;
- (id)init;
- (void)isTVRemoteModuleEnabled:(id /* block */)arg1;
- (void)openConnectionToDeviceWithIdentifier:(id)arg1;
- (id)remoteObject;
- (void)removeEventObserver:(id)arg1 forDeviceWithIdentifier:(id)arg2;
- (void)sendButtonEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendGameControllerEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendInputReturnKeyToDeviceWithIdentifier:(id)arg1;
- (void)sendInputText:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendInputTextPayload:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendTouchEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)setEventObserversByID:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setVoiceRecorderAutomaticRecording:(bool)arg1 forDeviceWithIdentifier:(id)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)startVoiceRecordingForDeviceWithIdentifier:(id)arg1;
- (void)stopVoiceRecordingForDeviceWithIdentifier:(id)arg1;
- (void)wifiStateUpdatedWithOldState:(long long)arg1 andNewState:(long long)arg2;
- (id)xpcConnection;

@end
