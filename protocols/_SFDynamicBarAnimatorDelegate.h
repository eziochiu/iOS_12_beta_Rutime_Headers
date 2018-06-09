/* made by EzioChiu.
 */

@protocol _SFDynamicBarAnimatorDelegate <NSObject>

@required

- (bool)dynamicBarAnimator:(_SFDynamicBarAnimator *)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (double)dynamicBarAnimator:(_SFDynamicBarAnimator *)arg1 minimumTopBarHeightForOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(_SFDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(_SFDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(_SFDynamicBarAnimator *)arg1;

@end