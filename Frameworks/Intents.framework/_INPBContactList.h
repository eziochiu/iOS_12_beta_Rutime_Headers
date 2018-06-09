/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBContactList : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBContactList> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBCondition * _condition;
    NSArray * _contacts;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)contactType;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearContacts;
- (id)condition;
- (id)contactAtIndex:(unsigned long long)arg1;
- (id)contacts;
- (unsigned long long)contactsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
