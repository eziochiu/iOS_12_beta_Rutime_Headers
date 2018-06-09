/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTAggregator : NSObject {
    NSString * _assetString;
    double  _cumulativeDowntime;
    double  _cumulativeUptime;
    unsigned long long  _currentState;
    NSString * _languageCode;
    double  _lastAggTime;
    double  _lastAggTimeFalseWakeUp;
    unsigned long long  _numFalseWakeUp;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

+ (id)sharedAggregator;

- (void).cxx_destruct;
- (void)_addValueForScalarKey:(id)arg1 withValue:(long long)arg2;
- (void)_logUptime;
- (id)_makeKey:(id)arg1;
- (id)_makeKeyWithLanguageAndAssetString:(id)arg1;
- (id)_makeKeyWithLanguageCode:(id)arg1;
- (void)_pushValueForDistributionKey:(id)arg1 withValue:(double)arg2;
- (void)cumulativeUptime:(id*)arg1 cumulativeDowntime:(id*)arg2 reset:(bool)arg3;
- (id)init;
- (void)logActivation;
- (void)logFalseWakeUp:(bool)arg1;
- (void)logProfileUpdateNumDeletedUttsPHS:(int)arg1;
- (void)logProfileUpdateNumDeletedUttsStrategy:(int)arg1;
- (void)logProfileUpdateScoreMSE:(double)arg1;
- (void)logRecognizerTimedOut;
- (void)logSecondPassResult:(bool)arg1;
- (void)logTdPsrExtraAudioSamplesProcessed:(unsigned long long)arg1;
- (void)logTdPsrFailedDuringSATDetection;
- (void)logTdPsrFailedDuringSATRetraining;
- (void)logTdPsrSATDetectionTimedOut;
- (void)logTdPsrSATDetectionWaitTimeMs:(double)arg1;
- (void)logTdPsrSATRetrainingTimedOut;
- (void)logTdPsrSATRetrainingWaitTimeMs:(double)arg1;
- (void)logTimeVoiceTriggerTransitionsToState:(unsigned long long)arg1;
- (void)logZeroRunAudio:(int)arg1;
- (void)setAssetString:(id)arg1;
- (void)setLanguageCode:(id)arg1;

@end
