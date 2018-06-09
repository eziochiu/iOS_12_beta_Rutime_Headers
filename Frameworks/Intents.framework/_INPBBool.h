/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBBool : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBBool> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSArray * _values;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (Class)valueType;

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setValues:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)values;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
