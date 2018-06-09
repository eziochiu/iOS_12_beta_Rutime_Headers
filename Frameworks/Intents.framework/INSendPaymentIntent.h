/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSendPaymentIntent : INIntent <INSendPaymentIntentExport>

@property (nonatomic, readonly, copy) INCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly, copy) INPerson *payee;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (bool)_isUserConfirmationRequired;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (bool)configureAttributeSet:(id)arg1;
- (id)currencyAmount;
- (id)domain;
- (id)initWithPayee:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3;
- (id)note;
- (id)parametersByName;
- (id)payee;
- (void)setCurrencyAmount:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPayee:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

// Image: /System/Library/CardServices/Plugins/AssistantCardService.bundle/AssistantCardService

- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)apr_getArgsInto:(id)arg1;

@end
