/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLMediaItemViewController : QLMediaItemBaseViewController {
    long long  _playbackTimeFormat;
    NSTimer * _playbackTimeHiddenTimer;
    NSMutableDictionary * _playingInfo;
    UIScrollView * _scrubberScrollView;
    UILabel * _timeLabel;
    UIView * _timeLabelBackground;
    NSLayoutConstraint * _timeLabelConstraintX;
    NSLayoutConstraint * _timeLabelConstraintY;
}

- (void).cxx_destruct;
- (id)_playingInfoWithPlaybackDuration:(double)arg1 elapsedTime:(double)arg2;
- (void)_registerForCommandCenterHandlers;
- (void)_unregisterForCommandCenterHandlers;
- (void)_updateCommandCenterPlayingInfoWithCurrentPlaybackTimeInformation;
- (void)dealloc;
- (void)hideTimeLabel;
- (void)hideTimeLabelAfterDelay;
- (void)hideTimeLabelAnimated:(bool)arg1;
- (void)hostApplicationDidEnterBackground:(id)arg1;
- (id)labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3;
- (void)observePlayingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)removeTimeLabel;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setTimeLabelNeedsUpdate;
- (void)setUpTimeLabelIfNeeded;
- (void)showTimeLabel;
- (void)showTimeLabelIfNeeded;
- (id)stringFromTimeInterval:(double)arg1;
- (id)timeLabelScrollView;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)userScrubbedInControlCenter:(id)arg1;

@end
