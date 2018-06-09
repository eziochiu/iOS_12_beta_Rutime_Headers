/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableAttribute : NSObject <NSCopying, NSSecureCoding> {
    INCodableAttribute * _associatedAttribute;
    NSNumber * _displayPriorityRank;
    long long  _modifier;
    INCodableAttribute * _primaryAttribute;
    NSString * _propertyName;
    NSNumber * _runtimeDisplayPriorityRank;
    NSNumber * _runtimeTag;
}

@property (nonatomic, retain) INCodableAttribute *associatedAttribute;
@property (nonatomic, copy) NSNumber *displayPriorityRank;
@property (nonatomic, readonly) SEL getter;
@property (nonatomic) long long modifier;
@property (nonatomic) INCodableAttribute *primaryAttribute;
@property (nonatomic, copy) NSString *propertyName;
@property (nonatomic, copy) NSNumber *runtimeDisplayPriorityRank;
@property (nonatomic, copy) NSNumber *runtimeTag;
@property (nonatomic, readonly) SEL setter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)associatedAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)displayPriorityRank;
- (void)encodeWithCoder:(id)arg1;
- (SEL)getter;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)modifier;
- (id)primaryAttribute;
- (id)propertyName;
- (id)runtimeDisplayPriorityRank;
- (id)runtimeTag;
- (void)setAssociatedAttribute:(id)arg1;
- (void)setDisplayPriorityRank:(id)arg1;
- (void)setModifier:(long long)arg1;
- (void)setPrimaryAttribute:(id)arg1;
- (void)setPropertyName:(id)arg1;
- (void)setRuntimeDisplayPriorityRank:(id)arg1;
- (void)setRuntimeTag:(id)arg1;
- (SEL)setter;

@end
