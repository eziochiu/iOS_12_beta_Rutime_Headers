/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodable : PBCodable <NSCopying> {
    NSMutableDictionary * _customValueForKeyDictionary;
    INCodableDescription * _objectDescription;
    NSMutableDictionary * _runtimeAttributesByName;
    NSMutableDictionary * _runtimeValueDictionary;
}

@property (setter=_setObjectDescription:, nonatomic, retain) INCodableDescription *_objectDescription;
@property (getter=_allAttributes, nonatomic, readonly) NSArray *allAttributes;
@property (nonatomic, retain) NSMutableDictionary *customValueForKeyDictionary;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=_runtimeAttributesByName, nonatomic, readonly) NSDictionary *runtimeAttributesByName;
@property (nonatomic, retain) NSMutableDictionary *runtimeValueDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)_UInt32ValueForAttribute:(id)arg1;
- (unsigned long long)_UInt64ValueForAttribute:(id)arg1;
- (void)_addRuntimeAttribute:(id)arg1;
- (id)_allAttributes;
- (id)_associatedImageAttributes;
- (bool)_boolValueForAttribute:(id)arg1;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 error:(id*)arg2;
- (id)_dataWithError:(id*)arg1;
- (id)_dictionaryRepresentationWithNullValues:(bool)arg1;
- (double)_doubleValueForAttribute:(id)arg1;
- (float)_floatValueForAttribute:(id)arg1;
- (id)_initWithCodableDescription:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (int)_int32ValueForAttribute:(id)arg1;
- (long long)_int64ValueForAttribute:(id)arg1;
- (bool)_isAttribute:(id)arg1 equalTo:(id)arg2;
- (bool)_isStringAttribute:(id)arg1 equalTo:(id)arg2;
- (id)_nonNilAttributes;
- (id)_objectDescription;
- (bool)_readFrom:(id)arg1 error:(id*)arg2;
- (void)_removeRuntimeAttribute:(id)arg1;
- (id)_runtimeAttributeValueForKey:(id)arg1;
- (id)_runtimeAttributesByName;
- (void)_setBoolValue:(bool)arg1 forAttribute:(id)arg2;
- (void)_setDoubleValue:(double)arg1 forAttribute:(id)arg2;
- (void)_setFloatValue:(float)arg1 forAttribute:(id)arg2;
- (void)_setInt32Value:(int)arg1 forAttribute:(id)arg2;
- (void)_setInt64Value:(long long)arg1 forAttribute:(id)arg2;
- (void)_setObject:(id)arg1 forAttribute:(id)arg2;
- (void)_setObjectDescription:(id)arg1;
- (void)_setRuntimeAttributeValue:(id)arg1 forKey:(id)arg2;
- (void)_setUInt32Value:(unsigned int)arg1 forAttribute:(id)arg2;
- (void)_setUInt64Value:(unsigned long long)arg1 forAttribute:(id)arg2;
- (void)_setValue:(void*)arg1 forAttribute:(id)arg2;
- (id)_valueForAttribute:(id)arg1;
- (id)_valueForAttribute:(id)arg1 ofClass:(Class)arg2;
- (void)_writeTo:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customValueForKeyDictionary;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCodableDescription:(id)arg1 data:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValidKey:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (id)runtimeValueDictionary;
- (void)setCustomValueForKeyDictionary:(id)arg1;
- (void)setNilValueForAllKeys;
- (void)setRuntimeValueDictionary:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
