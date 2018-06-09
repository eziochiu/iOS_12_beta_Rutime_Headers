/* made by EzioChiu.
 */

@protocol TUConversationManagerDataSource <NSObject>

@required

- (void)addRemoteMembers:(NSSet *)arg1 toConversation:(TUConversation *)arg2;
- (void)buzzMember:(TUConversationMember *)arg1 conversation:(TUConversation *)arg2;
- (NSDictionary *)conversationsByGroupUUID;
- (<TUConversationManagerDataSourceDelegate> *)delegate;
- (void)invalidate;
- (<TUConversationMediaControllerDataSourceDelegate> *)mediaDelegate;
- (void)registerWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <TUConversationManagerDataSourceDelegate>)arg1;
- (void)setMediaDelegate:(id <TUConversationMediaControllerDataSourceDelegate>)arg1;
- (void)updateConversationWithUUID:(NSUUID *)arg1 participantPresentationContexts:(NSArray *)arg2;

@end
