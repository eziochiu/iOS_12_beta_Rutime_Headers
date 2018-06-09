/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransitAppletHistory : NSObject <NSSecureCoding> {
    NSDecimalNumber * _balance;
    bool  _blacklisted;
    NSString * _currency;
    NSDate * _expirationDate;
    NSArray * _historyRecords;
    bool  _inStation;
    NSArray * _inStationDetails;
    NSNumber * _loyaltyBalance;
    NSString * _serviceProvider;
    long long  _source;
}

@property (nonatomic, copy) NSDecimalNumber *balance;
@property (getter=isBlacklisted, nonatomic) bool blacklisted;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, copy) NSArray *historyRecords;
@property (getter=isInStation, nonatomic) bool inStation;
@property (nonatomic, copy) NSArray *inStationDetails;
@property (nonatomic, copy) NSNumber *loyaltyBalance;
@property (nonatomic, copy) NSString *serviceProvider;
@property (nonatomic) long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)balance;
- (id)currency;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)felicaHistory;
- (id)historyRecords;
- (id)inStationDetails;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;
- (bool)isBlacklisted;
- (bool)isInStation;
- (id)loyaltyBalance;
- (void)sanitizeValuesWithState:(id)arg1;
- (id)serviceProvider;
- (void)setBalance:(id)arg1;
- (void)setBlacklisted:(bool)arg1;
- (void)setCurrency:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHistoryRecords:(id)arg1;
- (void)setInStation:(bool)arg1;
- (void)setInStationDetails:(id)arg1;
- (void)setLoyaltyBalance:(id)arg1;
- (void)setServiceProvider:(id)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

@end
