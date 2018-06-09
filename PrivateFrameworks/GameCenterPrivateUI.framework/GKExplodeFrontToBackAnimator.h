/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKExplodeFrontToBackAnimator : GKBubblePathAnimator

+ (double)preferredDuration;

- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (id)explodeAnimationsForBubble:(id)arg1 startPoint:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg2 contractPoint:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg3 arcX:(double)arg4 endPoint:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg5 duration:(double)arg6 context:(id)arg7;

@end
