/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsEndpointsViewController : MediaControlsCollectionViewController <CCUIContentModuleContentViewController, MPAVRoutingViewControllerDelegate, MediaControlsCollectionViewDataSource, MediaControlsCollectionViewDelegate, MediaControlsEndpointsManagerDelegate, MediaControlsPanelViewControllerDelegate> {
    MPMediaControlsConfiguration * _configuration;
    bool  _didRetrieveActiveSystemRouteOnce;
    bool  _dismissing;
    MediaControlsEndpointsManager * _endpointsManager;
    long long  _lastSelectedModeForActivePanelViewController;
    bool  _onScreen;
    MPAVOutputDeviceRoutingDataSource * _outputDeviceRoutingDataSource;
    bool  _prewarming;
    NSString * _routingContextUID;
    id /* block */  _routingCornerViewTappedBlock;
    MPAVRoutingViewController * _routingViewController;
    MPAVEndpointRoute * _selectedRoute;
    bool  _shouldReselectActiveSystemRoute;
    bool  _shouldTransitionToVisibleWhenReady;
}

@property (nonatomic, retain) MPMediaControlsConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDismissing, nonatomic) bool dismissing;
@property (nonatomic, retain) MediaControlsEndpointsManager *endpointsManager;
@property (readonly) unsigned long long hash;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic, copy) id /* block */ routingCornerViewTappedBlock;
@property (nonatomic, retain) MPAVRoutingViewController *routingViewController;
@property (nonatomic, retain) MPAVEndpointRoute *selectedRoute;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assignRouteViewControllerToSelectedPanelViewController;
- (bool)_isReadyForAppearanceTransition;
- (bool)_isSelectedRouteInRoutes;
- (void)_routeDidChangeNotification:(id)arg1;
- (void)_selectActiveSystemRouteIfNeeded;
- (void)_setSelectedRoute:(id)arg1 isUserSelected:(bool)arg2;
- (void)_setupEndpointsManager;
- (void)_setupRoutingViewController;
- (void)_supportedModesForSelectedRoute:(unsigned long long*)arg1 selectedMode:(long long*)arg2;
- (void)_transitionToVisible:(bool)arg1;
- (void)_transitionToVisibleIfNeeded;
- (void)_updateDiscoveryMode;
- (void)_updateEndpointRouteForOutputDeviceDataSource:(id)arg1;
- (void)_updateModesForSelectedMediaControlsPanelViewController;
- (void)_updateSupportedModesForSelectedMediaControlsPanelViewController;
- (id)configuration;
- (void)dealloc;
- (long long)defaultSelectedItemIndexForCollectionViewController:(id)arg1;
- (void)didSelectRoute:(id)arg1;
- (void)dismissMediaControlsPanelViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)endpointsManager;
- (void)endpointsManager:(id)arg1 activeSystemRouteDidChange:(id)arg2;
- (void)endpointsManager:(id)arg1 defersRoutesReplacement:(id /* block */)arg2;
- (void)homeObserverDidUpdateKnownUIDs:(id)arg1;
- (bool)isDismissing;
- (bool)isOnScreen;
- (bool)mediaControlsCollectionViewController:(id)arg1 canSelectItemAtIndex:(long long)arg2;
- (void)mediaControlsCollectionViewController:(id)arg1 didDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 didEndDisplayingViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (id)mediaControlsCollectionViewController:(id)arg1 viewControllerForItemAtIndex:(long long)arg2;
- (void)mediaControlsCollectionViewController:(id)arg1 willDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 willSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (void)mediaControlsPanelViewController:(id)arg1 didToggleRoutingPicker:(bool)arg2;
- (long long)numberOfItemsInCollectionViewController:(id)arg1;
- (double)preferredExpandedContentHeight;
- (double)preferredExpandedContentWidth;
- (bool)providesOwnPlatter;
- (void)reloadData;
- (id)routingContextUID;
- (id /* block */)routingCornerViewTappedBlock;
- (id)routingViewController;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (id)selectedRoute;
- (void)setConfiguration:(id)arg1;
- (void)setDismissing:(bool)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setEndpointsManager:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setRoutingCornerViewTappedBlock:(id /* block */)arg1;
- (void)setRoutingViewController:(id)arg1;
- (void)setSelectedRoute:(id)arg1;
- (void)startPrewarming;
- (void)stopPrewarming;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
