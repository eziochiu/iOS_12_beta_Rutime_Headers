/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INVoiceCommandDeviceInformation : NSObject <NSCopying, NSSecureCoding> {
    long long  _deviceIdiom;
    NSNumber * _isHomePodInUltimateMode;
}

@property (nonatomic, readonly) long long deviceIdiom;
@property (nonatomic, readonly, copy) NSNumber *isHomePodInUltimateMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)deviceIdiom;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIdiom:(long long)arg1 isHomePodInUltimateMode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)isHomePodInUltimateMode;

@end
