/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumsGadgetViewController : PXGadgetViewController <PLNavigableAssetContainerListViewController> {
    PUSessionInfo * _sessionInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDoneButton:(id)arg1;
- (void)_handlePlusButton:(id)arg1;
- (void)_pushViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateNavigationBar;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)initWithLayout:(id)arg1 dataSourceManager:(id)arg2;
- (void)navigateToCollection:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)navigateToMyAlbumsViewControllerWithCompletion:(id /* block */)arg1;
- (void)navigateToPeopleAlbumViewControllerAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)navigateToRevealAssetCollection:(id)arg1 initiallyHidden:(bool)arg2 animated:(bool)arg3;
- (void)navigateToSharedAlbumsViewControllerWithCompletion:(id /* block */)arg1;
- (id)px_gridPresentation;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
