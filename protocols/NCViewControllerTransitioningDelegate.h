/* made by EzioChiu.
 */

@protocol NCViewControllerTransitioningDelegate <UIViewControllerTransitioningDelegate>

@required

- (void)setTransitioningDelegateObserver:(id <NCViewControllerTransitioningDelegateObserver>)arg1;
- (<NCViewControllerTransitioningDelegateObserver> *)transitioningDelegateObserver;

@end
