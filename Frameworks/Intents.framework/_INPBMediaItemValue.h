/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMediaItemValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBMediaItemValue> {
    _INPBImageValue * _artwork;
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _title;
    int  _type;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) _INPBImageValue *artwork;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int type;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)artwork;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasArtwork;
- (bool)hasIdentifier;
- (bool)hasTitle;
- (bool)hasType;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)title;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
