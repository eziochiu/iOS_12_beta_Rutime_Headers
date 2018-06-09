/* made by EzioChiu.
 */

@protocol MFSearchableIndexSchedulableDelegate <NSObject>

@required

- (long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id <MFSearchableIndexSchedulable>)arg1;
- (double)budgetedTimeRemainingForSearchableIndexSchedulable:(id <MFSearchableIndexSchedulable>)arg1;
- (void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id <MFSearchableIndexSchedulable>)arg1;
- (bool)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id <MFSearchableIndexSchedulable>)arg1;
- (void)indexingDidResumeForSearchableIndexSchedulable:(id <MFSearchableIndexSchedulable>)arg1;
- (void)searchableIndexSchedulable:(id <MFSearchableIndexSchedulable>)arg1 didGenerateImportantPowerEventWithIdentifier:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)searchableIndexSchedulable:(id <MFSearchableIndexSchedulable>)arg1 didGeneratePowerEventWithIdentifier:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)searchableIndexSchedulable:(id <MFSearchableIndexSchedulable>)arg1 didIndexForTime:(double)arg2;
- (void)searchableIndexSchedulable:(id <MFSearchableIndexSchedulable>)arg1 didIndexItemCount:(long long)arg2;

@end
