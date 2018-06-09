/* made by EzioChiu.
 */

@protocol PKPassFooterContentViewDelegate <NSObject>

@required

- (bool)isPassFooterContentViewInGroup:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidBeginAuthenticating:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidChangeUserIntentRequirement:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidEndAuthenticating:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewRequestsSessionSuppression:(PKPassFooterContentView *)arg1;

@end
