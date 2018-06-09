/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNSettings : NSObject <NSSecureCoding> {
    double  _alightSignalTimeBuffer;
    double  _backgroundTimeWindow;
    bool  _beepBeforeInstruction;
    unsigned long long  _distanceUnits;
    bool  _drivingVoiceGuidance;
    double  _etaRequestInterval;
    long long  _fakeTrafficIncidentAlert;
    double  _initialRequestDelay;
    double  _initialTraceSpeedMultiplier;
    bool  _isTracePlaybackCameraTestMode;
    unsigned long long  _maxAlternateRoutesCount;
    bool  _muteSpeechOverride;
    bool  _pauseSpokenAudio;
    bool  _shouldLoadETAUpdatesFromTrace;
    bool  _shouldLoadInitialRouteFromTrace;
    bool  _shouldLoadReroutesFromTrace;
    bool  _shouldUseGuidanceEventManager;
    bool  _speechEnabled;
    NSString * _voiceLanguage;
    unsigned long long  _voiceVolume;
    bool  _walkingVoiceGuidance;
}

@property (nonatomic, readonly) double alightSignalTimeBuffer;
@property (nonatomic, readonly) double backgroundTimeWindow;
@property (nonatomic, readonly) bool beepBeforeInstruction;
@property (nonatomic, readonly) unsigned long long distanceUnits;
@property (nonatomic, readonly) bool drivingVoiceGuidance;
@property (nonatomic, readonly) double etaRequestInterval;
@property (nonatomic, readonly) long long fakeTrafficIncidentAlert;
@property (nonatomic, readonly) double initialRequestDelay;
@property (nonatomic, readonly) double initialTraceSpeedMultiplier;
@property (nonatomic, readonly) bool isTracePlaybackCameraTestMode;
@property (nonatomic, readonly) unsigned long long maxAlternateRoutesCount;
@property (nonatomic, readonly) bool muteSpeechOverride;
@property (nonatomic, readonly) bool pauseSpokenAudio;
@property (nonatomic, readonly) bool shouldLoadETAUpdatesFromTrace;
@property (nonatomic, readonly) bool shouldLoadInitialRouteFromTrace;
@property (nonatomic, readonly) bool shouldLoadReroutesFromTrace;
@property (nonatomic, readonly) bool shouldUseGuidanceEventManager;
@property (nonatomic, readonly) bool speechEnabled;
@property (nonatomic, readonly) NSString *voiceLanguage;
@property (nonatomic, readonly) unsigned long long voiceVolume;
@property (nonatomic, readonly) bool walkingVoiceGuidance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)alightSignalTimeBuffer;
- (double)backgroundTimeWindow;
- (bool)beepBeforeInstruction;
- (id)description;
- (unsigned long long)distanceUnits;
- (bool)drivingVoiceGuidance;
- (void)encodeWithCoder:(id)arg1;
- (double)etaRequestInterval;
- (long long)fakeTrafficIncidentAlert;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)initialRequestDelay;
- (double)initialTraceSpeedMultiplier;
- (bool)isTracePlaybackCameraTestMode;
- (unsigned long long)maxAlternateRoutesCount;
- (bool)muteSpeechOverride;
- (bool)pauseSpokenAudio;
- (bool)shouldLoadETAUpdatesFromTrace;
- (bool)shouldLoadInitialRouteFromTrace;
- (bool)shouldLoadReroutesFromTrace;
- (bool)shouldUseGuidanceEventManager;
- (bool)speechEnabled;
- (id)voiceLanguage;
- (unsigned long long)voiceVolume;
- (bool)walkingVoiceGuidance;

@end
