/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoPickerCollectionViewController : CKViewController <CKPhotoPickerCellDelegate, CKPhotoPickerCollectionViewLayoutDelegate, CKPhotoPickerItemForSendingDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    PHFetchResult * _assets;
    UICollectionView * _collectionView;
    CKPhotoPickerCollectionViewLayout * _collectionViewLayout;
    bool  _defaultStateSelected;
    <CKPhotoPickerCollectionViewDelegate> * _delegate;
    PHCachingImageManager * _imageManager;
    NSMutableSet * _irisAssetsToSend;
    long long  _maxAssetsToDisplay;
    NSMutableDictionary * _selectedFullAssets;
    bool  _zoomed;
}

@property (nonatomic, retain) PHFetchResult *assets;
@property (nonatomic, readonly) NSArray *assetsToSend;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) CKPhotoPickerCollectionViewLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defaultStateSelected;
@property (nonatomic) <CKPhotoPickerCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHCachingImageManager *imageManager;
@property (nonatomic, retain) NSMutableSet *irisAssetsToSend;
@property (nonatomic) long long maxAssetsToDisplay;
@property (nonatomic, retain) NSMutableDictionary *selectedFullAssets;
@property (readonly) Class superclass;
@property (getter=isZoomed, nonatomic) bool zoomed;

- (void).cxx_destruct;
- (id)_appendedVideoURL:(id)arg1;
- (id)_assetForIndexPath:(id)arg1 collectionView:(id)arg2;
- (id)_imageRequestOptions;
- (void)_loadIrisPlayerItem:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 cell:(id)arg3;
- (void)_populatePreviewForSendingItem:(id)arg1 withAsset:(id)arg2;
- (struct CGSize { double x1; double x2; })_targetSizeForAsset:(id)arg1;
- (id)assets;
- (id)assetsToSend;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewLayout;
- (void)dealloc;
- (bool)defaultStateSelected;
- (id)delegate;
- (id)imageManager;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)irisAssetsToSend;
- (bool)isZoomed;
- (void)item:(id)arg1 encounteredError:(id)arg2 forAsset:(id)arg3;
- (void)item:(id)arg1 requiresCloudDownloadForAsset:(id)arg2;
- (void)layout:(id)arg1 collectionView:(id)arg2 didUpdateVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 indexPath:(id)arg4;
- (void)loadView;
- (long long)maxAssetsToDisplay;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)photoPickerCellBadgeStateDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedFullAssets;
- (void)setAssets:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setDefaultStateSelected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageManager:(id)arg1;
- (void)setIrisAssetsToSend:(id)arg1;
- (void)setMaxAssetsToDisplay:(long long)arg1;
- (void)setSelectedFullAssets:(id)arg1;
- (void)setZoomed:(bool)arg1;
- (void)updatePreferredContentSize;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
