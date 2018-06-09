/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBAppIconForceTouchDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) float animationDurationMultiplier;
@property (nonatomic) bool enableUIPreviewInteractionAnimations;
@property (nonatomic) float quickActionAnimationDuration;

- (void)_bindAndRegisterDefaults;

@end
