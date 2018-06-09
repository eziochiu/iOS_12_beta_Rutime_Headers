/* made by EzioChiu.
 */

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <NSObject>

@required

- (PKPeerPaymentAccount *)account;
- (NSString *)bridgedClientInfo;
- (void)cloudStoreStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKAccountInfo *, bool, NSError *, void*
- (void)downloadPassIfNecessaryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)provisionPeerPaymentPassWithProvisioningController:(void *)arg1 credential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKPaymentProvisioningController *, PKPeerPaymentCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSArray *)secureElementIdentifiers;
- (void)setUserHasDisabledPeerPayment:(bool)arg1;
- (void)updateAccountWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPeerPaymentAccount *, void*
- (bool)userHasDisabledPeerPayment;

@optional

- (void)checkTLKsMissingWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSString *)deviceRegion;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)initalizeCloudStoreIfNecessaryWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)peerPaymentReRegisterWithURL:(void *)arg1 pushToken:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetApplePayManateeViewWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
