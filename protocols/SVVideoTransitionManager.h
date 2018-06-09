/* made by EzioChiu.
 */

@protocol SVVideoTransitionManager <NSObject>

@required

- (void)addTransitionObserver:(id <SVVideoTransitionObserver>)arg1;
- (void)removeTransitionObserver:(id <SVVideoTransitionObserver>)arg1;
- (void)transitionToVideo:(id <SVVideo>)arg1;

@end
