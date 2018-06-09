/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentServiceProviderOrder : PKServiceProviderOrder {
    NSString * _dpanIdentifier;
    NSString * _sourceAccount;
    NSString * _targetAccount;
}

@property (nonatomic, copy) NSString *dpanIdentifier;
@property (nonatomic, copy) NSString *sourceAccount;
@property (nonatomic, copy) NSString *targetAccount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dpanIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)serviceProviderData;
- (void)setDpanIdentifier:(id)arg1;
- (void)setSourceAccount:(id)arg1;
- (void)setTargetAccount:(id)arg1;
- (id)sourceAccount;
- (id)targetAccount;

@end
