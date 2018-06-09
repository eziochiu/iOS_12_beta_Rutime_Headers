/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIRelayDelegateIOS : NSObject <RWIRelayDelegate> {
    BKSApplicationStateMonitor * _applicationStateMonitor;
    NSTimer * _preventDeviceFromIdlingTimer;
    RWIRelay * _relay;
}

- (void).cxx_destruct;
- (bool)_allowApplication:(struct { unsigned int x1[8]; })arg1 bundleIdentifier:(id)arg2;
- (void)_backBoardApplicationStateChanged:(id)arg1;
- (void)_createApplicationStateMonitorIfNeeded;
- (bool)_hasCarrierRemoteInspectorEntitlement:(struct { unsigned int x1[8]; })arg1;
- (bool)_hasRemoteInspectorEntitlement:(struct { unsigned int x1[8]; })arg1;
- (bool)_isProxyApplication:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_startPreventingDeviceFromIdling;
- (void)_stopPreventingDeviceFromIdling;
- (void)_tickleIdleTimer;
- (void)_updateDeviceIdlePrevention;
- (bool)_usedDevelopmentProvisioningProfile:(struct { unsigned int x1[8]; })arg1;
- (void)relay:(id)arg1 activateApplicationWithBundleIdentifier:(id)arg2;
- (bool)relay:(id)arg1 allowIncomingApplicationConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (bool)relay:(id)arg1 allowIncomingApplicationViaProxy:(struct { unsigned int x1[8]; })arg2;
- (void)relay:(id)arg1 applicationConnected:(id)arg2;
- (void)relay:(id)arg1 applicationDisconnected:(id)arg2;
- (id)relay:(id)arg1 applicationInfoForIncomingConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (void)relay:(id)arg1 applicationUpdated:(id)arg2;
- (void)relay:(id)arg1 unhandledApplicationXPCMessage:(id)arg2;
- (void)relayClientConnectionDidChange:(id)arg1;
- (void)relayInitialize:(id)arg1;
- (id)relaySetupResponseForClientConnection:(id)arg1;

@end