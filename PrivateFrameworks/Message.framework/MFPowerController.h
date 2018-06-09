/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFPowerController : NSObject <MFDiagnosticsGenerator> {
    <MFCancelable> * _appStateCancelable;
    float  _batteryLevel;
    int  _batteryNotificationToken;
    NSCountedSet * _identifiers;
    bool  _isForeground;
    int  _pluggedIn;
    unsigned int  _pmNotifier;
    struct IONotificationPort { } * _pmPort;
    NSObject<OS_dispatch_queue> * _powerQueue;
    int  _powerToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) float batteryLevel;
@property (nonatomic, readonly) MFObservable *batteryLevelObservable;
@property (getter=isBatterySaverModeEnabled, readonly) bool batterySaverModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHoldingAssertion, readonly) bool holdingAssertion;
@property (nonatomic, readonly) MFObservable *lowPowerModeObservable;
@property (getter=isPluggedIn, readonly) bool pluggedIn;
@property (nonatomic, readonly) MFObservable *pluggedInObservable;
@property (readonly) Class superclass;

+ (void)powerlog:(id)arg1 eventData:(id)arg2;
+ (id)sharedInstance;

- (void)_applicationForegroundStateChanged:(bool)arg1;
- (void)_applicationForegroundStateChanged_nts:(bool)arg1;
- (double)_assertionTimeout;
- (void)_batteryInformationChanged;
- (bool)_isHoldingTaskAssertion;
- (void)_lowPowerModeChangedNotification:(id)arg1;
- (void)_registerForBatteryLevelChanges;
- (void)_releasePowerAssertion_nts;
- (void)_releaseTaskAssertion_nts;
- (void)_retainPowerAssertion_nts;
- (void)_retainTaskAssertion_nts;
- (void)_setPluggedIn:(unsigned int)arg1;
- (void)_setupAssertionTimer:(double)arg1;
- (void)_unregisterForBatteryLevelChanges;
- (float)batteryLevel;
- (id)batteryLevelObservable;
- (id)batteryLevelStateChangeNotificationObservable;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (id)init;
- (bool)isBatterySaverModeEnabled;
- (bool)isHoldingAssertion;
- (bool)isPluggedIn;
- (id)lowPowerModeObservable;
- (id)pluggedInObservable;
- (id)powerObservable;
- (void)releaseAssertionWithIdentifier:(id)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2;
- (void)startListeningForBatterySaverNotifications;

@end
