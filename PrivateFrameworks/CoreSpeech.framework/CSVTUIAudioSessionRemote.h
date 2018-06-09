/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVTUIAudioSessionRemote : NSObject <CSAudioRecorderDelegate, CSVTUIAudioSession> {
    CSAudioRecorder * _audioRecorder;
    <CSVTUIAudioSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVTUIAudioSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_audioRecorder;
- (void)audioRecorder:(id)arg1 didSetAudioSessionActive:(bool)arg2;
- (void)audioRecorder:(id)arg1 willSetAudioSessionActive:(bool)arg2;
- (void)audioRecorderBeginRecordInterruption:(id)arg1;
- (void)audioRecorderBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (void)audioRecorderDidStartRecording:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)audioRecorderDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorderEndRecordInterruption:(id)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (unsigned long long)audioSource;
- (float)averagePower;
- (long long)convertStopReason:(long long)arg1;
- (id)delegate;
- (bool)hasAudioRoute;
- (bool)hasCorrectAudioRoute;
- (id)init;
- (bool)isRecording;
- (bool)prepareRecord;
- (void)releaseAudioSession;
- (void)resetEndPointer;
- (void)setDelegate:(id)arg1;
- (void)setEndpointerDelegate:(id)arg1;
- (bool)startRecording;
- (void)stopRecording;
- (void)updateMeters;
- (void)voiceTriggerDetectedOnAOP:(id)arg1;

@end
