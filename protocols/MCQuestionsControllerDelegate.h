/* made by EzioChiu.
 */

@protocol MCQuestionsControllerDelegate

@required

- (void)questionsController:(MCQuestionsController *)arg1 didFinishWithResponses:(NSArray *)arg2;
- (bool)questionsControllerIsDisplayedInSheet:(MCQuestionsController *)arg1;

@end
