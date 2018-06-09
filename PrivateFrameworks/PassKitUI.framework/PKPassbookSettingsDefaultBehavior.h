/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource> {
    PKPaymentOptionsDefaults * _options;
    PKPassLibraryDefaultDataProvider * _passLibraryDataProvider;
    PKPaymentDefaultDataProvider * _paymentDataProvider;
    PKPassbookPeerPaymentSettingsDefaultBehavior * _peerPaymentDefaultBehavior;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canRegisterForPeerPayment;
- (void)dealloc;
- (bool)deviceInRestrictedMode;
- (id)deviceName;
- (bool)deviceSupportsInAppPayments;
- (bool)hasFelicaSecureElement;
- (id)init;
- (id)optionsDelegate;
- (id)passLibraryDataProvider;
- (id)paymentDataProvider;
- (id)peerPaymentDataSource;
- (id)peerPaymentDelegate;
- (id)secureElementID;
- (bool)secureElementIsProductionSigned;
- (id)setupBrowsableProductTypesForDevice;
- (id)setupDelegate;
- (id)setupFeaturedNetworksForDevice;
- (bool)supportsCredentialType:(long long)arg1;

@end
