/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPaymentAmount : NSObject <NSCopying, NSSecureCoding> {
    INCurrencyAmount * _amount;
    long long  _amountType;
}

@property (nonatomic, readonly, copy) INCurrencyAmount *amount;
@property (nonatomic, readonly) long long amountType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)amount;
- (long long)amountType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAmountType:(long long)arg1 amount:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
