/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INHomeEntity : NSObject <NSCopying, NSSecureCoding> {
    long long  _deviceType;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 deviceType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (long long)type;

@end
