/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerSecondPass : NSObject <CSActivationEventNotifierDelegate, CSAudioServerCrashMonitorGibraltarDelegate, CSKeywordAnalyzerNDAPIScoreDelegate, CSKeywordAnalyzerQuasarScoreDelegate, CSSpeakerDetectorNDAPIDelegate, CSSpeechManagerDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSVoiceTriggerFirstPassDelegate> {
    unsigned long long  _activeChannel;
    unsigned long long  _analyzerPrependingSamples;
    unsigned long long  _analyzerTrailingSamples;
    CSAudioCircularBuffer * _audioBuffer;
    double  _cumulativeDowntime;
    double  _cumulativeUptime;
    CSAsset * _currentAsset;
    <CSVoiceTriggerDelegate> * _delegate;
    unsigned long long  _earlyDetectFiredMachTime;
    unsigned long long  _extraSamplesAtStart;
    float  _firstPassChannelSelectionDelaySeconds;
    NSDictionary * _firstPassChannelSelectionScores;
    float  _firstPassMasterChannelScoreBoost;
    unsigned long long  _firstPassOnsetChannel;
    float  _firstPassOnsetScore;
    unsigned long long  _firstPassSource;
    unsigned long long  _firstPassTriggerFireSampleCount;
    unsigned long long  _firstPassTriggerStartSampleCount;
    bool  _hasPendingNearMiss;
    bool  _hasTriggerCandidate;
    bool  _isRunningRecognizer;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzerNDAPI;
    CSKeywordAnalyzerQuasar * _keywordAnalyzerQuasar;
    float  _keywordLoggingThreshold;
    float  _keywordThreshold;
    double  _lastAggTime;
    NSDictionary * _lastAnalyzerResult;
    NSDictionary * _lastResult;
    float  _lastScore;
    unsigned long long  _nearMissCandidateDetectedSamples;
    unsigned long long  _nearMissDelayTimeout;
    unsigned long long  _numProcessedSamples;
    unsigned long long  _processedSampleCountsInPending;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _recognizerResultPending;
    float  _recognizerScore;
    float  _recognizerScoreScaleFactor;
    unsigned long long  _recognizerWaitSamples;
    unsigned long long  _secondPassTimeout;
    unsigned long long  _secondPassTriggerMachAbsTime;
    CSSpeakerDetectorNDAPI * _speakerDetector;
    CSSpeakerModel * _speakerModel;
    CSSpeechManager * _speechManager;
    NSObject<OS_dispatch_queue> * _stateSerialQueue;
    NSData * _superVector;
    bool  _useSAT;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) unsigned long long analyzerPrependingSamples;
@property (nonatomic) unsigned long long analyzerTrailingSamples;
@property (nonatomic) CSAudioCircularBuffer *audioBuffer;
@property (nonatomic) double cumulativeDowntime;
@property (nonatomic) double cumulativeUptime;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVoiceTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long earlyDetectFiredMachTime;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (nonatomic) float firstPassChannelSelectionDelaySeconds;
@property (nonatomic, retain) NSDictionary *firstPassChannelSelectionScores;
@property (nonatomic) float firstPassMasterChannelScoreBoost;
@property (nonatomic) unsigned long long firstPassOnsetChannel;
@property (nonatomic) float firstPassOnsetScore;
@property (nonatomic) unsigned long long firstPassSource;
@property (nonatomic) unsigned long long firstPassTriggerFireSampleCount;
@property (nonatomic) unsigned long long firstPassTriggerStartSampleCount;
@property (nonatomic) bool hasPendingNearMiss;
@property (nonatomic) bool hasTriggerCandidate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRunningRecognizer;
@property (nonatomic, retain) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI;
@property (nonatomic, retain) CSKeywordAnalyzerQuasar *keywordAnalyzerQuasar;
@property (nonatomic) float keywordLoggingThreshold;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) double lastAggTime;
@property (nonatomic, retain) NSDictionary *lastAnalyzerResult;
@property (nonatomic, retain) NSDictionary *lastResult;
@property (nonatomic) float lastScore;
@property (nonatomic) unsigned long long nearMissCandidateDetectedSamples;
@property (nonatomic) unsigned long long nearMissDelayTimeout;
@property (nonatomic) unsigned long long numProcessedSamples;
@property (nonatomic) unsigned long long processedSampleCountsInPending;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool recognizerResultPending;
@property (nonatomic) float recognizerScore;
@property (nonatomic) float recognizerScoreScaleFactor;
@property (nonatomic) unsigned long long recognizerWaitSamples;
@property (nonatomic) unsigned long long secondPassTimeout;
@property (nonatomic) unsigned long long secondPassTriggerMachAbsTime;
@property (nonatomic, retain) CSSpeakerDetectorNDAPI *speakerDetector;
@property (nonatomic, retain) CSSpeakerModel *speakerModel;
@property (nonatomic) CSSpeechManager *speechManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateSerialQueue;
@property (nonatomic, retain) NSData *superVector;
@property (readonly) Class superclass;
@property (nonatomic) bool useSAT;

- (void).cxx_destruct;
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(bool)arg2;
- (void)_analyzeForKeywordDetection:(id)arg1 result:(id)arg2 forChannel:(unsigned long long)arg3 forceMaximized:(bool)arg4;
- (void)_clearTriggerCandidate;
- (bool)_handleVoiceTriggerFirstPassFromAP:(id)arg1 error:(id*)arg2;
- (void)_implictTrainingIfNeeded:(id)arg1;
- (void)_logUptimeWithVTSwitchChanged:(bool)arg1 VTEnabled:(bool)arg2;
- (void)_markSecondPassTriggerMachAbsoluteTime:(unsigned long long)arg1;
- (void)_notifySecondPassReject;
- (void)_reset;
- (void)_resetUpTime;
- (void)_setAsset:(id)arg1;
- (void)_voiceTriggerFirstPassDidDetectKeywordFrom:(unsigned long long)arg1 deviceId:(id)arg2 firstPassInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)activeChannel;
- (unsigned long long)analyzerPrependingSamples;
- (unsigned long long)analyzerTrailingSamples;
- (id)audioBuffer;
- (double)cumulativeDowntime;
- (double)cumulativeUptime;
- (id)currentAsset;
- (id)delegate;
- (unsigned long long)earlyDetectFiredMachTime;
- (unsigned long long)extraSamplesAtStart;
- (float)firstPassChannelSelectionDelaySeconds;
- (id)firstPassChannelSelectionScores;
- (float)firstPassMasterChannelScoreBoost;
- (unsigned long long)firstPassOnsetChannel;
- (float)firstPassOnsetScore;
- (unsigned long long)firstPassSource;
- (unsigned long long)firstPassTriggerFireSampleCount;
- (unsigned long long)firstPassTriggerStartSampleCount;
- (void)handleServerDidRestart;
- (bool)hasPendingNearMiss;
- (bool)hasTriggerCandidate;
- (id)initWithManager:(id)arg1 asset:(id)arg2 audioBuffer:(id)arg3;
- (bool)isRunningRecognizer;
- (id)keywordAnalyzerNDAPI;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (id)keywordAnalyzerQuasar;
- (void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (float)keywordLoggingThreshold;
- (float)keywordThreshold;
- (double)lastAggTime;
- (id)lastAnalyzerResult;
- (id)lastResult;
- (float)lastScore;
- (void)mediaserverdDidRestart;
- (unsigned long long)nearMissCandidateDetectedSamples;
- (unsigned long long)nearMissDelayTimeout;
- (unsigned long long)numProcessedSamples;
- (unsigned long long)processedSampleCountsInPending;
- (id)queue;
- (bool)recognizerResultPending;
- (float)recognizerScore;
- (float)recognizerScoreScaleFactor;
- (unsigned long long)recognizerWaitSamples;
- (void)reset;
- (unsigned long long)secondPassTimeout;
- (unsigned long long)secondPassTriggerMachAbsTime;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setAnalyzerPrependingSamples:(unsigned long long)arg1;
- (void)setAnalyzerTrailingSamples:(unsigned long long)arg1;
- (void)setAsset:(id)arg1;
- (void)setAudioBuffer:(id)arg1;
- (void)setCumulativeDowntime:(double)arg1;
- (void)setCumulativeUptime:(double)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEarlyDetectFiredMachTime:(unsigned long long)arg1;
- (void)setExtraSamplesAtStart:(unsigned long long)arg1;
- (void)setFirstPassChannelSelectionDelaySeconds:(float)arg1;
- (void)setFirstPassChannelSelectionScores:(id)arg1;
- (void)setFirstPassMasterChannelScoreBoost:(float)arg1;
- (void)setFirstPassOnsetChannel:(unsigned long long)arg1;
- (void)setFirstPassOnsetScore:(float)arg1;
- (void)setFirstPassSource:(unsigned long long)arg1;
- (void)setFirstPassTriggerFireSampleCount:(unsigned long long)arg1;
- (void)setFirstPassTriggerStartSampleCount:(unsigned long long)arg1;
- (void)setHasPendingNearMiss:(bool)arg1;
- (void)setHasTriggerCandidate:(bool)arg1;
- (void)setIsRunningRecognizer:(bool)arg1;
- (void)setKeywordAnalyzerNDAPI:(id)arg1;
- (void)setKeywordAnalyzerQuasar:(id)arg1;
- (void)setKeywordLoggingThreshold:(float)arg1;
- (void)setKeywordThreshold:(float)arg1;
- (void)setLastAggTime:(double)arg1;
- (void)setLastAnalyzerResult:(id)arg1;
- (void)setLastResult:(id)arg1;
- (void)setLastScore:(float)arg1;
- (void)setNearMissCandidateDetectedSamples:(unsigned long long)arg1;
- (void)setNearMissDelayTimeout:(unsigned long long)arg1;
- (void)setNumProcessedSamples:(unsigned long long)arg1;
- (void)setProcessedSampleCountsInPending:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecognizerResultPending:(bool)arg1;
- (void)setRecognizerScore:(float)arg1;
- (void)setRecognizerScoreScaleFactor:(float)arg1;
- (void)setRecognizerWaitSamples:(unsigned long long)arg1;
- (void)setSecondPassTimeout:(unsigned long long)arg1;
- (void)setSecondPassTriggerMachAbsTime:(unsigned long long)arg1;
- (void)setSpeakerDetector:(id)arg1;
- (void)setSpeakerModel:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)setStateSerialQueue:(id)arg1;
- (void)setSuperVector:(id)arg1;
- (void)setUseSAT:(bool)arg1;
- (id)speakerDetector;
- (void)speakerDetector:(id)arg1 didDetectSpeaker:(id)arg2;
- (void)speakerDetector:(id)arg1 didDetectSpeakerReject:(id)arg2;
- (id)speakerModel;
- (id)speechManager;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)start;
- (id)stateSerialQueue;
- (id)superVector;
- (bool)useSAT;
- (void)voiceTriggerFirstPass:(id)arg1 didDetectKeyword:(id)arg2;

@end
