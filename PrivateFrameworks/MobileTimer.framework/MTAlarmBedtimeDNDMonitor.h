/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmBedtimeDNDMonitor : NSObject <DNDModeAssertionUpdateListener, MTAgentDiagnosticDelegate, MTAgentNotificationListener, MTAlarmObserver> {
    DNDModeAssertionService * _assertionService;
    MTAlarmStorage * _storage;
}

@property (nonatomic, retain) DNDModeAssertionService *assertionService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTAlarmStorage *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assertionService;
- (void)dealloc;
- (void)disengageDND;
- (void)engageDNDIfNeededEngageEvent:(bool)arg1;
- (void)engageDNDWithCompletion:(id /* block */)arg1;
- (id)gatherDiagnostics;
- (void)handleNotification:(id)arg1;
- (bool)handlesNotification:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (bool)isDNDWindow:(id)arg1 engageEvent:(bool)arg2;
- (void)modeAssertionService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2;
- (void)printDiagnostics;
- (void)scheduleForNextDNDWindow:(id)arg1;
- (void)setAssertionService:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (id)storage;

@end
