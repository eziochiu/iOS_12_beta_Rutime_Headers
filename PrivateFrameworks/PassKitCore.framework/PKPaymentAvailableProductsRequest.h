/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest {
    NSString * _type;
}

@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (id)initWithType:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
