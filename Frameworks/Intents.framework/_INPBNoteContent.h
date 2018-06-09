/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBNoteContent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBNoteContent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int type : 1; 
    }  _has;
    _INPBImageNoteContent * _image;
    _INPBTextNoteContent * _text;
    int  _type;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBImageNoteContent *image;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTextNoteContent *text;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasImage;
- (bool)hasText;
- (bool)hasType;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(int)arg1;
- (id)text;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
