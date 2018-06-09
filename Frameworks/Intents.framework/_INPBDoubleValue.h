/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDoubleValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBDoubleValue> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int value : 1; 
    }  _has;
    double  _value;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double value;
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
- (void)setValue:(double)arg1;
- (void)setValueMetadata:(id)arg1;
- (double)value;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
