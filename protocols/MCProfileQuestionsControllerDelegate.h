/* made by EzioChiu.
 */

@protocol MCProfileQuestionsControllerDelegate

@required

- (void)questionsController:(MCInstallProfileQuestionViewController *)arg1 didFinishWithResponses:(NSArray *)arg2;
- (bool)questionsControllerIsDisplayedInSheet:(MCInstallProfileQuestionViewController *)arg1;
- (void)setCurrentQuestionsController:(MCInstallProfileQuestionViewController *)arg1;

@end
