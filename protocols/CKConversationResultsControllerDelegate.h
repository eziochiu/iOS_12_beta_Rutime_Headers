/* made by EzioChiu.
 */

@protocol CKConversationResultsControllerDelegate

@required

- (CKConversation *)searcher:(CKConversationSearchResultsController *)arg1 conversationForChatGUID:(NSString *)arg2;
- (void)searcher:(CKConversationSearchResultsController *)arg1 userDidDeleteChatGUID:(NSString *)arg2;
- (void)searcher:(CKConversationSearchResultsController *)arg1 userDidSelectChatGUID:(NSString *)arg2 messageGUID:(NSString *)arg3;
- (void)searcherDidComplete:(CKConversationSearchResultsController *)arg1;

@end
