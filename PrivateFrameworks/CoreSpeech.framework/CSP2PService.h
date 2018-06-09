/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSP2PService : NSObject {
    <CSADCompanionServiceProvider> * _adCompanionServiceProvider;
    NSString * _lastCommunicatedPeer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CSADCompanionServiceProvider> *adCompanionServiceProvider;
@property (nonatomic, retain) NSString *lastCommunicatedPeer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(id /* block */)arg3;
- (void)_processDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveData1FromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(id /* block */)arg3;
- (void)_sendData1File:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(bool)arg4;
- (void)_sendData1ToPeerId:(id)arg1;
- (void)_sendData2ToPeerId:(id)arg1;
- (void)_sendParallelRecordingsToPeerId:(id)arg1 voiceProfileRequestInfo:(id)arg2 withReply:(id /* block */)arg3;
- (id)adCompanionServiceProvider;
- (id)init;
- (id)lastCommunicatedPeer;
- (void)processRemoteCommandWithPayload:(id)arg1 fromPeer:(id)arg2 withReply:(id /* block */)arg3;
- (id)queue;
- (void)sendInfo1ToNearbyPeer;
- (void)sendInfo2ToNearbyPeer;
- (void)setAdCompanionServiceProvider:(id)arg1;
- (void)setLastCommunicatedPeer:(id)arg1;
- (void)setQueue:(id)arg1;

@end
