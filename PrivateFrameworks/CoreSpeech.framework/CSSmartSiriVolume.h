/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSmartSiriVolume : NSObject <CSAlarmMonitorDelegate, CSMediaPlayingMonitorDelegate, CSSpeechManagerDelegate, CSTimerMonitorDelegate, CSVoiceTriggerDelegate> {
    unsigned long long  _LKFSChannelBitset;
    unsigned int  _LKFSLowerPercentile;
    float  _LKFSMicSensitivityOffset;
    float  _LKFSTTSMappingInputRangeHigh;
    float  _LKFSTTSMappingInputRangeLow;
    float  _LKFSTTSMappingOutputRangeHigh;
    float  _LKFSTTSMappingOutputRangeLow;
    float  _LKFSTimeConstant;
    unsigned int  _LKFSUpperPercentile;
    float  _TTSVolumeLowerLimitDB;
    float  _TTSVolumeUpperLimitDB;
    bool  _alarmSoundIsFiring;
    float  _alarmVolume;
    CSAsset * _currentAsset;
    NSUserDefaults * _defaults;
    unsigned int  _energyBufferSize;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__value_; 
        } __end_cap_; 
    }  _floatBuffer;
    bool  _isStartSampleCountMarked;
    bool  _mediaIsPlaying;
    float  _musicVolumeDB;
    unsigned long long  _noiseLevelChannelBitset;
    unsigned int  _noiseLowerPercentile;
    float  _noiseMicSensitivityOffset;
    float  _noiseTTSMappingInputRangeHigh;
    float  _noiseTTSMappingInputRangeLow;
    float  _noiseTTSMappingOutputRangeHigh;
    float  _noiseTTSMappingOutputRangeLow;
    float  _noiseTimeConstant;
    unsigned int  _noiseUpperPercentile;
    float  _noiseWeight;
    unsigned long long  _processedSampleCount;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _samplesFed;
    bool  _shouldPauseLKFSProcess;
    bool  _shouldPauseSSVProcess;
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume> > { 
        struct __compressed_pair<SmartSiriVolume *, std::__1::default_delete<SmartSiriVolume> > { 
            struct SmartSiriVolume {} *__value_; 
        } __ptr_; 
    }  _smartSiriVolumeLKFS;
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume> > { 
        struct __compressed_pair<SmartSiriVolume *, std::__1::default_delete<SmartSiriVolume> > { 
            struct SmartSiriVolume {} *__value_; 
        } __ptr_; 
    }  _smartSiriVolumeNoiseLevel;
    unsigned long long  _startAnalyzeSampleCount;
    bool  _timerSoundIsFiring;
    float  _userOffsetInputRangeHigh;
    float  _userOffsetInputRangeLow;
    float  _userOffsetOutputRangeHigh;
    float  _userOffsetOutputRangeLow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;
- (float)_combineResultsWithOptimalFromNoise:(float)arg1 andOptimalFromLkfs:(float)arg2 withUserOffset:(float)arg3;
- (float)_convertDB2Mag:(float)arg1;
- (float)_estimatedTTSVolume:(float)arg1 lowerLimit:(float)arg2 upperLimit:(float)arg3 TTSmappingInputRangeLow:(float)arg4 TTSmappingInputRangeHigh:(float)arg5 TTSmappingOutputRangeLow:(float)arg6 TTSmappingOutputRangeHigh:(float)arg7;
- (float)_getMusicVolumeDB:(float)arg1;
- (void)_prepareSoundLevelBufferFromSamples:(unsigned int)arg1 soundType:(long long)arg2;
- (void)_processAudioChunk:(id)arg1 soundType:(long long)arg2;
- (void)_reset;
- (void)_resetStartAnalyzeTime;
- (float)_scaleInputWithInRangeOutRange:(float)arg1 minIn:(float)arg2 maxIn:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;
- (void)_setAsset:(id)arg1;
- (void)_setDefaultParameters;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (float)estimateSoundLevelbySoundType:(long long)arg1;
- (float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg1 LKFS:(float)arg2;
- (void)fetchInitSystemVolumes;
- (id)initWithSamplingRate:(float)arg1 asset:(id)arg2;
- (void)initializeAlarmState;
- (void)initializeMediaPlayingState;
- (void)initializeTimerState;
- (void)pauseSSVProcessing;
- (void)prepareSoundLevelBufferFromSamples:(id)arg1 soundType:(long long)arg2 firedVoiceTriggerEvent:(bool)arg3 triggerStartTimeSampleOffset:(unsigned long long)arg4 triggerEndTimeSampleOffset:(unsigned long long)arg5;
- (void)reset;
- (void)resumeSSVProcessing;
- (void)setAsset:(id)arg1;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)startSmartSiriVolume;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;

@end
