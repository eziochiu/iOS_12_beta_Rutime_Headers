/* made by EzioChiu.
 */

@protocol PXInboxModelDataSourceManagerBase <NSObject>

@required

- (PXSectionedDataSource<PXInboxModelDataSourceBase> *)dataSource;
- (<PXInboxProviderSource> *)providerSource;

@end
