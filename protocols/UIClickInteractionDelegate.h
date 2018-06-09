/* made by EzioChiu.
 */

@protocol UIClickInteractionDelegate <NSObject>

@required

- (void)clickInteractionDidBegin:(UIClickInteraction *)arg1;
- (void)clickInteractionDidEnd:(UIClickInteraction *)arg1;
- (bool)clickInteractionShouldInvokeAction:(UIClickInteraction *)arg1;

@optional

- (void)clickInteraction:(UIClickInteraction *)arg1 didObserveForce:(double)arg2;
- (UIView *)clickInteractionHighlightView:(UIClickInteraction *)arg1;

@end
