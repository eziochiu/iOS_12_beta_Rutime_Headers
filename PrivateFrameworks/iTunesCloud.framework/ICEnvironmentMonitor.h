/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICEnvironmentMonitor : NSObject <NWNetworkOfInterestManagerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    long long  _cellularLinkQuality;
    bool  _currentNetworkLinkHighQuality;
    bool  _isCharging;
    bool  _isRemoteServerLikelyReachable;
    bool  _isWiFiActive;
    long long  _lastKnownNetworkType;
    NWPathEvaluator * _networkPathEvaluator;
    long long  _networkType;
    NSMutableSet * _networksOfInterest;
    NWNetworkOfInterestManager * _noiManager;
    NSMapTable * _observers;
    unsigned int  _powerNotificationRef;
    void * _symptomPresentationFeedDyLibHandle;
    NSString * _telephonyOperatorName;
    NSString * _telephonyRegistrationStatus;
    struct __CTServerConnection { } * _telephonyServerConnectionRef;
    NSString * _telephonyStatusIndicator;
    bool  _wifiAssociated;
}

@property (getter=isCharging, nonatomic, readonly) bool charging;
@property (getter=isCurrentNetworkLinkHighQuality, nonatomic, readonly) bool currentNetworkLinkHighQuality;
@property (nonatomic, readonly) long long lastKnownNetworkType;
@property (nonatomic, readonly) long long networkType;
@property (getter=isRemoteServerLikelyReachable, nonatomic, readonly) bool remoteServerLikelyReachable;
@property (nonatomic, readonly, copy) NSString *telephonyOperatorName;
@property (nonatomic, readonly, copy) NSString *telephonyRegistrationStatus;
@property (nonatomic, readonly, copy) NSString *telephonyStatusIndicator;
@property (getter=isWiFiActive, nonatomic, readonly) bool wiFiActive;
@property (getter=isWiFiAssociated, nonatomic, readonly) bool wifiAssociated;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (long long)_currentCellularLinkQuality;
- (long long)_currentNetworkType;
- (void)_handleApplicationDidEnterForegroundNotification:(id)arg1;
- (void)_handleCTServerConnectionNotification:(id)arg1 userInfo:(id)arg2;
- (bool)_isWiFiAssociated;
- (long long)_networkTypeFromTelephonyStatusIndicator:(id)arg1;
- (void)_onQueue_updateNetworkReachabilityAndNotifyObservers:(bool)arg1;
- (void)_onQueue_updateTelephonyStateAndNotifyObservers:(bool)arg1;
- (void)_updatePowerStateWithService:(unsigned int)arg1 shouldNotifyObservers:(bool)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)didStartTrackingNOI:(id)arg1;
- (void)didStopTrackingAllNOIs:(id)arg1;
- (void)didStopTrackingNOI:(id)arg1;
- (id)init;
- (bool)isCharging;
- (bool)isCurrentNetworkLinkHighQuality;
- (bool)isRemoteServerLikelyReachable;
- (bool)isWiFiActive;
- (bool)isWiFiAssociated;
- (long long)lastKnownNetworkType;
- (long long)networkType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;
- (id)telephonyOperatorName;
- (id)telephonyRegistrationStatus;
- (id)telephonyStatusIndicator;

@end
