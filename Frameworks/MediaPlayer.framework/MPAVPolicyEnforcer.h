/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVPolicyEnforcer : NSObject {
    MPAVController * _controller;
    bool  _lastKnownScreenRecordingState;
    int  _screenRecordingNotifyToken;
}

@property (nonatomic, readonly) MPAVController *controller;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_isScreenRecordingDidChange:(bool)arg1;
- (void)_registerForScreenRecordingNotifications;
- (void)_unregisterForScreenRecordingNotifications;
- (void)_updateScreenRecordingState;
- (id)controller;
- (void)dealloc;
- (id)initWithAVController:(id)arg1;

@end
