/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentToken : NSObject <NSSecureCoding> {
    NSData * _paymentData;
    NSString * _paymentInstrumentName;
    PKPaymentMethod * _paymentMethod;
    NSString * _paymentNetwork;
    NSURL * _redeemURL;
    NSString * _retryNonce;
    NSString * _transactionIdentifier;
}

@property (nonatomic, copy) NSData *paymentData;
@property (nonatomic, copy) NSString *paymentInstrumentName;
@property (nonatomic, retain) PKPaymentMethod *paymentMethod;
@property (nonatomic, copy) NSString *paymentNetwork;
@property (nonatomic, retain) NSURL *redeemURL;
@property (nonatomic, copy) NSString *retryNonce;
@property (nonatomic, copy) NSString *transactionIdentifier;

+ (id)paymentTokenWithProtobuf:(id)arg1;
+ (id)simulatedTokenForNetwork:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)paymentData;
- (id)paymentInstrumentName;
- (id)paymentMethod;
- (id)paymentNetwork;
- (id)protobuf;
- (id)redeemURL;
- (id)retryNonce;
- (void)setPaymentData:(id)arg1;
- (void)setPaymentInstrumentName:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setRedeemURL:(id)arg1;
- (void)setRetryNonce:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (id)transactionIdentifier;

@end
