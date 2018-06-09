/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNMutableNotificationSound : UNNotificationSound

@property (nonatomic, copy) NSString *alertTopic;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic, copy) NSNumber *audioVolume;
@property (getter=isCritical, nonatomic) bool critical;
@property (nonatomic) double maximumDuration;
@property (nonatomic) bool shouldIgnoreRingerSwitch;
@property (nonatomic) bool shouldRepeat;
@property (nonatomic, copy) NSString *toneFileName;
@property (nonatomic, copy) NSString *toneIdentifier;
@property (nonatomic) unsigned long long toneMediaLibraryItemIdentifier;
@property (nonatomic, copy) NSString *vibrationIdentifier;
@property (nonatomic, copy) NSDictionary *vibrationPattern;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAlertTopic:(id)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioVolume:(id)arg1;
- (void)setCritical:(bool)arg1;
- (void)setMaximumDuration:(double)arg1;
- (void)setShouldIgnoreRingerSwitch:(bool)arg1;
- (void)setShouldRepeat:(bool)arg1;
- (void)setToneFileName:(id)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setToneMediaLibraryItemIdentifier:(unsigned long long)arg1;
- (void)setVibrationIdentifier:(id)arg1;
- (void)setVibrationPattern:(id)arg1;

@end
