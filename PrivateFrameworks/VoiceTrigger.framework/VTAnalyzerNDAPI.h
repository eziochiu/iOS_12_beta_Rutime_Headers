/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTAnalyzerNDAPI : NSObject {
    struct IntNovDetect { unsigned int x1; int x2; int x3; struct NString { int (**x_4_1_1)(); unsigned int x_4_1_2; char *x_4_1_3; } x4; bool x5; struct TSAcAnal { struct NWavChunk2HTKFrames { struct NArray<float> { int (**x_1_3_1)(); float *x_1_3_2; unsigned int x_1_3_3; } x_1_2_1; struct NFrame { int (**x_2_3_1)(); float *x_2_3_2; unsigned int x_2_3_3; } x_1_2_2; struct AccelStaticMFCC { bool x_3_3_1; struct NArray<float> { int (**x_2_4_1)(); float *x_2_4_2; unsigned int x_2_4_3; } x_3_3_2; struct NArray<float> { int (**x_3_4_1)(); float *x_3_4_2; unsigned int x_3_4_3; } x_3_3_3; struct NArray<short> { int (**x_4_4_1)(); short *x_4_4_2; unsigned int x_4_4_3; } x_3_3_4; unsigned int x_3_3_5; float x_3_3_6; struct AccelWin2MFCC { bool x_7_4_1; struct AccelWindow { unsigned int x_2_5_1; bool x_2_5_2; bool x_2_5_3; bool x_2_5_4; struct NArray<float> { int (**x_5_6_1)(); float *x_5_6_2; unsigned int x_5_6_3; } x_2_5_5; int x_2_5_6; } x_7_4_2; struct AccelFFT { struct vDSP_DFT_SetupStruct {} *x_3_5_1; bool x_3_5_2; unsigned int x_3_5_3; unsigned int x_3_5_4; unsigned int x_3_5_5; struct NArray<float> { int (**x_6_6_1)(); float *x_6_6_2; unsigned int x_6_6_3; } x_3_5_6; } x_7_4_3; struct AccelPSD { unsigned int x_4_5_1; bool x_4_5_2; unsigned int x_4_5_3; bool x_4_5_4; } x_7_4_4; struct AccelMelFilter { unsigned int x_5_5_1; unsigned int x_5_5_2; unsigned int x_5_5_3; bool x_5_5_4; struct NArray<unsigned int> { int (**x_5_6_1)(); unsigned int *x_5_6_2; unsigned int x_5_6_3; } x_5_5_5; struct NArray<unsigned int> { int (**x_6_6_1)(); unsigned int *x_6_6_2; unsigned int x_6_6_3; } x_5_5_6; struct NArray<NArray<float> > { int (**x_7_6_1)(); struct NArray<float> {} *x_7_6_2; unsigned int x_7_6_3; } x_5_5_7; struct NArray<float> { int (**x_8_6_1)(); float *x_8_6_2; unsigned int x_8_6_3; } x_5_5_8; } x_7_4_5; } x_3_3_7; } x_1_2_3; } x_6_1_1; } x6; } * _novDetect;
}

- (bool)_getBooleanValueFromConfigurationName:(id)arg1 defaultTo:(bool)arg2;
- (double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2;
- (int)_getIntValueFromConfigurationName:(id)arg1 defaultTo:(int)arg2;
- (const char *)_getOptionValueFromConfigurationName:(id)arg1;
- (id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2;
- (const struct _ndsvscore { float x1; }*)analyzeSAT:(const float*)arg1 size:(unsigned int)arg2;
- (void)analyzeWavData:(const short*)arg1 length:(int)arg2;
- (void)dealloc;
- (void)deleteVectorIndex:(int)arg1;
- (const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)getAnalyzedResult;
- (const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)getAnalyzedResult:(unsigned int)arg1;
- (bool)getDoSAT;
- (bool)getDoSupervectorSecondaryTest;
- (double)getExtraSamplesAtStart;
- (double)getLoggingThreshold;
- (int)getMaximumSpeakerVectors;
- (id)getRecognizerConfig;
- (double)getRecognizerScoreScaleFactor;
- (double)getRecognizerThresholdOffset;
- (double)getRecognizerWaitTime;
- (int)getRetrainNumExplicitUtt;
- (int)getRetrainNumImplicitUtt;
- (id)getRetrainSamplingPolicy;
- (double)getRetrainThresholdSAT;
- (double)getRetrainThresholdTrigger;
- (int)getSATVectorCount;
- (const struct _ndsvscore { float x1; }*)getScoreSuperVector:(const float*)arg1 size:(unsigned int)arg2;
- (double)getSecondChanceThreshold;
- (double)getSecondPassTrailingTime;
- (const struct _ndsupervec { float *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)getSuperVectorWithEndPoint:(unsigned int)arg1;
- (double)getThresholdPresuperVector;
- (double)getThresholdSAT;
- (double)getTriggerThreshold;
- (id)getTriggerTokens;
- (bool)getUseFallbackThresholdUponTimeout;
- (bool)getUseKeywordSpotting;
- (bool)getUseRecognizer;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (bool)initializeSAT:(id)arg1;
- (void)reset;
- (void)resetBest;
- (void)updateSAT;

@end
