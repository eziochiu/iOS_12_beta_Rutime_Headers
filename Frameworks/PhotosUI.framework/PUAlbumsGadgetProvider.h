/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumsGadgetProvider : PXGadgetProvider <PUAlbumGadgetDelegate, PXCollectionsDataSourceManagerObserver> {
    unsigned long long  _albumListType;
    PUAlbumListCellContentViewHelper * _contentViewHelper;
    unsigned long long  _currentDataSourceIdentifier;
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    PXExtendedTraitCollection * _extendedTraitCollection;
    bool  _hasGeneratedGadgets;
}

@property (nonatomic, readonly) unsigned long long albumListType;
@property (nonatomic, retain) PUAlbumListCellContentViewHelper *contentViewHelper;
@property (nonatomic) unsigned long long currentDataSourceIdentifier;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic) bool hasGeneratedGadgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_albumGadgetClassForCollection:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_newGadgetForCollection:(id)arg1;
- (void)_reconfigureGadgets;
- (void)_updateDataSourceWithChangeDetails:(id)arg1;
- (id)albumListCellContentViewHelperForAlbum:(id)arg1;
- (unsigned long long)albumListType;
- (id)contentViewHelper;
- (unsigned long long)currentDataSourceIdentifier;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)extendedTraitCollection;
- (void)generateGadgets;
- (bool)hasGeneratedGadgets;
- (id)init;
- (id)initWithAlbumListType:(unsigned long long)arg1 dataSourceManager:(id)arg2;
- (void)initiateBackgroundFetchingIfNeeded;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setContentViewHelper:(id)arg1;
- (void)setCurrentDataSourceIdentifier:(unsigned long long)arg1;
- (void)setExtendedTraitCollection:(id)arg1;
- (void)setHasGeneratedGadgets:(bool)arg1;

@end
