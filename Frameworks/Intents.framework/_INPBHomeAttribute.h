/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBHomeAttribute : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBHomeAttribute> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _attributeType;
    _INPBHomeAttributeValue * _attributeValue;
    struct { 
        unsigned int attributeType : 1; 
    }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) int attributeType;
@property (nonatomic, retain) _INPBHomeAttributeValue *attributeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAttributeType;
@property (nonatomic, readonly) bool hasAttributeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsAttributeType:(id)arg1;
- (id)associatedCodableAttribute;
- (int)attributeType;
- (id)attributeTypeAsString:(int)arg1;
- (id)attributeValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAttributeType;
- (bool)hasAttributeValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setAttributeType:(int)arg1;
- (void)setAttributeValue:(id)arg1;
- (void)setHasAttributeType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
