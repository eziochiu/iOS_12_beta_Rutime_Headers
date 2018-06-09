/* made by EzioChiu.
 */

@protocol PXPeopleSectionedDataSourceChangeObserver <NSObject>

@required

- (void)peopleSectionedDataSource:(PXPeopleSectionedDataSource *)arg1 didApplyIncrementalChanges:(NSArray *)arg2;
- (void)peopleSectionedDataSourceMembersChanged:(PXPeopleSectionedDataSource *)arg1;

@end
