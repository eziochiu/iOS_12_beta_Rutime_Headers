/* made by EzioChiu.
 */

@protocol SLFacebookAudienceViewController

@required

- (void)setCurrentPrivacySetting:(SLFacebookPostPrivacySetting *)arg1;
- (void)setPrivacySettings:(NSArray *)arg1;
- (void)setSelectionDelegate:(id <SLFacebookAudienceViewControllerDelegate>)arg1;

@end
