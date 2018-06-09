/* made by EzioChiu.
 */

@protocol CPListDataSource <NSObject>

@required

- (CPListItem *)itemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)items;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;

@end
