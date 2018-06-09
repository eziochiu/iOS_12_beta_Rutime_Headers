/* made by EzioChiu.
 */

@protocol PLExpandedPlatterPresentationControllerDelegate <NSObject>

@optional

- (<PLKeyboardHomeAffordanceAssertion> *)expandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1 keyboardAssertionForGestureWindow:(UIWindow *)arg2;
- (bool)expandedPlatterPresentationControllerShouldAllowKeyboardOnAppearance:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
- (<UIViewSpringAnimationBehaviorDescribing> *)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(UIPresentationController<PLExpandedPlatterPresentationController> *)arg1;

@end
