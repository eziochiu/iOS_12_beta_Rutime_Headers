/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairingProximity.framework/PairingProximity
 */

@interface PPNearbyWatchNotifier : NSObject <PPDiscoveryManagerDelegate, PPNearbyWatchBulletinProviderDelegate> {
    id /* block */  _discoveryCompletion;
    PPDiscoveryManager * _discoveryManager;
    NSXPCConnection * _notificationService;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ discoveryCompletion;
@property (nonatomic, retain) PPDiscoveryManager *discoveryManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCConnection *notificationService;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;

+ (bool)isWatchAppRemoved;
+ (id)sharedNotifier;
+ (bool)shouldScanForNearbyDevices;

- (void).cxx_destruct;
- (void)_cleanupDiscoveryDidFindDevice:(bool)arg1 error:(id)arg2;
- (void)bulletinProviderDidClearBulletins:(id)arg1;
- (void)cancelDiscovery;
- (void)didDiscoverDeviceWithAdvertisingID:(id)arg1 signalStrength:(long long)arg2;
- (void)didStopDiscovering;
- (id)discoverForNearbyWatchesWithCompletion:(id /* block */)arg1;
- (id)discoverForTimeInterval:(double)arg1 signalLimit:(long long)arg2 completion:(id /* block */)arg3;
- (id /* block */)discoveryCompletion;
- (id)discoveryManager;
- (id)notificationService;
- (void)prepareServiceConnectionIfNeeded;
- (void)setDiscoveryCompletion:(id /* block */)arg1;
- (void)setDiscoveryManager:(id)arg1;
- (void)setNotificationService:(id)arg1;
- (void)setTimerSource:(id)arg1;
- (id)timerSource;

@end
