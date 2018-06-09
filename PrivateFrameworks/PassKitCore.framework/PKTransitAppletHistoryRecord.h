/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransitAppletHistoryRecord : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSDecimalNumber * _balance;
    unsigned long long  _detail;
    NSData * _endStation;
    NSNumber * _historySequenceNumber;
    NSNumber * _loyaltyAmount;
    NSNumber * _loyaltyBalance;
    long long  _paymentTransactionType;
    long long  _recordType;
    NSData * _startStation;
    unsigned long long  _subtype;
    NSDate * _time;
    NSString * _transitDetail;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSDecimalNumber *balance;
@property (nonatomic) unsigned long long detail;
@property (nonatomic, copy) NSData *endStation;
@property (nonatomic, copy) NSNumber *historySequenceNumber;
@property (nonatomic, copy) NSNumber *loyaltyAmount;
@property (nonatomic, copy) NSNumber *loyaltyBalance;
@property (nonatomic, readonly) long long paymentTransactionType;
@property (nonatomic) long long recordType;
@property (nonatomic, copy) NSData *startStation;
@property (nonatomic) unsigned long long subtype;
@property (nonatomic, copy) NSDate *time;
@property (nonatomic, copy) NSString *transitDetail;
@property (nonatomic, readonly) unsigned long long transitTransactionModifier;
@property (nonatomic, readonly) long long transitTransactionSubtype;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setTransactionHistoryDetailsFromString:(id)arg1;
- (id)amount;
- (id)balance;
- (id)concreteTransactionWithCurrency:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)detail;
- (void)encodeWithCoder:(id)arg1;
- (id)endStation;
- (id)felicaHistoryRecord;
- (id)historySequenceNumber;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)loyaltyAmount;
- (id)loyaltyBalance;
- (long long)paymentTransactionType;
- (long long)recordType;
- (void)setAmount:(id)arg1;
- (void)setBalance:(id)arg1;
- (void)setDetail:(unsigned long long)arg1;
- (void)setEndStation:(id)arg1;
- (void)setHistorySequenceNumber:(id)arg1;
- (void)setLoyaltyAmount:(id)arg1;
- (void)setLoyaltyBalance:(id)arg1;
- (void)setRecordType:(long long)arg1;
- (void)setStartStation:(id)arg1;
- (void)setSubtype:(unsigned long long)arg1;
- (void)setTime:(id)arg1;
- (void)setTransitDetail:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)startStation;
- (unsigned long long)subtype;
- (id)time;
- (id)transitDetail;
- (unsigned long long)transitTransactionModifier;
- (long long)transitTransactionSubtype;
- (unsigned long long)type;

@end
