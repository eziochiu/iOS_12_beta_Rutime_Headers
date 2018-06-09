/* made by EzioChiu.
 */

@protocol MFComposeSubjectViewDelegate <MFComposeHeaderViewDelegate>

@required

- (void)composeSubjectViewDidSelectNotifyButton:(MFComposeSubjectView *)arg1;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(MFComposeSubjectView *)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(MFComposeSubjectView *)arg1;

@optional

- (void)composeSubjectViewWillRemoveContent:(MFComposeSubjectView *)arg1;

@end
