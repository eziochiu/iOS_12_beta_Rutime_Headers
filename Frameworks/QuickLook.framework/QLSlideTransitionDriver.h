/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLSlideTransitionDriver : QLTransitionDriver

- (void)_animateTransition;
- (void)_animateTransitionUserSlideDismissal;
- (void)animateFinishTransition;
- (void)animateTransition;
- (void)tearDown;

@end
