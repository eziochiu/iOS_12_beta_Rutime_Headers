/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpIdTIOnlySpeakerRecognizer : NSObject <CSSpIdProcessorDelegate, CSSpIdSpeakerRecognizer> {
    <CSAudioFileWriter> * _dbgTiUttLogger;
    <CSSpIdSpeakerRecognizerDelegate> * _delegate;
    NSString * _invocationStyle;
    NSDictionary * _lastSpeakerIdInfo;
    unsigned long long  _myriadResult;
    unsigned long long  _numTISamplesProcessed;
    bool  _processingEnded;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpIdContext * _spIdCtx;
    unsigned long long  _tiEndInSampleCount;
    CSSpIdProcessor * _tiSpIdProcessor;
}

@property (nonatomic, retain) <CSAudioFileWriter> *dbgTiUttLogger;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSpIdSpeakerRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *invocationStyle;
@property (nonatomic, retain) NSDictionary *lastSpeakerIdInfo;
@property (nonatomic) unsigned long long myriadResult;
@property (nonatomic) unsigned long long numTISamplesProcessed;
@property (nonatomic) bool processingEnded;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSSpIdContext *spIdCtx;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tiEndInSampleCount;
@property (nonatomic, retain) CSSpIdProcessor *tiSpIdProcessor;

- (void).cxx_destruct;
- (void)_endAudioProcessing;
- (void)_processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)dbgTiUttLogger;
- (void)dealloc;
- (id)delegate;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)invocationStyle;
- (id)lastSpeakerIdInfo;
- (unsigned long long)myriadResult;
- (unsigned long long)numTISamplesProcessed;
- (void)processAudioChunk:(id)arg1;
- (void)processMyriadDecision:(unsigned long long)arg1;
- (bool)processingEnded;
- (id)queue;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)setDbgTiUttLogger:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInvocationStyle:(id)arg1;
- (void)setLastSpeakerIdInfo:(id)arg1;
- (void)setMyriadResult:(unsigned long long)arg1;
- (void)setNumTISamplesProcessed:(unsigned long long)arg1;
- (void)setProcessingEnded:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpIdCtx:(id)arg1;
- (void)setTiEndInSampleCount:(unsigned long long)arg1;
- (void)setTiSpIdProcessor:(id)arg1;
- (id)spIdCtx;
- (void)speakerIdProcessor:(id)arg1 hasSpeakerIdInfo:(id)arg2;
- (void)speakerIdProcessorFinishedProcessing:(id)arg1 withSpeakerInfo:(id)arg2;
- (unsigned long long)tiEndInSampleCount;
- (id)tiSpIdProcessor;

@end
