/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPowerSavingModeManager : NSObject <HDAssertionObserver> {
    HDAssertionManager * _assertionManager;
    bool  _powerSavingModeEnabled;
    NSObject<OS_dispatch_queue> * _queue;
    RadiosPreferences * _radioPrefs;
    bool  _supportsCellularTelephony;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_powerSavingModeDidChange;
- (void)_queue_disablePowerSavingIfNeeded;
- (void)_queue_enablePowerSavingIfNeeded;
- (void)_queue_powerSavingModeDidChange;
- (void)_startObservingPowerSavingModeSetting;
- (void)_stopObservingPowerSavingModeSetting;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (void)dealloc;
- (id)init;
- (bool)supportsPowerSavingForActivityType:(unsigned long long)arg1;
- (id)takeSessionAssertionForOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2;

@end
