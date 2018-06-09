/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeHardwareButtonController : NSObject {
    <MPVolumeControllerDataSource> * _activeDataSource;
    bool  _debounceVolumeRepeat;
    bool  _didRegisterForButtonNotifications;
    double  _pendingVolumeChange;
}

@property (nonatomic, retain) <MPVolumeControllerDataSource> *activeDataSource;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification;
- (void)_applicationWillResignActiveNotification;
- (double)_calculateButtonRepeatDelay;
- (void)_changeVolumeBy:(double)arg1;
- (void)_commitVolumeChange;
- (id)_init;
- (void)_registerForButtonNotificationsIfNeeded;
- (void)_unregisterForButtonNotificationsIfNeeded;
- (void)_volumeDownButtonTouchDown:(id)arg1;
- (void)_volumeDownButtonTouchUp:(id)arg1;
- (void)_volumeUpButtonTouchDown:(id)arg1;
- (void)_volumeUpButtonTouchUp:(id)arg1;
- (id)activeDataSource;
- (void)cancelVolumeEvent;
- (void)decreaseVolume;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(bool)arg2;
- (void)handleVolumeDownButton;
- (void)handleVolumeUpButton;
- (void)increaseVolume;
- (void)setActiveDataSource:(id)arg1;

@end
