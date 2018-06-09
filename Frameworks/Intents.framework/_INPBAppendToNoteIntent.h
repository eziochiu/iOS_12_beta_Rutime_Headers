/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppendToNoteIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBAppendToNoteIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBNoteContent * _content;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBNote * _targetNote;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBNoteContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTargetNote;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBNote *targetNote;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasContent;
- (bool)hasIntentMetadata;
- (bool)hasTargetNote;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTargetNote:(id)arg1;
- (id)targetNote;
- (void)writeTo:(id)arg1;

@end
