/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamPhysicalCaptureNotifier : NSObject {
    long long  __volumeDownButtonState;
    long long  __volumeUpButtonState;
    <ICDocCamPhysicalCaptureNotifierDelegate> * _delegate;
    bool  _enabled;
    long long  _state;
}

@property (setter=_setVolumeDownButtonState:, nonatomic) long long _volumeDownButtonState;
@property (setter=_setVolumeUpButtonState:, nonatomic) long long _volumeUpButtonState;
@property (nonatomic) <ICDocCamPhysicalCaptureNotifierDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (setter=_setState:, nonatomic) long long state;

- (void).cxx_destruct;
- (void)_handleVolumeDownButtonDownNotification:(id)arg1;
- (void)_handleVolumeDownButtonUpNotification:(id)arg1;
- (void)_handleVolumeUpButtonDownNotification:(id)arg1;
- (void)_handleVolumeUpButtonUpNotification:(id)arg1;
- (void)_setState:(long long)arg1;
- (void)_setVolumeDownButtonState:(long long)arg1;
- (void)_setVolumeUpButtonState:(long long)arg1;
- (void)_updateCaptureButtonNotifications;
- (void)_updateStateAndNotifyDelegateIfNeeded;
- (long long)_volumeDownButtonState;
- (long long)_volumeUpButtonState;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isEnabled;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (long long)state;

@end
