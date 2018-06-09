/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationRootDataSourceManager : PXSectionedDataSourceManager {
    <PXNavigationRoot> * _navigationRoot;
}

@property (nonatomic, readonly) PXNavigationListDataSource *dataSource;
@property (nonatomic, readonly) <PXNavigationRoot> *navigationRoot;

- (void).cxx_destruct;
- (id)createInitialDataSource;
- (id)initWithNavigationRoot:(id)arg1;
- (id)navigationRoot;

@end
