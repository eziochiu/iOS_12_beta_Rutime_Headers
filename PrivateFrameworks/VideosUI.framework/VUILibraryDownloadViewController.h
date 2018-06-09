/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryDownloadViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUILibraryShelfCollectionViewControllerDelegate, VUIMediaEntitiesFetchControllerDelegate> {
    VUILibraryBannerCollectionViewCell * _bannerViewSizingCell;
    UIBarButtonItem * _currentNavBarButtonItem;
    _VUIDownloadSeeAllController * _currentSeeAllController;
    bool  _isPhone;
    UIBarButtonItem * _libraryBarButton;
    VUILibraryMediaEntityShelvesViewModel * _viewModel;
}

@property (nonatomic, retain) UIBarButtonItem *currentNavBarButtonItem;
@property (nonatomic, retain) _VUIDownloadSeeAllController *currentSeeAllController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBarButtonItem *libraryBarButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) VUILibraryMediaEntityShelvesViewModel *viewModel;

+ (id)_localizedTitleForMediaEntityType:(id)arg1;

- (void).cxx_destruct;
- (id)_localizedBannerString;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (id)currentNavBarButtonItem;
- (id)currentSeeAllController;
- (id)initWithMediaLibrary:(id)arg1;
- (id)libraryBarButton;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)seeAllButtonPressed:(id)arg1;
- (void)setCurrentNavBarButtonItem:(id)arg1;
- (void)setCurrentSeeAllController:(id)arg1;
- (void)setLibraryBarButton:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4;
- (void)start;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
