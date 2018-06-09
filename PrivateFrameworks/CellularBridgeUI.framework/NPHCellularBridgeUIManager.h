/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

@interface NPHCellularBridgeUIManager : NSObject {
    bool  LTEMayImpactService;
    CoreTelephonyClient * _coreTelephonyClient;
    id /* block */  _hostCompletionBlock;
    UIViewController * _hostViewController;
    long long  _outstandingPlanFlowsIdentified;
    NSMutableSet * _outstandingRemotePlanItemsRequestedForCSN;
    NSArray * _proxyPlanItems;
    CTXPCServiceSubscriptionInfo * _serviceSubscriptionInfo;
    NSMutableArray * _serviceSubscriptionInfoList;
    bool  _shouldOfferSignupCompletion;
    NSString * _trialPlanType;
}

@property (nonatomic, readonly) bool LTEMayImpactService;
@property (nonatomic, readonly) bool cellularPlanIsSetUp;
@property (nonatomic, readonly) NSArray *serviceSubscriptionsInUse;
@property (nonatomic, readonly) NSArray *serviceSubscriptionsOfferingRemotePlan;
@property (nonatomic, readonly) NSArray *serviceSubscriptionsOfferingTrialPlan;
@property (nonatomic, readonly) NSArray *serviceSubscriptionsShouldShowAddNewRemotePlan;
@property (nonatomic, readonly) NSArray *serviceSubscriptionsToOfferUser;
@property (nonatomic, readonly) bool shouldOfferRemotePlan;
@property (nonatomic, readonly) bool shouldOfferSignupCompletion;
@property (nonatomic, readonly) bool shouldOfferTrialPlan;
@property (nonatomic, readonly) bool shouldShowAddNewRemotePlan;
@property (nonatomic, readonly) NSString *trialPlanType;

+ (void)_presentAirplaneModeOnAlertOnViewController:(id)arg1;
+ (void)_presentCellularRequiredModeAlertOnViewController:(id)arg1;
+ (void)_presentErrorTitle:(id)arg1 onViewController:(id)arg2 withActionTitle:(id)arg3 actionHandler:(id /* block */)arg4;
+ (void)_presentErrorTitled:(id)arg1 withMessage:(id)arg2 onViewController:(id)arg3;
+ (id)carrierName;
+ (id)carrierPhoneNumber;
+ (id)displayNameForCellularPlan:(id)arg1;
+ (void)presentCellularError:(id)arg1 onViewController:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)LTEMayImpactService;
- (id)_activeDeviceCSNList;
- (void)_ctCellularPlanInfoDidChange:(id)arg1;
- (void)_ctCellularRemoteProvisioningDidBecomeAvailable:(id)arg1;
- (id)_currentDeviceCSN;
- (bool)_isCarrierSetupFlowUnsupportedForServiceSubscription:(id)arg1;
- (bool)_isPersistentError:(id)arg1;
- (bool)_isSetupBlockingError:(id)arg1;
- (void)_prePromptForUserConsentIfNecessary:(id /* block */)arg1;
- (void)_prePromptUserForConsentTextType:(long long)arg1 relevantPlanItem:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)_serviceSubscriptionInfoForSubscriptionContext:(id)arg1;
- (void)_setUpCellularPlanDirectWithContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_setUpCellularPlanWithActivationCodeOnViewController:(id)arg1 withContext:(id)arg2 withCompletion:(id /* block */)arg3 codelessActivationBlock:(id /* block */)arg4;
- (void)_updateCellularPlansWithFetch:(bool)arg1 forCSN:(id)arg2;
- (void)_updateCoreTelephonyClientInfo;
- (void)_updateIsRemotePlanCapable;
- (void)_updateSIMStatusForAllSubscriptionContexts;
- (void)_updateSIMStatusForSubscriptionContext:(id)arg1 withStatus:(id)arg2;
- (void)_updateServiceSubscriptionInfo:(id)arg1;
- (void)_updateShouldShowAddNewRemotePlan;
- (void)_updateShouldWarnAboutLTEMayImpactService;
- (bool)allCompanionSIMsMissing;
- (bool)cellularPlanIsSetUp;
- (id)cellularPlans;
- (id)cellularUseError;
- (id)cellularUseErrors;
- (long long)consentRequiredRelevantCellularPlanItem:(id*)arg1;
- (void)finishRemoteProvisioning;
- (id)init;
- (bool)isCarrierSetupFlowUnsupported;
- (id)selectedCellularPlan;
- (id)serviceSubscriptionsInUse;
- (id)serviceSubscriptionsOfferingRemotePlan;
- (id)serviceSubscriptionsOfferingTrialPlan;
- (id)serviceSubscriptionsShouldShowAddNewRemotePlan;
- (id)serviceSubscriptionsToOfferUser;
- (void)setUpCellularPlanOnViewController:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setUpCellularPlanOnViewController:(id)arg1 withContext:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)shouldAllowUserToAddOrSetUpPlan;
- (bool)shouldOfferRemotePlan;
- (bool)shouldOfferSignupCompletion;
- (bool)shouldOfferTrialPlan;
- (bool)shouldShowAddNewRemotePlan;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)startRemoteProvisioning;
- (id)trialPlanType;
- (void)updateCellularPlansWithFetch:(bool)arg1;
- (id)userConsentMessageForConsentType:(long long)arg1 relevantPlanItem:(id)arg2;

@end
