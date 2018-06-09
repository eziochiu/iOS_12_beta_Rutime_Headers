/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDevicePassesRequest : PKPaymentWebServiceRequest {
    NSString * _updatedSince;
}

@property (nonatomic, copy) NSString *updatedSince;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (void)setUpdatedSince:(id)arg1;
- (id)updatedSince;

@end
