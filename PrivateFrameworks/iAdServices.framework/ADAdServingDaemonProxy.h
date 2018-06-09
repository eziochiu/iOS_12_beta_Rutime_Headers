/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAdServingDaemonProxy : NSObject {
    long long  _interruptionCount;
    double  _lastLaunchTimestamp;
    NSMutableSet * _launchAssertions;
    double  _nextScheduledLaunch;
    bool  _openApplicationInProgress;
    NSObject<OS_dispatch_queue> * _proxyQueue;
    bool  _serviceLaunchThrottled;
    long long  _unexpectedTerminationCount;
    bool  _waitingForAdServingDaemon;
}

@property (nonatomic) long long interruptionCount;
@property (nonatomic) double lastLaunchTimestamp;
@property (nonatomic, retain) NSMutableSet *launchAssertions;
@property (nonatomic) double nextScheduledLaunch;
@property (nonatomic) bool openApplicationInProgress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *proxyQueue;
@property (nonatomic, readonly) double remainingLaunchBackoff;
@property (nonatomic, readonly) bool serviceLaunchThrottled;
@property (nonatomic) long long unexpectedTerminationCount;
@property (nonatomic) bool waitingForAdServingDaemon;

+ (id)sharedInstance;

- (void)_adServingDaemonAvailable;
- (void)_considerLaunchingAdServingDaemon;
- (void)considerLaunchingAdServingDaemon;
- (void)dealloc;
- (id)init;
- (long long)interruptionCount;
- (double)lastLaunchTimestamp;
- (id)launchAssertions;
- (double)nextScheduledLaunch;
- (bool)openApplicationInProgress;
- (void)performPostAppLaunchActions:(id)arg1;
- (id)proxyQueue;
- (void)releaseLaunchAssertion:(id)arg1;
- (double)remainingLaunchBackoff;
- (void)reportAdServingDaemonInterruption;
- (void)reportAdServingDaemonUnexpectedTermination;
- (void)resetAdServingDaemonThrottle;
- (bool)serviceLaunchThrottled;
- (void)setInterruptionCount:(long long)arg1;
- (void)setLastLaunchTimestamp:(double)arg1;
- (void)setLaunchAssertions:(id)arg1;
- (void)setNextScheduledLaunch:(double)arg1;
- (void)setOpenApplicationInProgress:(bool)arg1;
- (void)setUnexpectedTerminationCount:(long long)arg1;
- (void)setWaitingForAdServingDaemon:(bool)arg1;
- (void)takeLaunchAssertion:(id)arg1;
- (long long)unexpectedTerminationCount;
- (bool)waitingForAdServingDaemon;

@end
