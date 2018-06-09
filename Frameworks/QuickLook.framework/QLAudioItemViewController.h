/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLAudioItemViewController : QLMediaItemViewController <UIGestureRecognizerDelegate> {
    QLOverlayPlayButton * _playButton;
    bool  _previewIsVisisble;
    QLWaveformScrubberView * _scrubber;
    UIView * _scrubberContainer;
    UIScrollView * _scrubberContainerScrollView;
    double  _scrubberVerticalOffset;
    bool  _scrubbing;
    NSLayoutConstraint * _topScrubber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIView *scrubberContainer;
@property double scrubberVerticalOffset;
@property bool scrubbing;
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *topScrubber;

+ (id)AV_indicatorBackgroundColor;
+ (id)AV_indicatorForegroundColor;

- (void).cxx_destruct;
- (void)_tapRecognized:(id)arg1;
- (id)accessoryView;
- (void)addScrubberWithDeferral;
- (bool)canEnterFullScreen;
- (bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)dealloc;
- (void)didChangePlayingStatus;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (id)scrubberContainer;
- (double)scrubberVerticalOffset;
- (bool)scrubbing;
- (void)setPlayControlsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setScrubberContainer:(id)arg1;
- (void)setScrubberVerticalOffset:(double)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setTopScrubber:(id)arg1;
- (id)timeLabelScrollView;
- (id)topScrubber;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;

@end
