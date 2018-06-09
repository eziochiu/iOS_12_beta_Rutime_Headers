/* made by EzioChiu.
 */

@protocol GKBubbleFlowableViewController <NSObject>

@optional

- (GKBubblePathAnimator *)bubbleAnimatorForRotation;
- (GKBubblePathAnimator *)bubbleAnimatorForTransitionFromViewController:(UIViewController *)arg1;
- (GKBubblePathAnimator *)bubbleAnimatorForTransitionToViewController:(UIViewController *)arg1;
- (GKBubbleFlowContainerView *)bubbleContainerView;
- (double)bubbleFlowAnimateInDuration;
- (double)bubbleFlowAnimateOutDuration;
- (double)bubbleFlowSubviewFadeInDelay;
- (double)bubbleFlowSubviewFadeInDuration;
- (double)bubbleFlowSubviewFadeOutDelay;
- (double)bubbleFlowSubviewFadeOutDuration;
- (NSArray *)bubblesUsedForAnyTransition;
- (void)configureControlForBubble:(GKBubbleFlowBubbleControl *)arg1;
- (UIView *)containerViewForBubbleOfType:(long long)arg1;
- (void)delayAppearingWithBubbleFlowUntil:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)delayDisappearingWithBubbleFlowUntil:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalScreenFrameInViewCoordinatesForBubbleOfType:(long long)arg1;
- (bool)readyToAppearWithBubbleFlow;
- (bool)readyToDisappearWithBubbleFlow;
- (bool)shouldUseSlidingDoorWhenTransitioningFrom;
- (bool)shouldUseSlidingDoorWhenTransitioningTo;
- (bool)updateBubbleTextImmediatelyForTransitionFromViewController:(UIViewController *)arg1;
- (void)viewDidAppearAnimated:(bool)arg1 bubbleFlow:(bool)arg2;
- (void)viewDidDisappearAnimated:(bool)arg1 bubbleFlow:(bool)arg2;
- (void)viewWillAppearAnimated:(bool)arg1 bubbleFlow:(bool)arg2;
- (void)viewWillDisappearAnimated:(bool)arg1 bubbleFlow:(bool)arg2;
- (NSArray *)viewsToAnimateInWhileAppearingWithBubbleFlow;
- (NSArray *)viewsToAnimateOutWhileDisappearingWithBubbleFlow;
- (void)willAnimateAppearingWithBubbleFlow;
- (void)willAnimateDisappearingWithBubbleFlow;
- (void)willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 fromViewController:(UIViewController *)arg4;
- (void)willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 toViewController:(UIViewController *)arg4;

@end
