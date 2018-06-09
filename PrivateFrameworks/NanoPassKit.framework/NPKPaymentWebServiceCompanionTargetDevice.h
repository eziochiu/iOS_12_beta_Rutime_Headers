/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentWebServiceCompanionTargetDevice : NSObject <IDSServiceDelegate, PKPaymentWebServiceArchiver, PKPaymentWebServiceTargetDeviceProtocol> {
    NPKCompanionAgentConnection * _companionAgentConnection;
    unsigned long long  _context;
    <NPKPaymentWebServiceCompanionTargetDeviceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _outstandingRequests;
    NRActiveDeviceAssertion * _provisioningActiveDeviceAssertion;
    IDSService * _provisioningService;
    NSObject<OS_dispatch_queue> * _responseQueue;
}

@property (nonatomic, retain) NPKCompanionAgentConnection *companionAgentConnection;
@property (nonatomic) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKPaymentWebServiceCompanionTargetDeviceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSMutableDictionary *outstandingRequests;
@property (nonatomic, retain) NRActiveDeviceAssertion *provisioningActiveDeviceAssertion;
@property (nonatomic, retain) IDSService *provisioningService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *responseQueue;
@property (readonly) Class superclass;

+ (id)bridgedClientInfoHTTPHeader;

- (void).cxx_destruct;
- (bool)_deviceIsDaytonaOrLater;
- (bool)_deviceIsFortuneOrLater;
- (void)_getPairingInfoAndSetAuthRandomIfNotPaired:(bool)arg1 completion:(id /* block */)arg2;
- (id)_sendProtobuf:(id)arg1 responseExpected:(bool)arg2;
- (id)_sendProtobuf:(id)arg1 responseExpected:(bool)arg2 extraOptions:(id)arg3;
- (id)_serialNumbersOfAllPairedDevices;
- (void)_setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)arg1;
- (void)_setNewAuthRandomReturningPairingState:(id /* block */)arg1;
- (void)_setOrResetCleanupTimerForRequest:(id)arg1;
- (id)_supportedRegionsForWebService:(id)arg1;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (id)bridgedClientInfo;
- (void)cancelOutstandingEnableServiceModeRequests;
- (void)cancelOutstandingSetDefaultExpressPassRequestsWithExpressMode:(id)arg1;
- (void)checkCompanionPeerPaymentRegistrationState:(id)arg1;
- (void)checkTLKsMissingResponse:(id)arg1;
- (void)checkTLKsMissingWithCompletion:(id /* block */)arg1;
- (bool)claimSecureElementForCurrentUser;
- (void)cloudStoreStatusResponse:(id)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (id)companionAgentConnection;
- (void)configurationDataResponse:(id)arg1;
- (unsigned long long)context;
- (id)delegate;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)deviceName;
- (id)deviceRegion;
- (void)didRegisterResponse:(id)arg1;
- (void)downloadAllPaymentPasses:(id)arg1;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (void)dumpLogsResponse:(id)arg1;
- (void)dumpLogsWithCompletion:(id /* block */)arg1;
- (void)enableServiceModeForPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)enableServiceModeResponse:(id)arg1;
- (bool)felicaSecureElementIsAvailable;
- (void)getPairingInfoResponse:(id)arg1;
- (void)handleBalanceChange:(id)arg1;
- (void)handleCompanionMigrationResponse:(id)arg1;
- (void)handleCompanionMigrationWithCompletion:(id /* block */)arg1;
- (void)handleCompanionPeerPaymentRegistration;
- (void)handleDeletePaymentTransactionWithIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2;
- (void)handlePaymentTransactions:(id)arg1;
- (void)handlePendingRemovalOfPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)handleRemovedTransaction:(id)arg1;
- (void)handleShowPaymentSetupRequest:(id)arg1;
- (void)handleTransactionDefaultsNeededRequest:(id)arg1;
- (void)handleUpdatedAppletState:(id)arg1;
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1;
- (void)handleValueAddedServiceTransactions:(id)arg1;
- (void)handleWebServiceContextDidChangeRequest:(id)arg1;
- (void)handleWebServiceContextNeededRequest:(id)arg1;
- (id)init;
- (id)initWithContext:(unsigned long long)arg1 responseQueue:(id)arg2;
- (void)initializeCloudStoreIfNecessaryResponse:(id)arg1;
- (void)initializeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)initializeCloudStoreIfNecessaryWithHandler:(id /* block */)arg1;
- (void)initializeCloudStoreIfNecessaryWithHandlerResponse:(id)arg1;
- (id)internalQueue;
- (void)markAllAppletsForDeletionResponse:(id)arg1;
- (void)markAllAppletsForDeletionWithCompletion:(id /* block */)arg1;
- (unsigned long long)maximumPaymentCards;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (id)outstandingRequests;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(id /* block */)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (bool)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
- (void)peerPaymentRegisterResponse:(id)arg1;
- (void)peerPaymentRegisterWithURL:(id)arg1 forceReRegistration:(bool)arg2 completion:(id /* block */)arg3;
- (void)peerPaymentUnregisterResponse:(id)arg1;
- (void)peerPaymentUnregisterWithCompletion:(id /* block */)arg1;
- (void)pendingRemovalResponse:(id)arg1;
- (void)preconditionNotMet:(id)arg1;
- (void)preferredAIDRequest:(id)arg1;
- (void)preferredAIDResponse:(id)arg1;
- (void)provisionPeerPaymentPassResponse:(id)arg1;
- (void)provisionPeerPaymentPassWithCompletion:(id /* block */)arg1;
- (id)provisioningActiveDeviceAssertion;
- (void)provisioningDataResponse:(id)arg1;
- (id)provisioningService;
- (void)queueTSMConnectionResponse:(id)arg1;
- (void)registrationDataResponse:(id)arg1;
- (void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeExpressPassWithUniqueIdentifierResponse:(id)arg1;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(id /* block */)arg2;
- (void)removeExpressPassesWithCardTypeResponse:(id)arg1;
- (void)resetApplePayManateeViewResponse:(id)arg1;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)arg1;
- (id)responseQueue;
- (void)retrieveTransactionsForPassWithUniqueID:(id)arg1;
- (void)secureElementCardsWithCompletion:(id /* block */)arg1;
- (void)secureElementGetAppletsResponse:(id)arg1;
- (id)secureElementIdentifiers;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (void)secureElementRemoveAppletsResponse:(id)arg1;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)sendWebServiceContextToWatch:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setCompanionAgentConnection:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpressPassResponse:(id)arg1;
- (void)setExpressWithPassInformation:(id)arg1 requestAuthorization:(bool)arg2 completion:(id /* block */)arg3;
- (void)setInternalQueue:(id)arg1;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(id /* block */)arg1;
- (void)setNewAuthRandomResponse:(id)arg1;
- (void)setOutstandingRequests:(id)arg1;
- (void)setProvisioningActiveDeviceAssertion:(id)arg1;
- (void)setProvisioningService:(id)arg1;
- (void)setResponseQueue:(id)arg1;
- (void)signDataResponse:(id)arg1;
- (bool)supportsAutomaticPassPresentation;
- (bool)supportsCredentialType:(long long)arg1;
- (bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;
- (void)updatePaymentPass:(id)arg1;
- (void)updatePushToken:(id)arg1;

@end
