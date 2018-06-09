/* made by EzioChiu.
 */

@protocol SVVideoEventTracker <NSObject>

@optional

- (void)enteredFullscreen;
- (void)exitedFullscreen;
- (void)impressionQuartilePassed:(unsigned long long)arg1;
- (void)impressionThresholdPassed:(double)arg1;
- (void)muteStateChanged:(bool)arg1;
- (void)playbackFailedWithError:(NSError *)arg1;
- (void)playbackFinished;
- (void)playbackInitiated;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)tappedAdvance;
- (void)tappedCallToAction;
- (void)tappedDiscoverMore;
- (void)tappedNowPlaying;
- (void)tappedReplay;
- (void)tappedToToggleControls;

@end
