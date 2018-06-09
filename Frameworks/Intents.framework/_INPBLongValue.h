/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBLongValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBLongValue> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int value : 1; 
    }  _has;
    long long  _value;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long value;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(long long)arg1;
- (void)setValueMetadata:(id)arg1;
- (long long)value;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
