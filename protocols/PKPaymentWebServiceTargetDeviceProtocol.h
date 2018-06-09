/* made by EzioChiu.
 */

@protocol PKPaymentWebServiceTargetDeviceProtocol <NSObject>

@required

- (NSString *)bridgedClientInfo;
- (bool)claimSecureElementForCurrentUser;
- (NSString *)deviceDescriptionForPaymentWebService:(PKPaymentWebService *)arg1;
- (NSString *)deviceName;
- (NSString *)deviceRegion;
- (void)downloadAllPaymentPassesForPaymentWebService:(PKPaymentWebService *)arg1;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (int)paymentSupportedInCurrentRegionForWebService:(PKPaymentWebService *)arg1;
- (void)paymentWebService:(void *)arg1 addPaymentPass:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: PKPaymentWebService *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)paymentWebService:(PKPaymentWebService *)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(NSString *)arg2;
- (void)paymentWebService:(void *)arg1 configurationDataWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceConfigurationData *, NSError *, void*
- (void)paymentWebService:(PKPaymentWebService *)arg1 deleteApplicationWithAID:(NSString *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didRegisterWithRegionMap:(NSDictionary *)arg2 primaryRegionTopic:(NSString *)arg3;
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 filterVerificationChannels:(NSArray *)arg2;
- (bool)paymentWebService:(PKPaymentWebService *)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(void *)arg1 provisioningDataWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceProvisioningData *, NSError *, void*
- (void)paymentWebService:(void *)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: PKPaymentWebService *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)paymentWebService:(void *)arg1 registrationDataWithAuthToken:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: PKPaymentWebService *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceRegistrationData *, NSError *, void*
- (void)paymentWebService:(void *)arg1 setNewAuthRandom:(void *)arg2; // needs 2 arg types, found 7: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)paymentWebService:(void *)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(void *)arg2; // needs 2 arg types, found 9: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSData *, NSData *, void*
- (void)paymentWebService:(void *)arg1 signData:(void *)arg2 signatureEntanglementMode:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 11: PKPaymentWebService *, NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, PKSecureElementSignatureInfo *, NSError *, void*
- (void)paymentWebService:(void *)arg1 validateAddPreconditionsWithCompletion:(void *)arg2; // needs 2 arg types, found 8: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)paymentWebService:(void *)arg1 validateTransferPreconditionsWithCompletion:(void *)arg2; // needs 2 arg types, found 8: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)paymentWebServiceDidUpdateConfiguration:(PKPaymentWebService *)arg1;
- (NSArray *)secureElementIdentifiers;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (bool)supportsAutomaticPassPresentation;

@optional

- (bool)felicaSecureElementIsAvailable;
- (unsigned long long)maximumPaymentCards;
- (void)noteForegroundVerificationObserverActive:(bool)arg1;
- (void)paymentWebService:(void *)arg1 addPaymentPass:(void *)arg2 withCompletionHandlerV2:(void *)arg3; // needs 3 arg types, found 8: PKPaymentWebService *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentPass *, void*
- (void)paymentWebService:(void *)arg1 handlePotentialExpressPass:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentWebService *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 passesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(void *)arg1 removePass:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: PKPaymentWebService *, PKPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)paymentWebServiceSupportsPeerPaymentRegistration:(PKPaymentWebService *)arg1;
- (bool)secureElementIsAvailable;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (void)startBackgroundVerificationObserverForPass:(PKPaymentPass *)arg1 verificationMethod:(PKVerificationChannel *)arg2;
- (bool)supportsCredentialType:(long long)arg1;
- (bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (bool)supportsExpressMode:(NSString *)arg1;
- (bool)supportsExpressModeForExpressPassType:(long long)arg1;
- (PKTrustedDeviceEnrollmentInfo *)trustedDeviceEnrollmentInfoForWebService:(PKPaymentWebService *)arg1;

@end
