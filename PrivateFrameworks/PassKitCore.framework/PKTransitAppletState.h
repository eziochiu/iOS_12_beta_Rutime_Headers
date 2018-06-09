/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransitAppletState : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _balance;
    bool  _blacklisted;
    NSString * _currency;
    NSDate * _expirationDate;
    NSNumber * _historySequenceNumber;
    bool  _inStation;
    NSNumber * _loyaltyBalance;
    bool  _needsStationProcessing;
}

@property (nonatomic, copy) NSDecimalNumber *balance;
@property (getter=isBlacklisted, nonatomic) bool blacklisted;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) PKFelicaTransitAppletState *felicaState;
@property (nonatomic, copy) NSNumber *historySequenceNumber;
@property (getter=isInStation, nonatomic) bool inStation;
@property (nonatomic, copy) NSNumber *loyaltyBalance;
@property (nonatomic) bool needsStationProcessing;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 enRouteDetails:(id)arg4 concreteTransactions:(id*)arg5 ephemeralTransaction:(id*)arg6;
- (id)balance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)felicaState;
- (unsigned long long)hash;
- (id)historySequenceNumber;
- (id)initWithCoder:(id)arg1;
- (bool)isBlacklisted;
- (bool)isEqual:(id)arg1;
- (bool)isInStation;
- (id)loyaltyBalance;
- (bool)needsStationProcessing;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransactions:(id*)arg3;
- (void)setBalance:(id)arg1;
- (void)setBlacklisted:(bool)arg1;
- (void)setCurrency:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHistorySequenceNumber:(id)arg1;
- (void)setInStation:(bool)arg1;
- (void)setLoyaltyBalance:(id)arg1;
- (void)setNeedsStationProcessing:(bool)arg1;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1;

@end
