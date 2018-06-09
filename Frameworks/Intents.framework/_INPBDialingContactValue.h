/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDialingContactValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBDialingContactValue> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBContactValue * _dialingContact;
    _INPBStringValue * _dialingPhoneLabel;
    _INPBStringValue * _dialingPhoneNumber;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBContactValue *dialingContact;
@property (nonatomic, retain) _INPBStringValue *dialingPhoneLabel;
@property (nonatomic, retain) _INPBStringValue *dialingPhoneNumber;
@property (nonatomic, readonly) bool hasDialingContact;
@property (nonatomic, readonly) bool hasDialingPhoneLabel;
@property (nonatomic, readonly) bool hasDialingPhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dialingContact;
- (id)dialingPhoneLabel;
- (id)dialingPhoneNumber;
- (id)dictionaryRepresentation;
- (bool)hasDialingContact;
- (bool)hasDialingPhoneLabel;
- (bool)hasDialingPhoneNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDialingContact:(id)arg1;
- (void)setDialingPhoneLabel:(id)arg1;
- (void)setDialingPhoneNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
