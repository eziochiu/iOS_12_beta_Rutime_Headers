/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryProductViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIMediaEntitiesFetchControllerDelegate, VUIMediaEntityDownloadViewControllerDelegate, VUIProductLockupViewDelegate, VUIRoundButtonDelegate> {
    VUIMediaEntityDownloadViewController * _downloadViewController;
    VUIMediaEntitiesFetchController * _fetchController;
    VUIMediaItem * _mediaItem;
    VUILibraryProductInfoView * _productInfoView;
    VUIProductLockupView * _productLockupView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIMediaEntityDownloadViewController *downloadViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_productInfoViewWithMediaItem:(id)arg1;
- (id)_productLockupViewWithMediaItem:(id)arg1;
- (id)_productSectionForHeader:(id)arg1 data:(id)arg2 group:(id)arg3 maxItemCount:(unsigned long long)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (void)contentDescriptionExpanded;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)didSelectButton:(id)arg1;
- (id)downloadViewController;
- (void)downloadViewController:(id)arg1 didRemoveDownloadForAssetController:(id)arg2;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setDownloadViewController:(id)arg1;
- (void)start;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
