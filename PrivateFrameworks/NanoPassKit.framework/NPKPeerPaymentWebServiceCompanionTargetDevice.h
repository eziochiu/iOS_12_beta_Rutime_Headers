/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {
    NPSDomainAccessor * _globalDomainAccessor;
    NPSManager * _preferencesSyncManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NPSDomainAccessor *globalDomainAccessor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPSManager *preferencesSyncManager;
@property (readonly) Class superclass;

+ (void)attemptToDownloadPeerPaymentPassAtURL:(id)arg1 withWebService:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_handleAccountChanged:(id)arg1;
- (id)account;
- (id)bridgedClientInfo;
- (void)checkTLKsMissingWithCompletion:(id /* block */)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)deviceRegion;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)globalDomainAccessor;
- (id)init;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(id /* block */)arg1;
- (void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(id /* block */)arg3;
- (id)preferencesSyncManager;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)arg1;
- (id)secureElementIdentifiers;
- (void)setGlobalDomainAccessor:(id)arg1;
- (void)setPreferencesSyncManager:(id)arg1;
- (void)setUserHasDisabledPeerPayment:(bool)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (bool)userHasDisabledPeerPayment;

@end
