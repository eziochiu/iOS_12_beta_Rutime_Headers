/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXProviderConfiguration : NSObject <CXCopying, NSCopying, NSSecureCoding> {
    unsigned int  _audioSessionID;
    NSArray * _emergencyHandles;
    NSArray * _emergencyLabeledHandles;
    NSArray * _handoffIdentifiers;
    NSData * _iconTemplateImageData;
    bool  _includesCallsInRecents;
    NSString * _localizedName;
    unsigned long long  _maximumCallGroups;
    unsigned long long  _maximumCallsPerCallGroup;
    NSOrderedSet * _prioritizedSenderIdentities;
    NSURL * _ringtoneSoundURL;
    NSSet * _supportedHandleTypes;
    bool  _supportsAudioOnly;
    bool  _supportsCurrentPlatform;
    bool  _supportsEmergency;
    bool  _supportsVideo;
    bool  _supportsVoicemail;
}

@property (nonatomic) unsigned int audioSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *emergencyHandles;
@property (nonatomic, copy) NSArray *emergencyLabeledHandles;
@property (nonatomic, copy) NSArray *handoffIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *iconTemplateImageData;
@property (nonatomic) bool includesCallsInRecents;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic) unsigned long long maximumCallGroups;
@property (nonatomic) unsigned long long maximumCallsPerCallGroup;
@property (nonatomic, copy) NSOrderedSet *prioritizedSenderIdentities;
@property (nonatomic, retain) NSString *ringtoneSound;
@property (nonatomic, copy) NSURL *ringtoneSoundURL;
@property (nonatomic, copy) NSSet *senderIdentities;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *supportedHandleTypes;
@property (nonatomic) bool supportsAudioOnly;
@property (nonatomic) bool supportsCurrentPlatform;
@property (nonatomic) bool supportsEmergency;
@property (nonatomic) bool supportsVideo;
@property (nonatomic) bool supportsVoicemail;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)audioSessionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emergencyHandles;
- (id)emergencyLabeledHandles;
- (void)encodeWithCoder:(id)arg1;
- (id)handoffIdentifiers;
- (unsigned long long)hash;
- (id)iconTemplateImageData;
- (bool)includesCallsInRecents;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (id)localizedName;
- (unsigned long long)maximumCallGroups;
- (unsigned long long)maximumCallsPerCallGroup;
- (id)prioritizedSenderIdentities;
- (id)ringtoneSound;
- (id)ringtoneSoundURL;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (id)senderIdentities;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setEmergencyHandles:(id)arg1;
- (void)setEmergencyLabeledHandles:(id)arg1;
- (void)setHandoffIdentifiers:(id)arg1;
- (void)setIconTemplateImageData:(id)arg1;
- (void)setIncludesCallsInRecents:(bool)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setMaximumCallGroups:(unsigned long long)arg1;
- (void)setMaximumCallsPerCallGroup:(unsigned long long)arg1;
- (void)setPrioritizedSenderIdentities:(id)arg1;
- (void)setRingtoneSound:(id)arg1;
- (void)setRingtoneSoundURL:(id)arg1;
- (void)setSenderIdentities:(id)arg1;
- (void)setSupportedHandleTypes:(id)arg1;
- (void)setSupportsAudioOnly:(bool)arg1;
- (void)setSupportsCurrentPlatform:(bool)arg1;
- (void)setSupportsEmergency:(bool)arg1;
- (void)setSupportsVideo:(bool)arg1;
- (void)setSupportsVoicemail:(bool)arg1;
- (id)supportedHandleTypes;
- (bool)supportsAudioOnly;
- (bool)supportsCurrentPlatform;
- (bool)supportsEmergency;
- (bool)supportsVideo;
- (bool)supportsVoicemail;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
