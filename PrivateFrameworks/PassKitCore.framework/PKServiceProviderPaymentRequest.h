/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding> {
    PKServiceProviderOrder * _serviceProviderOrder;
}

@property (nonatomic, readonly) PKServiceProviderOrder *serviceProviderOrder;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceProviderOrder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)merchantIdentifier;
- (id)serviceProviderOrder;

@end
