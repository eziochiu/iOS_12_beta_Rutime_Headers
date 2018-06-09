/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTNetworkSupport : NSObject {
    Class  _APSConnectionClass;
    APSConnection * _apsConnection;
    bool  _criticalReliabilityEnabledState;
    bool  _enableCriticalReliability;
    NSTimer * _reliabilityAttemptTimer;
}

@property (nonatomic, readonly) bool allowAnyNetwork;
@property (nonatomic, readonly) bool dataActiveAndReachable;
@property (nonatomic) bool enableCriticalReliability;
@property (nonatomic, readonly) bool networkActive;
@property (nonatomic, readonly) bool networkEnabled;
@property (nonatomic, readonly) bool networkReachable;
@property (nonatomic, readonly) bool validNetworkActive;
@property (nonatomic, readonly) bool validNetworkEnabled;
@property (nonatomic, readonly) bool validNetworkReachable;
@property (nonatomic, readonly) bool wiFiActiveAndReachable;
@property (nonatomic, readonly) bool willSearchForNetwork;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearReliabilityTimeoutInterval;
- (void)_createAPSConnectionIfNeeded;
- (void)_reallySetCriticalReliability:(bool)arg1;
- (void)_setReliabilityTimeoutInterval;
- (void)_tryToEnableReliability;
- (bool)allowAnyNetwork;
- (bool)dataActiveAndReachable;
- (bool)enableCriticalReliability;
- (bool)networkActive;
- (bool)networkEnabled;
- (bool)networkReachable;
- (void)setEnableCriticalReliability:(bool)arg1;
- (bool)validNetworkActive;
- (bool)validNetworkActiveForBundleId:(id)arg1;
- (bool)validNetworkEnabled;
- (bool)validNetworkEnabledForBundleId:(id)arg1;
- (bool)validNetworkReachable;
- (bool)validNetworkReachableForBundleId:(id)arg1;
- (bool)wiFiActiveAndReachable;
- (bool)willSearchForNetwork;
- (bool)willSearchForNetworkForBundleId:(id)arg1;

@end
