/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.ConversationController : NSObject <AVCRemoteVideoClientDelegate, TUAudioFrequencyControllerDelegate> {
    void audioCallbackQueue;
    void audioFrequencyController;
    void availableParticipantColors;
    void broadcastingState;
    void call;
    void callCenter;
    void conversationState;
    void conversationStateDidChange;
    void conversationUUID;
    void deviceOrientation;
    void didAddVisibleParticipant;
    void didRemoveVisibleParticipant;
    void didStartVideoForLocalParticipant;
    void didStartVideoForVisibleParticipant;
    void didUpdateLocalParticipant;
    void didUpdateVisibleParticipant;
    void enableVideoOnJoin;
    void includeLocalParticipantInVisibleParticipants;
    void localParticipant;
    void participantAudioPowerDidChange;
    void participantMediaProviderCreator;
    void participantsMediaPrioritiesDidChange;
    void remoteParticipants;
    void visibleParticipantDidBecomeActive;
}

@property (nonatomic, readonly) NSString *description;

- (id /* block */).cxx_destruct;
- (id)description;
- (void)frequencyController:(id)arg1 frequencyChanged:(id)arg2 forParticipantWithStreamToken:(unsigned long long)arg3;
- (void)handleLocalVideoPreviewFirstFrameArrived:(id)arg1;
- (id)init;
- (void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(bool)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(bool)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;

@end
