/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXVisualAlertManager : NSObject <DNDStateUpdateListener> {
    NSDictionary * _activePattern;
    unsigned long long  _activePatternCursor;
    unsigned long long  _alertTypes;
    AXCameraTorchManagerBackgroundAdapter * _asyncManagerAdapter;
    NSMutableArray * _bulletins;
    bool  _captureSessionRunning;
    VISAXNotificationHandler * _deviceLockStateChangedNotificationHandler;
    bool  _isDeviceLocked;
    bool  _isQuietModeEnabled;
    bool  _isRingerSwitchSilent;
    bool  _isTorchEnabledInControlCenter;
    NSArray * _notificationHandlers;
    NSDictionary * _patternToUseForVisualAlertAfterCaptureSessionStopsRunning;
    NSDictionary * _patterns;
    int  _ringerStateNotifyToken;
    bool  _shouldRepeatPattern;
    bool  _skipAutomaticStopOnUserInteraction;
    AXDispatchTimer * _timer;
    bool  _torchDeviceOn;
    bool  _torchDeviceOpen;
    AXDispatchTimer * _torchForceShutdownTimer;
    VISAXNotificationHandler * _torchInControlCenterWasEnabledNotificationHandler;
    unsigned long long  _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
    bool  _videoConferenceCallRinging;
    DNDStateService * disturbanceService;
}

@property (setter=_setActivePattern:, nonatomic, retain) NSDictionary *_activePattern;
@property (nonatomic, readonly) AXCameraTorchManagerBackgroundAdapter *_asyncManagerAdapter;
@property (nonatomic, readonly) NSDictionary *_patterns;
@property (getter=_isTorchDeviceOn, nonatomic, readonly) bool _torchDeviceOn;
@property (getter=_isTorchDeviceOpen, nonatomic, readonly) bool _torchDeviceOpen;
@property (setter=_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:, nonatomic) unsigned long long _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DNDStateService *disturbanceService;
@property (readonly) unsigned long long hash;
@property (nonatomic) int ringerStateNotifyToken;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedVisualAlertManager;

- (void).cxx_destruct;
- (id)_activePattern;
- (id)_asyncManagerAdapter;
- (void)_beginVisualAlertForType:(unsigned long long)arg1 repeat:(bool)arg2;
- (void)_beginVisualAlertForType:(unsigned long long)arg1 repeat:(bool)arg2 skipAutomaticStopOnUserInteraction:(bool)arg3;
- (void)_endVisualAlert;
- (void)_handleBeginVisualAlertForAlarmWithSound:(bool)arg1;
- (void)_handleBeginVisualAlertForIncomingCall;
- (void)_handleBeginVisualAlertForIncomingVideoConferenceCall;
- (void)_handleCaptureSessionDidStartRunning;
- (void)_handleCaptureSessionDidStopRunning;
- (void)_handleDeviceWasLocked;
- (void)_handleDeviceWasUnlocked;
- (void)_handleEndVisualAlertForAlarm;
- (void)_handleEndVisualAlertForIncomingCall;
- (void)_handleEndVisualAlertForIncomingVideoConferenceCall;
- (void)_handleLockButtonPressed;
- (void)_handleQuietModeWasDisabled;
- (void)_handleQuietModeWasEnabled;
- (void)_handleRingerSwitchToggled;
- (void)_handleSecondaryVisualAlertManagerDidStart;
- (void)_handleTorchInControlCenterWasDisabled;
- (void)_handleTorchInControlCenterWasEnabled;
- (void)_handleVideoConferenceCallRinging;
- (void)_handleVisualAlertForExternalApplication;
- (void)_handleVisualAlertForIncomingMessage;
- (void)_handleVisualAlertForRegularNotification;
- (void)_handleVolumeChanged;
- (bool)_hasVideoConferenceCameraTorchManager;
- (void)_insertCustomLogicForSystemWideServer;
- (bool)_isTorchDeviceOn;
- (bool)_isTorchDeviceOpen;
- (bool)_isTorchEnabledInControlCenter;
- (id)_normalizedStrobePatternForOriginalPattern:(id)arg1;
- (id)_patterns;
- (void)_processNextVisualAlertComponent;
- (void)_setActivePattern:(id)arg1;
- (void)_setTorchDeviceOn:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_setTorchDeviceOpen:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:(unsigned long long)arg1;
- (bool)_shouldHandleVisualAlertsForVideoConferenceCallsInConferenceFramework;
- (void)_springBoardLockButtonPress:(id)arg1;
- (void)_springBoardLockStateChange:(id)arg1;
- (void)_springBoardVolumeChange:(id)arg1;
- (void)_startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2;
- (void)_stop;
- (bool)_supportsVisualAlertsForVideoConferenceCalls;
- (unsigned long long)_typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
- (void)addBulletin:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)disturbanceService;
- (id)existingBulletinForBulletin:(id)arg1;
- (id)init;
- (void)removeBulletin:(id)arg1;
- (int)ringerStateNotifyToken;
- (void)setDisturbanceService:(id)arg1;
- (void)setRingerStateNotifyToken:(int)arg1;
- (void)startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)stop;

@end