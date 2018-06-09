/* made by EzioChiu.
 */

@protocol PKPassbookSettingsDataSource <NSObject>

@required

- (bool)canRegisterForPeerPayment;
- (bool)deviceInRestrictedMode;
- (bool)deviceSupportsInAppPayments;
- (<PKPaymentOptionsProtocol> *)optionsDelegate;
- (<PKPassLibraryDataProvider> *)passLibraryDataProvider;
- (<PKPaymentDataProvider> *)paymentDataProvider;
- (<PKPassbookPeerPaymentSettingsDataSource> *)peerPaymentDataSource;
- (<PKPassbookPeerPaymentSettingsDelegate> *)peerPaymentDelegate;
- (NSString *)secureElementID;
- (bool)secureElementIsProductionSigned;
- (<PKPaymentSetupDelegate> *)setupDelegate;

@optional

- (NSString *)deviceName;
- (bool)hasFelicaSecureElement;
- (NSArray *)setupBrowsableProductTypesForDevice;
- (NSArray *)setupFeaturedNetworksForDevice;
- (bool)supportsCredentialType:(long long)arg1;

@end
