/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationSound : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _alertTopic;
    long long  _alertType;
    NSString * _audioCategory;
    NSNumber * _audioVolume;
    bool  _critical;
    double  _maximumDuration;
    bool  _shouldIgnoreRingerSwitch;
    bool  _shouldRepeat;
    NSString * _toneFileName;
    NSString * _toneIdentifier;
    unsigned long long  _toneMediaLibraryItemIdentifier;
    NSString * _vibrationIdentifier;
    NSDictionary * _vibrationPattern;
}

@property (nonatomic, readonly, copy) NSString *alertTopic;
@property (nonatomic, readonly) long long alertType;
@property (nonatomic, readonly, copy) NSString *audioCategory;
@property (nonatomic, readonly, copy) NSNumber *audioVolume;
@property (getter=isCritical, nonatomic, readonly) bool critical;
@property (nonatomic, readonly) double maximumDuration;
@property (nonatomic, readonly) bool shouldIgnoreRingerSwitch;
@property (nonatomic, readonly) bool shouldRepeat;
@property (nonatomic, readonly, copy) NSString *toneFileName;
@property (nonatomic, readonly, copy) NSString *toneIdentifier;
@property (nonatomic, readonly) unsigned long long toneMediaLibraryItemIdentifier;
@property (nonatomic, readonly, copy) NSString *vibrationIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *vibrationPattern;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)_soundWithAlertType:(long long)arg1 audioVolume:(id)arg2 critical:(bool)arg3 toneFileName:(id)arg4;
+ (id)criticalSoundNamed:(id)arg1;
+ (id)criticalSoundNamed:(id)arg1 withAudioVolume:(float)arg2;
+ (id)defaultCriticalSound;
+ (id)defaultCriticalSoundWithAudioVolume:(float)arg1;
+ (id)defaultSound;
+ (id)soundNamed:(id)arg1;
+ (id)soundWithAlertType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 audioCategory:(id)arg3 audioVolume:(id)arg4 critical:(bool)arg5 maximumDuration:(double)arg6 shouldIgnoreRingerSwitch:(bool)arg7 shouldRepeat:(bool)arg8 toneFileName:(id)arg9 toneIdentifier:(id)arg10 toneMediaLibraryItemIdentifier:(unsigned long long)arg11 vibrationIdentifier:(id)arg12 vibrationPattern:(id)arg13;
- (id)alertTopic;
- (long long)alertType;
- (id)audioCategory;
- (id)audioVolume;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCritical;
- (bool)isEqual:(id)arg1;
- (double)maximumDuration;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldIgnoreRingerSwitch;
- (bool)shouldRepeat;
- (id)toneFileName;
- (id)toneIdentifier;
- (unsigned long long)toneMediaLibraryItemIdentifier;
- (id)vibrationIdentifier;
- (id)vibrationPattern;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (id)mtSound;
- (id)mt_Description;

@end
