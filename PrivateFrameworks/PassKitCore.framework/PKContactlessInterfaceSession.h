/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContactlessInterfaceSession : PKPaymentSession <NFLoyaltyAndPaymentSessionDelegate> {
    NSArray * _activatedHostCards;
    PKPaymentApplication * _activatedPaymentApplication;
    PKPaymentPass * _activatedPaymentPass;
    NSArray * _activatedValueAddedServicePasses;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned char  _cardEmulationMode;
    <PKContactlessInterfaceSessionDelegate> * _delegate;
    unsigned long long  _expressActivity;
    bool  _felicaStateChanged;
    bool  _fieldPresent;
    PKFieldProperties * _fieldProperties;
    PKFieldProperties * _fieldPropertiesToLookup;
    bool  _handlingExpress;
    bool  _persistentCardEmulation;
    bool  _prioritySessionExists;
    unsigned long long  _state;
    unsigned long long  _transactionStartTime;
    NSArray * _valueAddedServiceTransactions;
}

@property (nonatomic, readonly) PKPaymentApplication *activatedPaymentApplication;
@property (nonatomic, readonly) PKPaymentPass *activatedPaymentPass;
@property (nonatomic, readonly) NSArray *activatedValueAddedServicePasses;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKContactlessInterfaceSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool fieldPresent;
@property (nonatomic, readonly) PKFieldProperties *fieldProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool persistentCardEmulationQueued;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKTransitAppletHistory *transitAppletState;

+ (id)transitAppletStateFromPaymentSession:(id)arg1 withPaymentApplication:(id)arg2;

- (void).cxx_destruct;
- (id)_appletForPaymentApplication:(id)arg1;
- (id)_appletWithIdentifier:(id)arg1;
- (void)_endFieldPropertiesLookup;
- (void)_endLookupAndNotifyForFieldProperties:(id)arg1;
- (id)_filteredLoyaltyPassesFromVASTransactions:(id)arg1 activatedPasses:(id)arg2;
- (void)_processEndEvent:(id)arg1 withPartialContext:(id)arg2 groupHeadIdentifier:(id)arg3 groupAppletIdentifiers:(id)arg4;
- (void)_sendPersistentCardEmulationForPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (void)_startLookupForFieldProperties:(id)arg1;
- (bool)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2;
- (bool)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 markAsDefault:(bool)arg3;
- (bool)activateValueAddedServicePassWhitelist:(id)arg1 greylist:(id)arg2;
- (bool)activateValueAddedServicePasses:(id)arg1;
- (id)activatedPaymentApplication;
- (id)activatedPaymentPass;
- (id)activatedValueAddedServicePasses;
- (bool)authorizeAndStartCardEmulationWithCredential:(id)arg1;
- (bool)authorizeAndStartCardEmulationWithCredential:(id)arg1 deferAuthorization:(bool)arg2;
- (id)delegate;
- (bool)fieldPresent;
- (id)fieldProperties;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (void)invalidateSessionWithCompletion:(id /* block */)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didExpressModeStateChange:(unsigned int)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didFailDeferredAuthorization:(bool)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didFelicaStateChange:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(bool)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
- (void)loyaltyAndPaymentSessionDidExitField:(id)arg1;
- (void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1;
- (void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg1;
- (bool)paymentApplicationSupportsAutomaticAuthorization:(id)arg1;
- (bool)persistentCardEmulationQueued;
- (bool)queuePersistentCardEmulation;
- (void)resetExpressState;
- (bool)resetPersistentCardEmulation;
- (void)setDelegate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (bool)stopCardEmulation;
- (id)transitAppletState;

@end
