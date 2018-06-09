/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXConnectionsMetricsTracker : NSObject {
    PETGoalConversionEventTracker * _conversionTracker;
    PETScalarEventTracker * _dismissalTracker;
    PETScalarEventTracker * _donationTracker;
    PETScalarEventTracker * _opportunityTracker;
    PETScalarEventTracker * _pasteboardTracker;
    NSObject<OS_dispatch_queue> * _queue;
    PETDistributionEventTracker * _timingTracker;
}

@property (nonatomic, retain) PETGoalConversionEventTracker *conversionTracker;
@property (nonatomic, retain) PETScalarEventTracker *dismissalTracker;
@property (nonatomic, retain) PETScalarEventTracker *donationTracker;
@property (nonatomic, retain) PETScalarEventTracker *opportunityTracker;
@property (nonatomic, retain) PETScalarEventTracker *pasteboardTracker;
@property (nonatomic, retain) PETDistributionEventTracker *timingTracker;

+ (id)consumerStringForConsumerType:(unsigned long long)arg1;
+ (id)donationSourceFromBundleID:(id)arg1;
+ (unsigned char)itemSourceForConnectionsSource:(id)arg1;
+ (id)sharedInstance;
+ (id)triggerFromCriteria:(id)arg1;

- (void).cxx_destruct;
- (id)conversionTracker;
- (id)dismissalTracker;
- (id)donationTracker;
- (id)init;
- (id)opportunityTracker;
- (id)pasteboardTracker;
- (id)privacyFriendlyBundleIdentifierWith:(id)arg1;
- (void)setConversionTracker:(id)arg1;
- (void)setDismissalTracker:(id)arg1;
- (void)setDonationTracker:(id)arg1;
- (void)setOpportunityTracker:(id)arg1;
- (void)setPasteboardTracker:(id)arg1;
- (void)setTimingTracker:(id)arg1;
- (id)timingTracker;
- (void)trackConversionGoalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5 converted:(bool)arg6;
- (void)trackDismissalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5;
- (void)trackDonationFromBundleId:(id)arg1 source:(id)arg2 hasLatLon:(bool)arg3 isEligible:(bool)arg4;
- (void)trackOpportunityForConsumer:(id)arg1 trigger:(id)arg2 targetApp:(id)arg3;
- (void)trackPasteboardItemFromBundleId:(id)arg1 hasAddress:(bool)arg2 isEligible:(bool)arg3;
- (void)trackTimingForConsumer:(id)arg1 time:(unsigned long long)arg2;

@end
