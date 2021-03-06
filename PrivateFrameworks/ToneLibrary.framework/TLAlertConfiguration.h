/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _audioCategory;
    float  _audioVolume;
    NSURL * _externalToneFileURL;
    unsigned long long  _externalToneMediaLibraryItemIdentifier;
    NSDictionary * _externalVibrationPattern;
    NSURL * _externalVibrationPatternFileURL;
    bool  _forPreview;
    bool  _hasCustomAudioVolume;
    bool  _hasCustomRepeatingFlag;
    bool  _isFrozen;
    double  _maximumDuration;
    bool  _shouldForcePlayingAtUserSelectedAudioVolume;
    bool  _shouldIgnoreRingerSwitch;
    bool  _shouldRepeat;
    NSString * _toneIdentifier;
    NSString * _topic;
    long long  _type;
    NSString * _vibrationIdentifier;
}

@property (nonatomic, readonly) bool _hasCustomAudioVolume;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic) float audioVolume;
@property (nonatomic, copy) NSURL *externalToneFileURL;
@property (nonatomic) unsigned long long externalToneMediaLibraryItemIdentifier;
@property (nonatomic, copy) NSDictionary *externalVibrationPattern;
@property (nonatomic, copy) NSURL *externalVibrationPatternFileURL;
@property (getter=isForPreview, nonatomic) bool forPreview;
@property (nonatomic) double maximumDuration;
@property (nonatomic) bool shouldForcePlayingAtUserSelectedAudioVolume;
@property (nonatomic) bool shouldIgnoreRingerSwitch;
@property (nonatomic) bool shouldRepeat;
@property (nonatomic, copy) NSString *toneIdentifier;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, readonly) long long type;
@property (nonatomic, copy) NSString *vibrationIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_freeze;
- (bool)_hasCustomAudioVolume;
- (void)_throwForFrozenInstance;
- (id)audioCategory;
- (float)audioVolume;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalToneFileURL;
- (unsigned long long)externalToneMediaLibraryItemIdentifier;
- (id)externalVibrationPattern;
- (id)externalVibrationPatternFileURL;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isForPreview;
- (double)maximumDuration;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioVolume:(float)arg1;
- (void)setExternalToneFileURL:(id)arg1;
- (void)setExternalToneMediaLibraryItemIdentifier:(unsigned long long)arg1;
- (void)setExternalVibrationPattern:(id)arg1;
- (void)setExternalVibrationPatternFileURL:(id)arg1;
- (void)setForPreview:(bool)arg1;
- (void)setMaximumDuration:(double)arg1;
- (void)setShouldForcePlayingAtUserSelectedAudioVolume:(bool)arg1;
- (void)setShouldIgnoreRingerSwitch:(bool)arg1;
- (void)setShouldRepeat:(bool)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setVibrationIdentifier:(id)arg1;
- (bool)shouldForcePlayingAtUserSelectedAudioVolume;
- (bool)shouldIgnoreRingerSwitch;
- (bool)shouldRepeat;
- (id)toneIdentifier;
- (id)topic;
- (long long)type;
- (id)vibrationIdentifier;

@end
