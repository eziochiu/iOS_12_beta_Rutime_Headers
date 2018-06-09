/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor {
    PCPersistentTimer * _lifetimeTimer;
}

+ (bool)willMonitorLifetime:(id)arg1;

- (void).cxx_destruct;
- (void)_timerFired:(id)arg1;
- (id)updateForModeAssertionDetails:(id)arg1 date:(id)arg2;

@end
