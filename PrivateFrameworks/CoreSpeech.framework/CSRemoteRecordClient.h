/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSRemoteRecordClient : NSObject {
    <CSRemoteRecordClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CSRemoteRecordClientDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (bool)didPlayEndpointBeep;
- (bool)hasPendingTwoShotBeep;
- (id)init;
- (bool)isConnected;
- (bool)isRecording;
- (void)setDelegate:(id)arg1;
- (bool)startRecordingWithOptions:(id)arg1 error:(id*)arg2;
- (bool)stopRecording:(id*)arg1;
- (id)voiceTriggerEventInfo;
- (bool)waitingForConnection:(double)arg1 error:(id*)arg2;

@end
