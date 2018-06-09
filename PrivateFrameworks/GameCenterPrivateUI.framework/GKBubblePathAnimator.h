/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubblePathAnimator : NSObject

@property (nonatomic, readonly) long long animatorType;

+ (id)hiTimingFunction;
+ (id)sharedBubblePathAnimator;

- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)animatorType;
- (bool)bubblesOnscreenAtBeginning;
- (bool)bubblesOnscreenAtEnd;
- (id)effectiveViewForContext:(id)arg1;
- (double)minimumDurationForViewAnimations;

@end
