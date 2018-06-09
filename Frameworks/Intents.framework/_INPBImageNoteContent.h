/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBImageNoteContent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBImageNoteContent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBImageValue * _image;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBImageValue *image;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasImage;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setImage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
