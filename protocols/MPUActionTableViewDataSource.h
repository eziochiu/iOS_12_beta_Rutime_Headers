/* made by EzioChiu.
 */

@protocol MPUActionTableViewDataSource <UITableViewDataSource>

@required

+ (NSArray *)actionCellConfigurationClasses;
+ (NSArray *)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;

- (Class)cellConfigurationForIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfActionRowsInTableView:(UITableView *)arg1;
- (long long)numberOfBottomActionRowsInTableView:(UITableView *)arg1;
- (long long)numberOfTopActionRowsInTableView:(UITableView *)arg1;
- (void)reloadActionRowsAnimated:(bool)arg1;
- (bool)shouldShowActionCellConfiguration:(Class)arg1;

@end
