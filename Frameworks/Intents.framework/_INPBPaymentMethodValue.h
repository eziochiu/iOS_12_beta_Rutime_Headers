/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPaymentMethodValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPaymentMethodValue> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int type : 1; 
    }  _has;
    _INPBImageValue * _icon;
    NSString * _identificationHint;
    NSString * _name;
    int  _type;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIcon;
@property (nonatomic, readonly) bool hasIdentificationHint;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBImageValue *icon;
@property (nonatomic, copy) NSString *identificationHint;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIcon;
- (bool)hasIdentificationHint;
- (bool)hasName;
- (bool)hasType;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)icon;
- (id)identificationHint;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentificationHint:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
