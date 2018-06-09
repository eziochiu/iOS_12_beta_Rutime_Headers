/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASRecordingInfo : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSNumber *activationAudioAlertDuration;
@property (nonatomic, copy) NSNumber *activationAudioAlertStartTime;
@property (nonatomic, copy) NSNumber *activationHapticAlertDuration;
@property (nonatomic, copy) NSNumber *activationHapticAlertStartTime;
@property (nonatomic, copy) NSNumber *activationTime;
@property (nonatomic, copy) NSString *alertType;
@property (nonatomic, copy) NSNumber *beamFormingStartTime;
@property (nonatomic, copy) NSNumber *buttonDowntime;
@property (nonatomic, copy) NSNumber *buttonUpTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ringerSwitchOff;
@property (readonly) Class superclass;
@property (nonatomic) bool zeroLatencyLaunch;

+ (id)recordingInfo;
+ (id)recordingInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)activationAudioAlertDuration;
- (id)activationAudioAlertStartTime;
- (id)activationHapticAlertDuration;
- (id)activationHapticAlertStartTime;
- (id)activationTime;
- (id)alertType;
- (id)beamFormingStartTime;
- (id)buttonDowntime;
- (id)buttonUpTime;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)ringerSwitchOff;
- (void)setActivationAudioAlertDuration:(id)arg1;
- (void)setActivationAudioAlertStartTime:(id)arg1;
- (void)setActivationHapticAlertDuration:(id)arg1;
- (void)setActivationHapticAlertStartTime:(id)arg1;
- (void)setActivationTime:(id)arg1;
- (void)setAlertType:(id)arg1;
- (void)setBeamFormingStartTime:(id)arg1;
- (void)setButtonDowntime:(id)arg1;
- (void)setButtonUpTime:(id)arg1;
- (void)setRingerSwitchOff:(bool)arg1;
- (void)setZeroLatencyLaunch:(bool)arg1;
- (bool)zeroLatencyLaunch;

@end
