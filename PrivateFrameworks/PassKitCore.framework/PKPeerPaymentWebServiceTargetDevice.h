/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {
    PKPeerPaymentService * _peerPaymentService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)localTargetDevice;

- (void).cxx_destruct;
- (void)_handleAccountChangedNotification:(id)arg1;
- (id)account;
- (id)bridgedClientInfo;
- (void)checkTLKsMissingWithCompletion:(id /* block */)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)deviceRegion;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* block */)arg1;
- (void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(id /* block */)arg3;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)arg1;
- (id)secureElementIdentifiers;
- (void)setUserHasDisabledPeerPayment:(bool)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (bool)userHasDisabledPeerPayment;

@end
