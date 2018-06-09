/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUHorizontalAlbumListGadget : PXHorizontalCollectionGadget <PUCloudSharedAlbumViewControllerDelegate, PUStackedAlbumTransitionDelegate> {
    PUAlbumDropSessionController * _dropSessionController;
    PUPhotoPinchGestureRecognizer * _pinchGestureRecognizer;
    PUAlbumsGadgetProvider * _provider;
    PUSessionInfo * _sessionInfo;
}

@property (nonatomic, readonly) PUAlbumListViewControllerSpec *albumListViewControllerSpec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PUAlbumDropSessionController *dropSessionController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, readonly) PUAlbumsGadgetProvider *provider;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_albumGadgetForCollection:(id)arg1;
- (bool)_canUseStackedAlbumTransitionToNavigationToCollection:(id)arg1;
- (id)_collectionAtIndexPath:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (id)_navigateToCollection:(id)arg1 animated:(bool)arg2 interactive:(bool)arg3;
- (unsigned long long)accessoryButtonType;
- (id)albumListViewControllerSpec;
- (long long)anchorPosition;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (id)dropSessionController;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (unsigned long long)gadgetType;
- (id)init;
- (id)initWithAlbumsGadgetProvider:(id)arg1;
- (id)navigateToAssetCollection:(id)arg1 animated:(bool)arg2;
- (void)navigateToPeopleAlbumAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)pinchGestureRecognizer;
- (id)provider;
- (id)px_gridPresentation;
- (id)sessionInfo;
- (void)setGadgetSpec:(id)arg1;
- (void)setSessionInfo:(id)arg1;
- (void)sharedAlbumDeletedBySharedAlbumViewController:(id)arg1;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3;
- (id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(bool)arg2 forCollection:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(bool)arg2 forPHCollection:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
