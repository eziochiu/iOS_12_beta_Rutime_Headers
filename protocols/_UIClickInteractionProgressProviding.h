/* made by EzioChiu.
 */

@protocol _UIClickInteractionProgressProviding <NSObject>

@required

- (void)cancelInteraction;
- (long long)currentState;
- (<_UIClickInteractionProgressProvidingDelegate> *)delegate;
- (void)setDelegate:(id <_UIClickInteractionProgressProvidingDelegate>)arg1;
- (void)setView:(UIView *)arg1;
- (bool)shouldInvokeActionWhenTransitioningFromState:(long long)arg1 toState:(long long)arg2;
- (UIView *)view;

@end
