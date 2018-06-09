/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSVoiceAsset : VSAssetBase <NSSecureCoding> {
    long long  _footprint;
    long long  _gender;
    bool  _isBuiltInVoice;
    bool  _isInstalled;
    NSArray * _languages;
    NSString * _name;
    long long  _type;
}

@property (nonatomic) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic) bool isBuiltInVoice;
@property (nonatomic) bool isInstalled;
@property (nonatomic, copy) NSArray *languages;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long type;

+ (long long)footprintFromString:(id)arg1;
+ (id)footprintStringFromFootprint:(long long)arg1;
+ (long long)genderFromString:(id)arg1;
+ (id)genderStringFromGender:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (long long)typeFromString:(id)arg1;
+ (id)typeStringFromType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)footprint;
- (long long)gender;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isBuiltInVoice;
- (bool)isInstalled;
- (id)languages;
- (id)name;
- (void)setFootprint:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setIsBuiltInVoice:(bool)arg1;
- (void)setIsInstalled:(bool)arg1;
- (void)setLanguages:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)voiceKey;

@end
