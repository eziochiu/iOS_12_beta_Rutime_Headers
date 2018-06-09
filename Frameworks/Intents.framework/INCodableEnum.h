/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableEnum : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    long long  _type;
    NSArray * _values;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSArray *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 values:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (long long)type;
- (id)values;

@end
