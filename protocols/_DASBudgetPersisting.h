/* made by EzioChiu.
 */

@protocol _DASBudgetPersisting <NSObject>

@required

- (NSDate *)lastModulationDate;
- (NSArray *)loadBudgets;
- (void)saveBudgets:(NSArray *)arg1;
- (void)saveModulationDate:(NSDate *)arg1;
- (void)updateBudget:(_DASBudget *)arg1;

@end
