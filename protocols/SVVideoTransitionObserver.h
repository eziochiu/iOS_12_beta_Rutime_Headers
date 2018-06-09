/* made by EzioChiu.
 */

@protocol SVVideoTransitionObserver <NSObject>

@required

- (void)willTransitionToVideo:(id <SVVideo>)arg1 withTransitionCoordinator:(id <SVPlaybackTransitionCoordinator>)arg2;

@end
