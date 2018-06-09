/* made by EzioChiu.
 */

@protocol MFSearchableIndexSchedulable <NSObject>

@required

- (NSString *)indexName;
- (bool)isDataSourceIndexingPermitted;
- (unsigned long long)pendingIndexItemsCount;
- (void)setDataSourceIndexingPermitted:(bool)arg1;

@end
