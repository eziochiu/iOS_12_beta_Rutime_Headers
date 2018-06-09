/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {
    EKEventStore * _eventStore;
    PCPersistentTimer * _lifetimeTimer;
}

+ (bool)willMonitorLifetime:(id)arg1;

- (void).cxx_destruct;
- (void)_calendarEventStoreChangedWithNotification:(id)arg1;
- (void)_timerFired:(id)arg1;
- (id)init;
- (id)updateForModeAssertionDetails:(id)arg1 date:(id)arg2;

@end
