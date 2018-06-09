/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding> {
    NSString * _currencyCode;
    long long  _exponent;
    NSString * _identifier;
    bool  _isPrimary;
    NSDate * _lastUpdateDate;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSDecimalNumber * _value;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, readonly) PKCurrencyAmount *currencyValue;
@property (nonatomic) long long exponent;
@property (nonatomic, readonly) NSString *formattedValue;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isCurrency;
@property (nonatomic) bool isPrimary;
@property (nonatomic, copy) NSDate *lastUpdateDate;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSDecimalNumber *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setValueWithRounding:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)currencyValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)exponent;
- (id)formattedValue;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forCurrencyAmount:(id)arg2;
- (id)initWithIdentifier:(id)arg1 forValue:(id)arg2 roundingToExponent:(long long)arg3;
- (bool)isCurrency;
- (bool)isEqual:(id)arg1;
- (bool)isPrimary;
- (id)lastUpdateDate;
- (id)localizedDescription;
- (id)localizedTitle;
- (void)setCurrencyCode:(id)arg1;
- (void)setExponent:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsPrimary:(bool)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
