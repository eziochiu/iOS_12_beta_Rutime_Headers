/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBUUIDValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBUUIDValue> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSString * _uuidString;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUuidString;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uuidString;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasUuidString;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setUuidString:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)uuidString;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
