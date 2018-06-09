/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadConfirmation : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPayloadConfirmation> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBSelectionItem * _confirmationItem;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBSelectionItem *confirmationItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasConfirmationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)confirmationItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasConfirmationItem;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setConfirmationItem:(id)arg1;
- (void)writeTo:(id)arg1;

@end
