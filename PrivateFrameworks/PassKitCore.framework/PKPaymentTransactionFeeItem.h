/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionFeeItem : NSObject <NSSecureCoding> {
    PKCurrencyAmount * _currencyAmount;
    NSString * _identifier;
    NSString * _localizedDisplayName;
    unsigned long long  _type;
}

@property (nonatomic, copy) PKCurrencyAmount *currencyAmount;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedDisplayName;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initWithFeeDictionary:(id)arg1;
- (id)currencyAmount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeeDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFeeItem:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)localizedDisplayName;
- (void)setCurrencyAmount:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
