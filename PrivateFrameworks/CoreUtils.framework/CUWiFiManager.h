/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUWiFiManager : NSObject {
    bool  _activateCalled;
    bool  _activated;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    bool  _updating;
    bool  _wakeOnWirelessEnabled;
    bool  _wakeOnWirelessEnabledChanged;
    bool  _wifiAutoJoinMonitorEnabled;
    bool  _wifiAutoJoinMonitorSetup;
    struct __WiFiDeviceClient { } * _wifiDevice;
    bool  _wifiDeviceSetup;
    unsigned int  _wifiFlags;
    struct __WiFiManagerClient { } * _wifiManager;
    bool  _wifiManagerSetup;
    CURetrier * _wifiRetrier;
    int  _wifiState;
    id /* block */  _wifiStateChangedHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool wakeOnWirelessEnabled;
@property (nonatomic, readonly) unsigned int wifiFlags;
@property (nonatomic, readonly) int wifiState;
@property (nonatomic, copy) id /* block */ wifiStateChangedHandler;

- (void).cxx_destruct;
- (void)_activateSafeInvokeBlock:(id /* block */)arg1;
- (void)_interrupted;
- (void)_invalidated;
- (void)_update;
- (void)_update:(bool)arg1;
- (void)_updateLockedMobileWiFi:(bool)arg1;
- (void)_wifiAutoJoinNotification:(id)arg1;
- (void)_wifiEnsureStarted;
- (void)_wifiEnsureStopped;
- (unsigned int)_wifiFlagsUncached;
- (int)_wifiStateUncached;
- (void)activate;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)performUpdate:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setWakeOnWirelessEnabled:(bool)arg1;
- (void)setWifiStateChangedHandler:(id /* block */)arg1;
- (bool)wakeOnWirelessEnabled;
- (unsigned int)wifiFlags;
- (int)wifiState;
- (id /* block */)wifiStateChangedHandler;

@end
