/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSInstrumentMetrics : NSObject <NSSecureCoding> {
    double  _audioDuration;
    long long  _audioStartTimestampDiffs;
    bool  _canUseServerTTS;
    long long  _eagerRequestCreatedTimeStampDiffs;
    bool  _isCacheHitFromDisk;
    bool  _isCacheHitFromMemory;
    bool  _isServerTTS;
    bool  _isServerTTSRacing;
    bool  _isServerTimeout;
    bool  _isSpeechRequest;
    bool  _isWarmStart;
    long long  _promptCount;
    long long  _requestCreatedTimestamp;
    long long  _speechBeginTimestamp;
    long long  _speechEndTimestamp;
    long long  _synthesisBeginTimestamp;
    long long  _synthesisEndTimestamp;
    long long  _synthesisToSpeechTimeGap;
    NSString * _utterance;
    NSString * _voiceAssetKey;
    long long  _waitForSynthesisToFinishTimeDelay;
}

@property double audioDuration;
@property long long audioStartTimestampDiffs;
@property bool canUseServerTTS;
@property long long eagerRequestCreatedTimeStampDiffs;
@property bool isCacheHitFromDisk;
@property bool isCacheHitFromMemory;
@property bool isServerTTS;
@property bool isServerTTSRacing;
@property bool isServerTimeout;
@property bool isSpeechRequest;
@property bool isWarmStart;
@property long long promptCount;
@property long long requestCreatedTimestamp;
@property long long speechBeginTimestamp;
@property long long speechEndTimestamp;
@property long long synthesisBeginTimestamp;
@property long long synthesisEndTimestamp;
@property long long synthesisToSpeechTimeGap;
@property (copy) NSString *utterance;
@property (copy) NSString *voiceAssetKey;
@property long long waitForSynthesisToFinishTimeDelay;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_clockFactor;
- (double)audioDuration;
- (double)audioQueueLatency;
- (long long)audioStartTimestampDiffs;
- (bool)canUseServerTTS;
- (id)description;
- (id)dictionaryMetrics;
- (long long)eagerRequestCreatedTimeStampDiffs;
- (double)eagerRequestTimeGap;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCacheHitFromDisk;
- (bool)isCacheHitFromMemory;
- (bool)isServerTTS;
- (bool)isServerTTSRacing;
- (bool)isServerTimeout;
- (bool)isSpeechRequest;
- (bool)isSynthesisCached;
- (bool)isWarmStart;
- (long long)promptCount;
- (long long)requestCreatedTimestamp;
- (void)setAudioDuration:(double)arg1;
- (void)setAudioStartTimestampDiffs:(long long)arg1;
- (void)setCanUseServerTTS:(bool)arg1;
- (void)setEagerRequestCreatedTimeStampDiffs:(long long)arg1;
- (void)setIsCacheHitFromDisk:(bool)arg1;
- (void)setIsCacheHitFromMemory:(bool)arg1;
- (void)setIsServerTTS:(bool)arg1;
- (void)setIsServerTTSRacing:(bool)arg1;
- (void)setIsServerTimeout:(bool)arg1;
- (void)setIsSpeechRequest:(bool)arg1;
- (void)setIsWarmStart:(bool)arg1;
- (void)setPromptCount:(long long)arg1;
- (void)setRequestCreatedTimestamp:(long long)arg1;
- (void)setSpeechBeginTimestamp:(long long)arg1;
- (void)setSpeechEndTimestamp:(long long)arg1;
- (void)setSynthesisBeginTimestamp:(long long)arg1;
- (void)setSynthesisEndTimestamp:(long long)arg1;
- (void)setSynthesisToSpeechTimeGap:(long long)arg1;
- (void)setUtterance:(id)arg1;
- (void)setVoiceAssetKey:(id)arg1;
- (void)setWaitForSynthesisToFinishTimeDelay:(long long)arg1;
- (long long)speechBeginTimestamp;
- (long long)speechEndTimestamp;
- (long long)synthesisBeginTimestamp;
- (long long)synthesisEndTimestamp;
- (double)synthesisLatency;
- (double)synthesisToSpeechTime;
- (long long)synthesisToSpeechTimeGap;
- (double)timeToSpeakLatency;
- (double)ttsSynthesisLatency;
- (double)ttsTotalLatency;
- (id)utterance;
- (id)voiceAssetKey;
- (double)waitForSynthesisToFinishTime;
- (long long)waitForSynthesisToFinishTimeDelay;

@end
