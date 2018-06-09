/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSearchableIndexScheduler : NSObject <MFSearchableIndexSchedulableDelegate> {
    NSMutableDictionary * _activities;
    MFSearchableIndexBudgetConfiguration * _budgetConfiguration;
    NSString * _budgetTimeUserDefaultsKey;
    long long  _budgetedItemCountRemaining;
    double  _budgetedTimeRemaining;
    bool  _dataSourceIndexingPermitted;
    NSMutableSet * _indexingEnabledForActivityTypes;
    NSObject<OS_dispatch_queue> * _indexingStateQueue;
    double  _maintenanceIndexingTime;
    double  _noActivityIndexingTime;
    <MFSearchableIndexSchedulable> * _schedulable;
    bool  _scheduling;
}

@property (nonatomic, retain) NSMutableDictionary *activities;
@property (nonatomic, readonly) MFSearchableIndexBudgetConfiguration *budgetConfiguration;
@property (nonatomic, copy) NSString *budgetTimeUserDefaultsKey;
@property long long budgetedItemCountRemaining;
@property double budgetedTimeRemaining;
@property (getter=isDataSourceIndexingPermitted) bool dataSourceIndexingPermitted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *indexingEnabledForActivityTypes;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *indexingStateQueue;
@property double maintenanceIndexingTime;
@property double noActivityIndexingTime;
@property (nonatomic, readonly) <MFSearchableIndexSchedulable> *schedulable;
@property (getter=isScheduling, nonatomic) bool scheduling;
@property (readonly) Class superclass;

+ (id)activityTypes;
+ (id)budgetTimeUserDefaultsKeyForIndexName:(id)arg1;
+ (id)deferrableActivityTypes;
+ (bool)isDeferrableActivityType:(id)arg1;
+ (id)log;

- (void).cxx_destruct;
- (void)_beginIndexingForActivityType:(id)arg1 activity:(id)arg2;
- (double)_budgetTimeFromUserDefaults;
- (void)_deferActivitiesIfNecessary;
- (void)_disableIndexingForActivityType:(id)arg1 defer:(bool)arg2;
- (void)_enableIndexingForActivityType:(id)arg1;
- (bool)_isIndexingEnabledByActivities;
- (bool)_isIndexingEnabledForActivityType:(id)arg1;
- (void)_logIndexingPowerEventWithIdentifier:(id)arg1 additionalEventData:(id)arg2 usePersistentLog:(bool)arg3;
- (void)_setBudgetedTimeRemaining:(double)arg1;
- (void)_setDataSourceIndexingPermitted:(bool)arg1;
- (void)_startScheduling;
- (void)_stopAllIndexing;
- (void)_stopIndexingForActivityType:(id)arg1 shouldDeferIfPossible:(bool)arg2;
- (void)_stopScheduling;
- (id)_xpcActivityIdentifierForActivityType:(id)arg1;
- (id /* block */)_xpcCriteriaBuilderBlockForActivityType:(id)arg1;
- (id)activities;
- (void)beginIndexingForActivityType:(id)arg1 activity:(id)arg2;
- (id)budgetConfiguration;
- (id)budgetTimeUserDefaultsKey;
- (long long)budgetedItemCountRemaining;
- (long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id)arg1;
- (double)budgetedTimeRemaining;
- (double)budgetedTimeRemainingForSearchableIndexSchedulable:(id)arg1;
- (void)dealloc;
- (void)deferIndexingForActivityType:(id)arg1;
- (void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id)arg1;
- (bool)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id)arg1;
- (void)indexingDidResumeForSearchableIndexSchedulable:(id)arg1;
- (id)indexingEnabledForActivityTypes;
- (id)indexingStateQueue;
- (id)initWithSchedulable:(id)arg1 budgetConfiguration:(id)arg2;
- (bool)isDataSourceIndexingPermitted;
- (bool)isIndexingEnabledForActivityType:(id)arg1;
- (bool)isScheduling;
- (double)maintenanceIndexingTime;
- (double)noActivityIndexingTime;
- (id)schedulable;
- (void)searchableIndexSchedulable:(id)arg1 didGenerateImportantPowerEventWithIdentifier:(id)arg2 eventData:(id)arg3;
- (void)searchableIndexSchedulable:(id)arg1 didGeneratePowerEventWithIdentifier:(id)arg2 eventData:(id)arg3;
- (void)searchableIndexSchedulable:(id)arg1 didIndexForTime:(double)arg2;
- (void)searchableIndexSchedulable:(id)arg1 didIndexItemCount:(long long)arg2;
- (void)setActivities:(id)arg1;
- (void)setBudgetTimeUserDefaultsKey:(id)arg1;
- (void)setBudgetedItemCountRemaining:(long long)arg1;
- (void)setBudgetedTimeRemaining:(double)arg1;
- (void)setDataSourceIndexingPermitted:(bool)arg1;
- (void)setIndexingEnabledForActivityTypes:(id)arg1;
- (void)setIndexingStateQueue:(id)arg1;
- (void)setMaintenanceIndexingTime:(double)arg1;
- (void)setNoActivityIndexingTime:(double)arg1;
- (void)setScheduling:(bool)arg1;

@end
