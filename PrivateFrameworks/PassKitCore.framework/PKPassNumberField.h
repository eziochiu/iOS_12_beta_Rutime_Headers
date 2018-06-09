/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassNumberField : PKPassField {
    NSString * _currencyCode;
    long long  _numberStyle;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) long long numberStyle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currencyCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)numberStyle;
- (void)setCurrencyCode:(id)arg1;
- (void)setNumberStyle:(long long)arg1;
- (id)value;

@end