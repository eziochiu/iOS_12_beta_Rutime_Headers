/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling> {
    NSString * _conversationIdentifierResolvedDuringRecipientResolution;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contactResolutionResultForContacts:(id)arg1 matchingRecipient:(id)arg2 account:(id)arg3;
- (id)contactsWithDuplicateNamesAmongContacts:(id)arg1;
- (id)findValidMappingOfRequestedRecipientToChatParticipantAmongMatches:(id)arg1;
- (id)handleResolutionResultForContact:(id)arg1 recipient:(id)arg2 account:(id)arg3;
- (void)handleSendMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)imHandleForAnonymousContact:(id)arg1 chatAccount:(id)arg2 recipient:(id)arg3;
- (id)recipientsResolutionFailureResultWithResult:(id)arg1 forRecipient:(id)arg2 amongRecipients:(id)arg3;
- (void)resolveContentForSendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)resolveMessageContentWithString:(id)arg1;
- (void)resolveRecipients:(id)arg1 forIntent:(id)arg2 completion:(id /* block */)arg3;
- (id)resolveRecipientsByFindingExistingChatForRecipients:(id)arg1 withContacts:(id)arg2 fromChats:(id)arg3 matchedChat:(id*)arg4;
- (void)resolveRecipientsForSendMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)resolvedRecipientsFromChat:(id)arg1;
- (long long)sendMessageWithText:(id)arg1 idsIdentifier:(id)arg2 toChat:(id)arg3;

@end
