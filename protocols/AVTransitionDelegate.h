/* made by EzioChiu.
 */

@protocol AVTransitionDelegate <NSObject>

@required

- (void)transitionWillComplete:(AVTransition *)arg1 success:(bool)arg2;

@end
