/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportAddToAlbumsPickerViewController : UITableViewController <PUAlbumCreatorDelegate, PXCollectionsDataSourceManagerObserver> {
    PHCollection * _createdAlbum;
    PXPhotoKitCollectionsDataSource * _dataSource;
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    PXPhotoKitCollectionsDataSourceManagerConfiguration * _dataSourceManagerConfiguration;
    <PUImportAlbumPickerDelegate> * _delegate;
    bool  _needsDatasourceUpdate;
    PUImportAddToAlbumsPickerCell * _selectedCell;
    PHCollection * _selectedCollection;
    NSIndexPath * _selectedIndex;
}

@property (nonatomic, retain) PXPhotoKitCollectionsDataSource *dataSource;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUImportAlbumPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)cellTypeForPosition:(id)arg1;
+ (long long)dataSourceOffset;
+ (id)dataSourceShiftedIndexPath:(id)arg1;
+ (id)userCreatredAlbumsPhotoKitConfiguration;

- (void).cxx_destruct;
- (void)_dismissPicker;
- (void)_handleCreateAlbum;
- (double)_heightForIndex:(id)arg1;
- (void)_selectCell:(id)arg1;
- (id)addAlbumPlaceHolder:(struct CGSize { double x1; double x2; })arg1 newAlbum:(bool)arg2;
- (id)albumListViewControllerSpec;
- (bool)canPresentPicker;
- (id /* block */)completionHandler;
- (void)configureDataSourceManagerConfiguration:(id)arg1;
- (id)createAlbumListViewController;
- (id)dataSource;
- (id)dataSourceManager;
- (id)dataSourceManagerConfiguration;
- (id)delegate;
- (id)hostViewContoller;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)posterImageForCollection:(id)arg1 cell:(id)arg2 forCellType:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)selectCollection:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)setDataSourceManagerConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateDatasource;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
