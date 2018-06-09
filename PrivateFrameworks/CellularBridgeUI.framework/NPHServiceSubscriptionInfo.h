/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

@interface NPHServiceSubscriptionInfo : NSObject {
    NSString * _SIMStatus;
    NSError * _persistentError;
    unsigned long long  _planFlows;
    CTXPCServiceSubscriptionContext * _serviceSubscriptionContext;
    bool  _shouldOfferRemotePlan;
    bool  _shouldOfferSignupCompletion;
    bool  _shouldOfferTrialPlan;
    bool  _shouldShowAddNewRemotePlan;
    NSString * _trialPlanType;
}

@property (nonatomic, retain) NSString *SIMStatus;
@property (nonatomic, retain) NSError *persistentError;
@property (nonatomic) unsigned long long planFlows;
@property (nonatomic, retain) CTXPCServiceSubscriptionContext *serviceSubscriptionContext;
@property (nonatomic) bool shouldOfferRemotePlan;
@property (nonatomic) bool shouldOfferSignupCompletion;
@property (nonatomic) bool shouldOfferTrialPlan;
@property (nonatomic) bool shouldShowAddNewRemotePlan;
@property (nonatomic, retain) NSString *trialPlanType;

- (void).cxx_destruct;
- (id)SIMStatus;
- (id)persistentError;
- (unsigned long long)planFlows;
- (id)serviceSubscriptionContext;
- (void)setPersistentError:(id)arg1;
- (void)setPlanFlows:(unsigned long long)arg1;
- (void)setSIMStatus:(id)arg1;
- (void)setServiceSubscriptionContext:(id)arg1;
- (void)setShouldOfferRemotePlan:(bool)arg1;
- (void)setShouldOfferSignupCompletion:(bool)arg1;
- (void)setShouldOfferTrialPlan:(bool)arg1;
- (void)setShouldShowAddNewRemotePlan:(bool)arg1;
- (void)setTrialPlanType:(id)arg1;
- (bool)shouldOfferRemotePlan;
- (bool)shouldOfferSignupCompletion;
- (bool)shouldOfferTrialPlan;
- (bool)shouldShowAddNewRemotePlan;
- (id)trialPlanType;

@end
