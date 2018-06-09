/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNMutableSettings : MNSettings

@property (nonatomic) double alightSignalTimeBuffer;
@property (nonatomic) double backgroundTimeWindow;
@property (nonatomic) bool beepBeforeInstruction;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) bool drivingVoiceGuidance;
@property (nonatomic) double etaRequestInterval;
@property (nonatomic) long long fakeTrafficIncidentAlert;
@property (nonatomic) double initialRequestDelay;
@property (nonatomic) double initialTraceSpeedMultiplier;
@property (nonatomic) bool isTracePlaybackCameraTestMode;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (nonatomic) bool muteSpeechOverride;
@property (nonatomic) bool pauseSpokenAudio;
@property (nonatomic) bool shouldLoadETAUpdatesFromTrace;
@property (nonatomic) bool shouldLoadInitialRouteFromTrace;
@property (nonatomic) bool shouldLoadReroutesFromTrace;
@property (nonatomic) bool shouldUseGuidanceEventManager;
@property (nonatomic) bool speechEnabled;
@property (nonatomic, copy) NSString *voiceLanguage;
@property (nonatomic) unsigned long long voiceVolume;
@property (nonatomic) bool walkingVoiceGuidance;

+ (id)settingsWithSettings:(id)arg1;

- (void)setAlightSignalTimeBuffer:(double)arg1;
- (void)setBackgroundTimeWindow:(double)arg1;
- (void)setBeepBeforeInstruction:(bool)arg1;
- (void)setDistanceUnits:(unsigned long long)arg1;
- (void)setDrivingVoiceGuidance:(bool)arg1;
- (void)setEtaRequestInterval:(double)arg1;
- (void)setFakeTrafficIncidentAlert:(long long)arg1;
- (void)setInitialRequestDelay:(double)arg1;
- (void)setInitialTraceSpeedMultiplier:(double)arg1;
- (void)setIsTracePlaybackCameraTestMode:(bool)arg1;
- (void)setMaxAlternateRoutesCount:(unsigned long long)arg1;
- (void)setMuteSpeechOverride:(bool)arg1;
- (void)setPauseSpokenAudio:(bool)arg1;
- (void)setShouldLoadETAUpdatesFromTrace:(bool)arg1;
- (void)setShouldLoadInitialRouteFromTrace:(bool)arg1;
- (void)setShouldLoadReroutesFromTrace:(bool)arg1;
- (void)setShouldUseGuidanceEventManager:(bool)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)setVoiceLanguage:(id)arg1;
- (void)setVoiceVolume:(unsigned long long)arg1;
- (void)setWalkingVoiceGuidance:(bool)arg1;

@end
