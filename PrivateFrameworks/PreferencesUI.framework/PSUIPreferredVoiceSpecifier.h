/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPreferredVoiceSpecifier : PSSpecifier {
    NSArray * _cachedPlanItems;
    NSArray * _cachedSubscriptionContexts;
    CTCellularPlanManager * _planManager;
    PSUICellularPlanManagerCache * _planManagerCache;
    PSSimStatusCache * _simStatusCache;
}

@property (nonatomic, retain) NSArray *cachedPlanItems;
@property (nonatomic, retain) NSArray *cachedSubscriptionContexts;
@property (nonatomic, readonly) bool isSubcontrollerNeeded;
@property (nonatomic, retain) CTCellularPlanManager *planManager;
@property (nonatomic, retain) PSUICellularPlanManagerCache *planManagerCache;
@property (nonatomic, retain) PSSimStatusCache *simStatusCache;

- (void).cxx_destruct;
- (id)cachedPlanItems;
- (id)cachedSubscriptionContexts;
- (id)initSpecifier;
- (id)initWithPlanManagerCache:(id)arg1 planManager:(id)arg2 simStatusCache:(id)arg3;
- (bool)isSubcontrollerNeeded;
- (id)planItemForListItem:(id)arg1;
- (id)planManager;
- (id)planManagerCache;
- (id)preferredVoiceLine:(id)arg1;
- (void)setCachedPlanItems:(id)arg1;
- (void)setCachedSubscriptionContexts:(id)arg1;
- (void)setPlanManager:(id)arg1;
- (void)setPlanManagerCache:(id)arg1;
- (void)setPreferredVoiceLine:(id)arg1 specifier:(id)arg2;
- (void)setSimStatusCache:(id)arg1;
- (id)simStatusCache;
- (void)updateCachedState;

@end
