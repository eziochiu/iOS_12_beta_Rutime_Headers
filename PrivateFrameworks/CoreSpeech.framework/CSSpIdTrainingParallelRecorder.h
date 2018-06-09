/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpIdTrainingParallelRecorder : NSObject <CSSpIdSpeakerRecognizer> {
    NSString * _invocationStyle;
    NSDictionary * _lastSpeakerIdInfo;
    CSPlainAudioFileWriter * _parallelRecordingUttLogger;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpIdContext * _spIdCtx;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *invocationStyle;
@property (nonatomic, retain) NSDictionary *lastSpeakerIdInfo;
@property (nonatomic, retain) CSPlainAudioFileWriter *parallelRecordingUttLogger;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSSpIdContext *spIdCtx;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)invocationStyle;
- (id)lastSpeakerIdInfo;
- (id)parallelRecordingUttLogger;
- (void)processAudioChunk:(id)arg1;
- (id)queue;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)setInvocationStyle:(id)arg1;
- (void)setLastSpeakerIdInfo:(id)arg1;
- (void)setParallelRecordingUttLogger:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpIdCtx:(id)arg1;
- (id)spIdCtx;

@end
