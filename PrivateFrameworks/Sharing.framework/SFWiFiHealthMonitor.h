/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFWiFiHealthMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    int  _lockdownActivated;
    int  _lockdownActivationNotifyToken;
    id /* block */  _statusHandler;
    struct __WiFiDeviceClient { } * _wifiDevice;
    bool  _wifiDeviceSetup;
    struct __WiFiManagerClient { } * _wifiManager;
    bool  _wifiManagerSetup;
    CURetrier * _wifiRetrier;
    unsigned long long  _wifiStatusBadTicks;
    double  _wifiStatusDebounceSecs;
    NSObject<OS_dispatch_source> * _wifiStatusDebounceTimer;
    long long  _wifiStatusExternal;
    unsigned long long  _wifiStatusGoodTicks;
    long long  _wifiStatusInternal;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ statusHandler;

- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidate;
- (void)_update;
- (void)_wifiAutoJoinNotification:(id)arg1;
- (void)_wifiEnsureStarted;
- (void)_wifiEnsureStopped;
- (void)_wifiStatusChangedExternal:(long long)arg1;
- (void)_wifiStatusChangedInternal:(long long)arg1;
- (void)activate;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)reset;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setStatusHandler:(id /* block */)arg1;
- (id /* block */)statusHandler;

@end
