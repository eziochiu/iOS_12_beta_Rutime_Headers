/* made by EzioChiu.
 */

@protocol CNContactInlineActionsViewControllerDelegate_Internal <CNContactInlineActionsViewControllerDelegate>

@optional

- (bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldPerformActionOfType:(NSString *)arg2 withContactProperty:(CNContactProperty *)arg3;
- (void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(CNContactInlineActionsViewController *)arg1;
- (void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(CNContactInlineActionsViewController *)arg1;

@end
