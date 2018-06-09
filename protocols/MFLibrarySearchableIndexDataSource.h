/* made by EzioChiu.
 */

@protocol MFLibrarySearchableIndexDataSource <NSObject>

@required

- (NSArray *)searchableIndex:(MFLibrarySearchableIndex *)arg1 assignTransaction:(long long)arg2 updates:(MFLibrarySearchableIndexUpdates *)arg3;
- (void)searchableIndex:(MFLibrarySearchableIndex *)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
- (MFLibrarySearchableIndexUpdates *)updatesForSearchableIndex:(MFLibrarySearchableIndex *)arg1 count:(unsigned long long)arg2;
- (NSDictionary *)verificationDataSamplesForSearchableIndex:(MFLibrarySearchableIndex *)arg1;

@end
