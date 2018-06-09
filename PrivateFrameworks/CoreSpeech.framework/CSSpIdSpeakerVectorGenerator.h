/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpIdSpeakerVectorGenerator : NSObject <EARPSRAudioProcessorDelegate> {
    <CSSpIdSpeakerVectorGeneratorDelegate> * _delegate;
    EARPSRAudioProcessor * _psrAudioProcessor;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _spIdType;
    NSString * _spIdTypeStr;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSpIdSpeakerVectorGeneratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EARPSRAudioProcessor *psrAudioProcessor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long spIdType;
@property (nonatomic, retain) NSString *spIdTypeStr;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isSpeakerVectorValid:(id)arg1 speakerVectorSize:(unsigned long long)arg2 fromPsrAudioProcessor:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endAudio;
- (id)initWithCSSpIdType:(unsigned long long)arg1 withSysConfigFilepath:(id)arg2 sysConfigRoot:(id)arg3 delegate:(id)arg4;
- (void)processAudioData:(id)arg1;
- (id)psrAudioProcessor;
- (void)psrAudioProcessor:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)psrAudioProcessor:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setPsrAudioProcessor:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpIdType:(unsigned long long)arg1;
- (void)setSpIdTypeStr:(id)arg1;
- (unsigned long long)spIdType;
- (id)spIdTypeStr;

@end
