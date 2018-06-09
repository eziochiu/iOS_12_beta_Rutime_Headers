/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpIdProcessor : NSObject <CSSpIdSpeakerVectorGeneratorDelegate> {
    <CSSpIdProcessorDelegate> * _delegate;
    NSArray * _satAnalyzers;
    CSSpIdSpeakerVectorGenerator * _spIdSvg;
    unsigned long long  _spIdType;
    NSString * _spIdTypeStr;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSpIdProcessorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *satAnalyzers;
@property (nonatomic, readonly) float satScoreThreshold;
@property (nonatomic, retain) CSSpIdSpeakerVectorGenerator *spIdSvg;
@property (nonatomic) unsigned long long spIdType;
@property (nonatomic, retain) NSString *spIdTypeStr;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *sysConfigFilepath;

- (void).cxx_destruct;
- (void)_processSpeakerVector:(id)arg1 withSize:(unsigned long long)arg2 processedAudioDurationMs:(unsigned long long)arg3 isFinal:(bool)arg4;
- (void)dealloc;
- (id)delegate;
- (void)endProcessing;
- (id)initWithSpIdContext:(id)arg1 forSpIdType:(unsigned long long)arg2 delegate:(id)arg3;
- (void)processAudioData:(id)arg1;
- (id)satAnalyzers;
- (float)satScoreThreshold;
- (void)setDelegate:(id)arg1;
- (void)setSatAnalyzers:(id)arg1;
- (void)setSpIdSvg:(id)arg1;
- (void)setSpIdType:(unsigned long long)arg1;
- (void)setSpIdTypeStr:(id)arg1;
- (id)spIdSvg;
- (unsigned long long)spIdType;
- (id)spIdTypeStr;
- (void)speakerVectorGenerator:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)speakerVectorGenerator:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (id)sysConfigFilepath;

@end
