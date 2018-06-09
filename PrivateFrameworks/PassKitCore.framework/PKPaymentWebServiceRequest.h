/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceRequest : PKOverlayableWebServiceRequest {
    <PKPaymentWebServiceTargetDeviceProtocol> * _targetDevice;
}

@property (nonatomic, retain) <PKPaymentWebServiceTargetDeviceProtocol> *targetDevice;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 account:(id)arg4;
- (id)_murlRequestWithServiceURL:(id)arg1 version:(id)arg2 endpointComponents:(id)arg3 queryParameters:(id)arg4 account:(id)arg5;
- (id)_murlRequestWithURL:(id)arg1;
- (void)_signRequest:(id)arg1 webService:(id)arg2 completion:(id /* block */)arg3;
- (void)setTargetDevice:(id)arg1;
- (id)targetDevice;

@end
