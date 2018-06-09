/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransitPassProperties : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appletFormat;
    PKCurrencyAmount * _balance;
    bool  _blacklisted;
    NSDate * _expirationDate;
    bool  _inStation;
}

@property (nonatomic, copy) NSString *appletFormat;
@property (nonatomic, copy) PKCurrencyAmount *balance;
@property (getter=isBlacklisted, nonatomic) bool blacklisted;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSDecimalNumber *decimalTransitBalance;
@property (nonatomic, readonly) NSString *displayableTransitBalance;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) PKFelicaPassProperties *felicaProperties;
@property (getter=isInStation, nonatomic) bool inStation;
@property (nonatomic, readonly, copy) NSDecimalNumber *transitBalance;
@property (nonatomic, readonly, copy) NSString *transitBalanceCurrencyCode;

+ (id)passPropertiesForPass:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appletFormat;
- (id)balance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)decimalTransitBalance;
- (id)displayableTransitBalance;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)felicaProperties;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2;
- (bool)isBlacklisted;
- (bool)isInStation;
- (void)setAppletFormat:(id)arg1;
- (void)setBalance:(id)arg1;
- (void)setBlacklisted:(bool)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setInStation:(bool)arg1;
- (id)transitBalance;
- (id)transitBalanceCurrencyCode;

@end
