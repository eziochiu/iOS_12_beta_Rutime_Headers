/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBFinancialAccountValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBFinancialAccountValue> {
    _INPBDataString * _accountNickname;
    NSString * _accountNumber;
    int  _accountType;
    INCodableAttribute * _associatedCodableAttribute;
    _INPBBalanceAmountValue * _balance;
    struct { 
        unsigned int accountType : 1; 
    }  _has;
    _INPBDataString * _organizationName;
    _INPBBalanceAmountValue * _secondaryBalance;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) _INPBDataString *accountNickname;
@property (nonatomic, copy) NSString *accountNumber;
@property (nonatomic) int accountType;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBBalanceAmountValue *balance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAccountNickname;
@property (nonatomic, readonly) bool hasAccountNumber;
@property (nonatomic) bool hasAccountType;
@property (nonatomic, readonly) bool hasBalance;
@property (nonatomic, readonly) bool hasOrganizationName;
@property (nonatomic, readonly) bool hasSecondaryBalance;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDataString *organizationName;
@property (nonatomic, retain) _INPBBalanceAmountValue *secondaryBalance;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

- (void).cxx_destruct;
- (int)StringAsAccountType:(id)arg1;
- (id)accountNickname;
- (id)accountNumber;
- (int)accountType;
- (id)accountTypeAsString:(int)arg1;
- (id)associatedCodableAttribute;
- (id)balance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAccountNickname;
- (bool)hasAccountNumber;
- (bool)hasAccountType;
- (bool)hasBalance;
- (bool)hasOrganizationName;
- (bool)hasSecondaryBalance;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)organizationName;
- (bool)readFrom:(id)arg1;
- (id)secondaryBalance;
- (void)setAccountNickname:(id)arg1;
- (void)setAccountNumber:(id)arg1;
- (void)setAccountType:(int)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setBalance:(id)arg1;
- (void)setHasAccountType:(bool)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setSecondaryBalance:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
