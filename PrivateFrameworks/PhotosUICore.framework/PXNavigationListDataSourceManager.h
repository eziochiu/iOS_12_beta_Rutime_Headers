/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListDataSourceManager : PXSectionedDataSourceManager <PXCollectionsDataSourceManagerObserver, PXNavigationListDataSourceManagerObserver> {
    NSMutableDictionary * _childDataSourceIndexes;
    NSMutableDictionary * _childDataSourceManagers;
    PXPhotoKitCollectionsDataSource * _collectionsDataSource;
    PXPhotoKitCollectionsDataSourceManager * _collectionsDataSourceManager;
    PXNavigationListDataSourceConfiguration * _configuration;
    PXArrayChangeDetails * _latestArrayChangeDetails;
    PXNavigationListDataSource * _latestDataSource;
    NSMapTable * _parentListItems;
}

@property (nonatomic, retain) PXPhotoKitCollectionsDataSource *collectionsDataSource;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *collectionsDataSourceManager;
@property (nonatomic, readonly) PXNavigationListDataSourceConfiguration *configuration;
@property (nonatomic, readonly) PXNavigationListDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXArrayChangeDetails *latestArrayChangeDetails;
@property (nonatomic, retain) PXNavigationListDataSource *latestDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_changeDetailsForItemAtIndex:(long long)arg1 childDataSource:(id)arg2 expanding:(bool)arg3;
- (id)_newCollectionsDataSourceManager;
- (id)_newDataSource;
- (void)_updateDataSourceWithChangeDetailsHint:(id)arg1 changeDetailsByItem:(id)arg2;
- (id)childDataSourceManagerForItem:(id)arg1;
- (void)collapseListItem:(id)arg1 hintIndex:(long long)arg2;
- (id)collectionsDataSource;
- (id)collectionsDataSourceManager;
- (id)configuration;
- (id)createInitialDataSource;
- (id)description;
- (void)expandListItem:(id)arg1 hintIndex:(long long)arg2;
- (id)init;
- (id)initWithCollectionList:(id)arg1 indentationLevel:(long long)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)latestArrayChangeDetails;
- (id)latestDataSource;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)resumeBackgroundFetchingIfNeeded;
- (void)setCollectionsDataSource:(id)arg1;
- (void)setLatestArrayChangeDetails:(id)arg1;
- (void)setLatestDataSource:(id)arg1;

@end
