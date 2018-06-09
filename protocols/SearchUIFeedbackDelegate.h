/* made by EzioChiu.
 */

@protocol SearchUIFeedbackDelegate <SFFeedbackListener>

@optional

- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1;
- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1 animate:(bool)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)didEngageActionItem:(SFResultEngagementFeedback *)arg1 actionPerformed:(bool)arg2;
- (void)presentViewController:(UIViewController *)arg1;
- (bool)shouldHandleCardSectionEngagement:(SFCardSectionEngagementFeedback *)arg1;
- (void)updateViewControllerTitle:(NSString *)arg1;

@end
