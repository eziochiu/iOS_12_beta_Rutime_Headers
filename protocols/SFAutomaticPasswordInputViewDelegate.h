/* made by EzioChiu.
 */

@protocol SFAutomaticPasswordInputViewDelegate <NSObject>

@optional

- (void)inputViewControllerDidSelectUseCustomPassword:(SFAutomaticPasswordInputView *)arg1;
- (void)inputViewControllerDidSelectUseStrongPassword:(SFAutomaticPasswordInputView *)arg1;

@end
