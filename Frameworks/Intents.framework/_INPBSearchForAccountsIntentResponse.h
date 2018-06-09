/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForAccountsIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSearchForAccountsIntentResponse> {
    NSArray * _accounts;
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
}

@property (nonatomic, copy) NSArray *accounts;
@property (nonatomic, readonly) unsigned long long accountsCount;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)accountsType;

- (void).cxx_destruct;
- (id)accounts;
- (id)accountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountsCount;
- (void)addAccounts:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearAccounts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccounts:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)writeTo:(id)arg1;

@end
