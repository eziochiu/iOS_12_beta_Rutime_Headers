/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
    unsigned int  _autoHidingForItemChange;
    unsigned int  _requestExitAfterHidingControls;
    unsigned int  _rotateAfterHidingControls;
    unsigned int  _scheduledAutoHide;
    unsigned int  _showControlsAfterRotate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_autohideControlsOverlay;
- (void)_hideOverlayWithAnimation:(bool)arg1;
- (void)_hideOverlayWithAnimation:(bool)arg1 shouldUpdateAutohideFlag:(bool)arg2;
- (void)_resumedEventsOnlyNotification:(id)arg1;
- (bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (long long)_validInterfaceOrientation;
- (bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (bool)canHideOverlay:(bool)arg1;
- (bool)canShowControlsOverlay;
- (void)cancelControlsOverlayAutohide;
- (bool)controlsOverlayVisible;
- (void)dealloc;
- (void)displayVideoViewOnScreen;
- (bool)forceScaleToFitInPortrait;
- (void)hideOverlayAnimated:(bool)arg1;
- (bool)inhibitOverlay;
- (id)init;
- (void)loadView;
- (void)overlayDidBeginScrubbing:(id)arg1;
- (void)overlayDidEndScrubbing:(id)arg1;
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1;
- (void)setCanShowControlsOverlay:(bool)arg1;
- (void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2 force:(bool)arg3;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDisableControlsAutohide:(bool)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setInhibitOverlay:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setOrientation:(long long)arg1 animate:(bool)arg2;
- (void)setPlayer:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)showOverlayAnimated:(bool)arg1;
- (void)showOverlayIfNecessary;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)swipableViewHadActivity:(id)arg1;
- (void)transformVideoForInterfaceOrientation:(long long)arg1 animate:(bool)arg2;
- (bool)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2;
- (bool)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2;
- (bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
