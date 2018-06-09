/* made by EzioChiu.
 */

@protocol CSEndpointAnalyzer <NSObject>

@required

- (double)automaticEndpointingSuspensionEndTime;
- (double)delay;
- (long long)endpointStyle;
- (double)lastEndOfVoiceActivityTime;
- (double)lastStartOfVoiceActivityTime;
- (double)minimumDurationForEndpointer;
- (void)preheat;
- (void)reset;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;
- (void)setDelay:(double)arg1;
- (void)setEndpointStyle:(long long)arg1;
- (void)setMinimumDurationForEndpointer:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (double)startWaitTime;

@optional

- (double)bypassSamples;
- (double)endWaitTime;
- (long long)endpointMode;
- (double)interspeechWaitTime;
- (bool)saveSamplesSeenInReset;
- (void)setBypassSamples:(double)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(long long)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setSaveSamplesSeenInReset:(bool)arg1;

@end
