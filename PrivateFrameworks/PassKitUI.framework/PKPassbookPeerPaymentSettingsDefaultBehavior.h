/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassbookPeerPaymentSettingsDefaultBehavior : NSObject <PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate> {
    PKPaymentWebService * _paymentWebService;
    PKPeerPaymentWebService * _peerPaymentWebService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerForPeerPaymentWithCompletion:(id /* block */)arg1;
- (void)_unregisterForPeerPaymentWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)peerPaymentRegistrationStatusHasChanged:(bool)arg1 completion:(id /* block */)arg2;
- (id)peerPaymentWebService;

@end
