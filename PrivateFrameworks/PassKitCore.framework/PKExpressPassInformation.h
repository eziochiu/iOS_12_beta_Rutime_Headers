/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKExpressPassInformation : NSObject <NSSecureCoding> {
    long long  _cardType;
    NSDictionary * _configuration;
    NSString * _expressMode;
    long long  _expressPassType;
    bool  _forceModernEncoding;
    NSString * _passUniqueIdentifier;
    NSString * _paymentApplicationIdentifier;
}

@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly) NSString *expressMode;
@property (nonatomic, readonly) long long expressPassType;
@property (nonatomic) bool forceModernEncoding;
@property (nonatomic, readonly) NSString *passUniqueIdentifier;
@property (nonatomic, readonly) NSString *paymentApplicationIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_createLegacyPropertiesIfNecessary;
- (void)_createModernPropertiesIfNecessary;
- (long long)cardType;
- (id)criteriaForPaymentApplicationIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateCriteriaWithHandler:(id /* block */)arg1;
- (id)expressMode;
- (long long)expressPassType;
- (bool)forceModernEncoding;
- (unsigned long long)hash;
- (id)init;
- (id)initForExpressMode:(id)arg1 withPassUniqueIdentifier:(id)arg2 paymentApplicationIdentifier:(id)arg3;
- (id)initForPaymentPass:(id)arg1 withTechologyTest:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)passUniqueIdentifier;
- (id)paymentApplicationIdentifier;
- (id)paymentApplicationIdentifiers;
- (void)setForceModernEncoding:(bool)arg1;

@end
