/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpIdVTSpeakerRecognizer : NSObject <CSSpIdProcessorDelegate, CSSpIdSpeakerRecognizer> {
    <CSAudioFileWriter> * _dbgTdTiUttLogger;
    <CSSpIdSpeakerRecognizerDelegate> * _delegate;
    unsigned long long  _extraSamplesAtStart;
    NSString * _invocationStyleStr;
    NSDictionary * _lastSpeakerIdInfo;
    unsigned long long  _myriadResult;
    unsigned long long  _numTdTiSamplesProcessed;
    bool  _processingEnded;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpIdContext * _spIdCtx;
    unsigned long long  _tdEndInSampleCount;
    unsigned long long  _tdtiEndInSampleCount;
    CSSpIdProcessor * _tdtiSpIdProcessor;
    unsigned long long  _totalNumSamplesReceived;
}

@property (nonatomic, retain) <CSAudioFileWriter> *dbgTdTiUttLogger;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSpIdSpeakerRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *invocationStyleStr;
@property (nonatomic, retain) NSDictionary *lastSpeakerIdInfo;
@property (nonatomic) unsigned long long myriadResult;
@property (nonatomic) unsigned long long numTdTiSamplesProcessed;
@property (nonatomic) bool processingEnded;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSSpIdContext *spIdCtx;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tdEndInSampleCount;
@property (nonatomic) unsigned long long tdtiEndInSampleCount;
@property (nonatomic, retain) CSSpIdProcessor *tdtiSpIdProcessor;
@property (nonatomic) unsigned long long totalNumSamplesReceived;

- (void).cxx_destruct;
- (void)_endAudioProcessing;
- (void)_processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)dbgTdTiUttLogger;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)extraSamplesAtStart;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)invocationStyleStr;
- (id)lastSpeakerIdInfo;
- (unsigned long long)myriadResult;
- (unsigned long long)numTdTiSamplesProcessed;
- (void)processAudioChunk:(id)arg1;
- (void)processMyriadDecision:(unsigned long long)arg1;
- (bool)processingEnded;
- (id)queue;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)setDbgTdTiUttLogger:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtraSamplesAtStart:(unsigned long long)arg1;
- (void)setInvocationStyleStr:(id)arg1;
- (void)setLastSpeakerIdInfo:(id)arg1;
- (void)setMyriadResult:(unsigned long long)arg1;
- (void)setNumTdTiSamplesProcessed:(unsigned long long)arg1;
- (void)setProcessingEnded:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpIdCtx:(id)arg1;
- (void)setTdEndInSampleCount:(unsigned long long)arg1;
- (void)setTdtiEndInSampleCount:(unsigned long long)arg1;
- (void)setTdtiSpIdProcessor:(id)arg1;
- (void)setTotalNumSamplesReceived:(unsigned long long)arg1;
- (id)spIdCtx;
- (void)speakerIdProcessor:(id)arg1 hasSpeakerIdInfo:(id)arg2;
- (void)speakerIdProcessorFinishedProcessing:(id)arg1 withSpeakerInfo:(id)arg2;
- (unsigned long long)tdEndInSampleCount;
- (unsigned long long)tdtiEndInSampleCount;
- (id)tdtiSpIdProcessor;
- (unsigned long long)totalNumSamplesReceived;

@end
