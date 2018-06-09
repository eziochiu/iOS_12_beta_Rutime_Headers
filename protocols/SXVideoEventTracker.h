/* made by EzioChiu.
 */

@protocol SXVideoEventTracker <NSObject>

@optional

- (void)enteredFullscreen;
- (void)exitedFullscreen;
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
- (void)timeElapsed:(double)arg1 duration:(double)arg2;

@end
