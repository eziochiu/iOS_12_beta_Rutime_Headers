/* made by EzioChiu.
 */

@protocol PKPassFooterViewDelegate <NSObject>

@required

- (bool)isPassFooterViewInGroup:(PKPassFooterView *)arg1;
- (void)passFooterViewDidChangeUserIntentRequirement:(PKPassFooterView *)arg1;

@end
