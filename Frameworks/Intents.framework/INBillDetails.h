/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INBillDetails : NSObject <NSCopying, NSSecureCoding> {
    INCurrencyAmount * _amountDue;
    INBillPayee * _billPayee;
    long long  _billType;
    NSDateComponents * _dueDate;
    INCurrencyAmount * _lateFee;
    INCurrencyAmount * _minimumDue;
    NSDateComponents * _paymentDate;
    long long  _paymentStatus;
}

@property (nonatomic, copy) INCurrencyAmount *amountDue;
@property (nonatomic, copy) INBillPayee *billPayee;
@property (nonatomic) long long billType;
@property (nonatomic, copy) NSDateComponents *dueDate;
@property (nonatomic, copy) INCurrencyAmount *lateFee;
@property (nonatomic, copy) INCurrencyAmount *minimumDue;
@property (nonatomic, copy) NSDateComponents *paymentDate;
@property (nonatomic) long long paymentStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)amountDue;
- (id)billPayee;
- (long long)billType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBillType:(long long)arg1 paymentStatus:(long long)arg2 billPayee:(id)arg3 amountDue:(id)arg4 minimumDue:(id)arg5 lateFee:(id)arg6 dueDate:(id)arg7 paymentDate:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lateFee;
- (id)minimumDue;
- (id)paymentDate;
- (long long)paymentStatus;
- (void)setAmountDue:(id)arg1;
- (void)setBillPayee:(id)arg1;
- (void)setBillType:(long long)arg1;
- (void)setDueDate:(id)arg1;
- (void)setLateFee:(id)arg1;
- (void)setMinimumDue:(id)arg1;
- (void)setPaymentDate:(id)arg1;
- (void)setPaymentStatus:(long long)arg1;

@end
