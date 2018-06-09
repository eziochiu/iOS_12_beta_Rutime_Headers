/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding> {
    NSString * _enumName;
    NSArray * _enumValues;
    long long  _type;
    NSArray * _valuesByIndex;
}

@property (nonatomic, copy) NSString *enumName;
@property (nonatomic, copy) NSArray *enumValues;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)enumName;
- (id)enumValues;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEnumName:(id)arg1;
- (void)setEnumValues:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)valueForIndex:(unsigned long long)arg1;

@end
