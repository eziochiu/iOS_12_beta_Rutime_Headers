/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKWrappedPayment : NSObject <NSSecureCoding> {
    PKSecureElementCertificateSet * _certificates;
    NSString * _kextBlacklistVersion;
    NSData * _transactionData;
    NSString * _transactionIdentifier;
    NSData * _transactionInstructionsSignature;
}

@property (nonatomic, copy) PKSecureElementCertificateSet *certificates;
@property (nonatomic, copy) NSString *kextBlacklistVersion;
@property (nonatomic, copy) NSData *transactionData;
@property (nonatomic, copy) NSString *transactionIdentifier;
@property (nonatomic, copy) NSData *transactionInstructionsSignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)kextBlacklistVersion;
- (void)setCertificates:(id)arg1;
- (void)setKextBlacklistVersion:(id)arg1;
- (void)setTransactionData:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setTransactionInstructionsSignature:(id)arg1;
- (id)transactionData;
- (id)transactionIdentifier;
- (id)transactionInstructionsSignature;

@end
