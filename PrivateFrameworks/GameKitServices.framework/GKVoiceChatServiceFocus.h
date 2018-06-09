/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatServiceFocus : GKVoiceChatServicePrivate {
    NSString * currentFocus;
    bool  hasMic;
    NSMutableArray * incomingCallDictList;
    long long  incomingUID;
    NSMutableArray * outgoingCallDictList;
    int  packetsPerBundle;
}

@property (nonatomic, copy) NSString *currentFocus;
@property bool hasMic;
@property int packetsPerBundle;

+ (id)defaultVoiceChatService;

- (bool)acceptCallID:(unsigned int)arg1 error:(id*)arg2;
- (id)currentFocus;
- (void)dealloc;
- (void)denyCallID:(unsigned int)arg1;
- (id)dictionaryForCallID:(unsigned int)arg1 isIncomingDictonary:(bool)arg2;
- (id)dictionaryForNonce:(long long)arg1 participantID:(id)arg2 isIncomingDictonary:(bool)arg3;
- (id)dictionaryForParticipantID:(id)arg1 isIncomingDictonary:(bool)arg2;
- (bool)hasMic;
- (id)incomingDictionaryMatchingOriginalCallID:(unsigned int)arg1 participantID:(id)arg2;
- (id)init;
- (bool)isAudioPausedToParticipantID:(id)arg1;
- (double)localBitrate;
- (id)localDisplayNameForCallID:(unsigned int)arg1;
- (double)localFramerate;
- (void*)localVideoLayer;
- (id)openOutgoingDictionaryForParticipantID:(id)arg1;
- (int)packetsPerBundle;
- (void)pauseAudio:(bool)arg1 toParticipantID:(id)arg2;
- (bool)processCancelDict:(id)arg1;
- (bool)processFocusChange:(id)arg1 fromParticipantID:(id)arg2;
- (bool)processFocusDict:(id)arg1 fromParticipantID:(id)arg2;
- (bool)processInviteDictionary:(id)arg1 fromParticipantID:(id)arg2;
- (bool)processInviteDictionaryForTie:(id)arg1 fromParticipantID:(id)arg2;
- (bool)processReplyDict:(id)arg1;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (double)remoteBitrate;
- (void)remoteCancelled:(id)arg1;
- (void)remoteCancelledProc:(id)arg1;
- (id)remoteDisplayNameForCallID:(unsigned int)arg1;
- (double)remoteFramerate;
- (void*)remoteVideoLayer;
- (void)sendFocusChange:(bool)arg1;
- (void)setChatMode:(int)arg1;
- (void)setCurrentFocus:(id)arg1;
- (void)setFocus:(bool)arg1;
- (void)setHasMic:(bool)arg1;
- (void)setIsUsingSuppression:(bool)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setPacketsPerBundle:(int)arg1;
- (void)setQualityDelegate:(id)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (void)setShouldTimeoutPackets:(bool)arg1;
- (void)setSpeakingDelegate:(id)arg1;
- (void)setTalkingPeersLimit:(unsigned int)arg1;
- (bool)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)stopVoiceChatProc:(id)arg1;
- (void)stopVoiceChatProc:(id)arg1 participantDidCancel:(bool)arg2;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
- (void)videoConference:(id)arg1 didStartSession:(bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;

@end
