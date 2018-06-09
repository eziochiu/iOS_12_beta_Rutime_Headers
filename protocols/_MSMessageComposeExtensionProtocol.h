/* made by EzioChiu.
 */

@protocol _MSMessageComposeExtensionProtocol <NSObject>

@required

- (void)_becomeActiveWithConversationState:(_MSConversationState *)arg1 presentationState:(_MSPresentationState *)arg2;
- (void)_canSendMessage:(void *)arg1 conversationState:(void *)arg2 associatedText:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: MSMessage *, _MSConversationState *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, MSMessage *, NSString *, void*
- (void)_conversationDidChangeWithConversationState:(_MSConversationState *)arg1;
- (void)_didCancelSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didReceiveMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didRemoveAssetArchiveWithIdentifier:(NSString *)arg1;
- (void)_didStartSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_handleTextInputPayload:(void *)arg1 withPayloadID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_hostDidBeginDeferredTeardown;
- (void)_prepareForPresentationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_presentationDidChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_presentationWillChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_requestContentSizeThatFits:(void *)arg1 presentationStyle:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSValue *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, void*
- (void)_requestSnapshotWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)_resignActive;
- (void)beginDisablingUserInteraction;
- (void)endDisablingUserInteraction;

@end
