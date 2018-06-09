/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCPersistentTimer : NSObject <CUTPowerMonitorDelegate> {
    bool  _disableSystemWaking;
    double  _earlyFireConstantInterval;
    double  _fireTime;
    unsigned long long  _guidancePriority;
    NSObject<OS_os_log> * _logObject;
    double  _minimumEarlyFireProportion;
    NSObject<OS_dispatch_queue> * _queue;
    SEL  _selector;
    NSString * _serviceIdentifier;
    PCSimpleTimer * _simpleTimer;
    double  _startTime;
    id  _target;
    bool  _triggerOnGMTChange;
    id  _userInfo;
    bool  _userVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableSystemWaking;
@property (nonatomic) double earlyFireConstantInterval;
@property (nonatomic, readonly) double fireTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumEarlyFireProportion;
@property (nonatomic, readonly) double startTime;
@property (readonly) Class superclass;
@property (getter=isUserVisible, nonatomic) bool userVisible;

+ (id)_backgroundUpdateQueue;
+ (double)_currentGuidanceTime;
+ (void)_updateTime:(double)arg1 forGuidancePriority:(unsigned long long)arg2;
+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;

- (void).cxx_destruct;
- (double)_earlyFireTime;
- (void)_fireTimerFired;
- (id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 triggerOnGMTChange:(bool)arg7;
- (double)_nextForcedAlignmentAbsoluteTime;
- (void)_updateTimers;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (bool)disableSystemWaking;
- (double)earlyFireConstantInterval;
- (double)fireTime;
- (bool)firingIsImminent;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)invalidate;
- (bool)isUserVisible;
- (bool)isValid;
- (double)minimumEarlyFireProportion;
- (void)scheduleInQueue:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)setDisableSystemWaking:(bool)arg1;
- (void)setEarlyFireConstantInterval:(double)arg1;
- (void)setMinimumEarlyFireProportion:(double)arg1;
- (void)setUserVisible:(bool)arg1;
- (double)startTime;
- (id)userInfo;

@end
