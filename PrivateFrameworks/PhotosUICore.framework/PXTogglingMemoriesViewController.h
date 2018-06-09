/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTogglingMemoriesViewController : UIViewController <PXUIViewControllerZoomTransitionEndPoint> {
    PXFetchResultBasedMemoriesDataSourceManager * _favoriteMemoriesDataSourceManager;
    PXMemoriesUIViewController * _favoriteMemoriesViewController;
    PXMemoriesFeedUIViewController * _memoriesViewController;
    bool  _onlyShowFavorites;
}

@property (nonatomic, readonly) NSString *currentBarButtonTitle;
@property (nonatomic, readonly) PXMemoriesFeedUIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager;
@property (nonatomic, retain) PXMemoriesUIViewController *favoriteMemoriesViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepsSourceRegionOfInterestContent;
@property (nonatomic, readonly) PXMemoriesFeedUIViewController *memoriesViewController;
@property (getter=shouldOnlyShowFavorites, nonatomic) bool onlyShowFavorites;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureBarButton;
- (void)_configureMemoryViewControllers;
- (void)_reloadCurrentViewController;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_updateBarButton;
- (id)currentBarButtonTitle;
- (id)currentViewController;
- (id)favoriteMemoriesDataSourceManager;
- (id)favoriteMemoriesViewController;
- (id)init;
- (id)memoriesViewController;
- (void)prepareForInteractiveTransition:(id)arg1;
- (bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (void)setFavoriteMemoriesDataSourceManager:(id)arg1;
- (void)setFavoriteMemoriesViewController:(id)arg1;
- (void)setOnlyShowFavorites:(bool)arg1;
- (bool)shouldOnlyShowFavorites;
- (void)toggle;
- (void)viewDidLoad;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;

@end
