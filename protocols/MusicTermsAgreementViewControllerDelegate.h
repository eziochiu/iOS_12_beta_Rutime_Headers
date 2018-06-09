/* made by EzioChiu.
 */

@protocol MusicTermsAgreementViewControllerDelegate <NSObject>

@optional

- (void)termsAgreementViewController:(MusicTermsAgreementViewController *)arg1 didRequestSendByEmailToEmailAddress:(NSString *)arg2;
- (void)termsAgreementViewControllerDidAcceptTerms:(MusicTermsAgreementViewController *)arg1;
- (void)termsAgreementViewControllerDidCancel:(MusicTermsAgreementViewController *)arg1;

@end
