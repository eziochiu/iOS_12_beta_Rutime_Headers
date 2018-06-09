/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.CallCenter : NSObject <TUConversationManagerDelegate, TUConversationMediaControllerDelegate> {
    void delegate;
    void tuCallCenter;
}

- (id /* block */).cxx_destruct;
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (id)init;
- (void)mediaController:(id)arg1 participantMediaPrioritiesChangedForConversation:(id)arg2;

@end
