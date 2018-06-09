/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppendToNoteIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBAppendToNoteIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBNote * _note;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasNote;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBNote *note;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasNote;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)note;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setNote:(id)arg1;
- (void)writeTo:(id)arg1;

@end
