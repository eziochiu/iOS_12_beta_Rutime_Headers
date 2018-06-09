/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSKeywordDetector : NSObject <CSKeywordAnalyzerQuasarScoreDelegate, CSSpeechManagerDelegate> {
    unsigned long long  _analyzedSampleCount;
    CSAsset * _currentAsset;
    unsigned long long  _decisionWaitSampleCount;
    <CSVoiceTriggerDelegate> * _delegate;
    bool  _isRunningRecognizer;
    CSKeywordAnalyzerQuasar * _keywordAnalyzer;
    float  _keywordThreshold;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpeechManager * _speechManager;
}

@property (nonatomic) unsigned long long analyzedSampleCount;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long decisionWaitSampleCount;
@property (nonatomic) <CSVoiceTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRunningRecognizer;
@property (nonatomic, retain) CSKeywordAnalyzerQuasar *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) CSSpeechManager *speechManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (unsigned long long)analyzedSampleCount;
- (id)currentAsset;
- (unsigned long long)decisionWaitSampleCount;
- (id)delegate;
- (id)initWithManager:(id)arg1 asset:(id)arg2;
- (bool)isRunningRecognizer;
- (id)keywordAnalyzer;
- (void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (float)keywordThreshold;
- (id)queue;
- (void)reset;
- (void)setAnalyzedSampleCount:(unsigned long long)arg1;
- (void)setAsset:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDecisionWaitSampleCount:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsRunningRecognizer:(bool)arg1;
- (void)setKeywordAnalyzer:(id)arg1;
- (void)setKeywordThreshold:(float)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (id)speechManager;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)startDetectKeyword:(id)arg1;

@end
