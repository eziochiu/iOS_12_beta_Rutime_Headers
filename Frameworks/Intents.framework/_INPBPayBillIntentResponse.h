/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayBillIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPayBillIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBBillDetailsValue * _billDetails;
    _INPBFinancialAccountValue * _fromAccount;
    struct { }  _has;
    _INPBPaymentAmountValue * _transactionAmount;
    _INPBString * _transactionNote;
    _INPBDateTimeRange * _transactionScheduledDate;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBBillDetailsValue *billDetails;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBFinancialAccountValue *fromAccount;
@property (nonatomic, readonly) bool hasBillDetails;
@property (nonatomic, readonly) bool hasFromAccount;
@property (nonatomic, readonly) bool hasTransactionAmount;
@property (nonatomic, readonly) bool hasTransactionNote;
@property (nonatomic, readonly) bool hasTransactionScheduledDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBPaymentAmountValue *transactionAmount;
@property (nonatomic, retain) _INPBString *transactionNote;
@property (nonatomic, retain) _INPBDateTimeRange *transactionScheduledDate;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)billDetails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)fromAccount;
- (bool)hasBillDetails;
- (bool)hasFromAccount;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setBillDetails:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;
- (void)writeTo:(id)arg1;

@end
