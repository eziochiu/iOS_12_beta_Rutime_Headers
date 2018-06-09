/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsPanelViewController : UIViewController <MPAVRoutingViewControllerThemeDelegate, MPMediaControlsViewControllerDelegate, MediaControlsCollectionItemViewController, MediaControlsEndpointControllerDelegate, MediaControlsRatingActionSheet> {
    MPArtworkCatalog * _artworkCatalog;
    UIView * _backgroundView;
    UIView * _bottomDividerView;
    UIView * _contentView;
    MPMediaControlsViewController * _coverSheetRoutingViewController;
    bool  _coverSheetRoutingViewControllerShouldBePresented;
    <MediaControlsPanelViewControllerDelegate> * _delegate;
    MediaControlsEndpointController * _endpointController;
    MPVolumeGroupSliderCoordinator * _groupSliderCoordinator;
    MediaControlsHeaderView * _headerView;
    bool  _isListeningForResponse;
    NSString * _label;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastKnownSize;
    bool  _onScreen;
    MediaControlsParentContainerView * _parentContainerView;
    MediaControlsRoutingCornerView * _routingCornerView;
    id /* block */  _routingCornerViewTappedBlock;
    MPAVRoutingViewController * _routingViewController;
    NSMutableArray * _secondaryStringComponents;
    bool  _selected;
    long long  _selectedMode;
    long long  _style;
    unsigned long long  _supportedModes;
    UIView * _topDividerView;
    bool  _transitioning;
    MTVibrantStylingProvider * _vibrantStylingProvider;
    MediaControlsVolumeContainerView * _volumeContainerView;
}

@property (nonatomic, retain) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *bottomDividerView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, retain) MPMediaControlsViewController *coverSheetRoutingViewController;
@property (nonatomic) bool coverSheetRoutingViewControllerShouldBePresented;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MediaControlsPanelViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MediaControlsEndpointController *endpointController;
@property (nonatomic, retain) MPVolumeGroupSliderCoordinator *groupSliderCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MediaControlsHeaderView *headerView;
@property (nonatomic) bool isListeningForResponse;
@property (nonatomic, copy) NSString *label;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, retain) MediaControlsParentContainerView *parentContainerView;
@property (nonatomic, retain) MediaControlsRoutingCornerView *routingCornerView;
@property (nonatomic, copy) id /* block */ routingCornerViewTappedBlock;
@property (nonatomic, retain) MPAVRoutingViewController *routingViewController;
@property (nonatomic, retain) NSMutableArray *secondaryStringComponents;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) long long selectedMode;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedModes;
@property (nonatomic, retain) UIView *topDividerView;
@property (getter=isTransitioning, nonatomic) bool transitioning;
@property (nonatomic, retain) MTVibrantStylingProvider *vibrantStylingProvider;
@property (nonatomic, retain) MediaControlsVolumeContainerView *volumeContainerView;

+ (id)panelViewControllerForCoverSheet;

- (void).cxx_destruct;
- (void)_dismissRoutingViewControllerFromCoverSheetIfNeeded;
- (void)_mediaControlsPanelViewControllerReceivedInteraction:(id)arg1;
- (void)_presentRoutingViewControllerFromCoverSheet;
- (id)_route;
- (void)_routingCornerViewReceivedTap:(id)arg1;
- (void)_setRoutingPickerVisible:(bool)arg1 animated:(bool)arg2;
- (void)_updateConfiguration;
- (void)_updateControlCenterMetadata:(id)arg1;
- (void)_updateHeaderUI;
- (void)_updateOnScreenForStyle:(long long)arg1;
- (void)_updatePlaceholderArtwork;
- (void)_updateRouteNameLabel;
- (void)_updateRoutingCornerView;
- (void)_updateSecondaryStringFormat;
- (void)_updateStyle;
- (id)artworkCatalog;
- (id)backgroundView;
- (id)bottomDividerView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForRoutingViewController:(id)arg1;
- (id)contentView;
- (id)coverSheetRoutingViewController;
- (bool)coverSheetRoutingViewControllerShouldBePresented;
- (id)delegate;
- (id)endpointController;
- (void)endpointController:(id)arg1 didLoadNewResponse:(id)arg2;
- (void)endpointControllerDidChangeState:(id)arg1;
- (void)endpointControllerDidUpdateRoutingAvailability:(id)arg1;
- (void)endpointControllerRouteDidUpdate:(id)arg1;
- (id)groupSliderCoordinator;
- (id)headerView;
- (void)headerViewButtonPressed:(id)arg1;
- (void)headerViewLaunchNowPlayingAppButtonPressed:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (bool)isListeningForResponse;
- (bool)isOnScreen;
- (bool)isSelected;
- (bool)isTransitioning;
- (id)label;
- (void)mediaControlsViewControllerDidReceiveInteraction:(id)arg1;
- (id)parentContainerView;
- (void)presentRatingActionSheet:(id)arg1;
- (id)routingCornerView;
- (id /* block */)routingCornerViewTappedBlock;
- (id)routingViewController;
- (void)routingViewController:(id)arg1 willDisplayCell:(id)arg2;
- (id)secondaryStringComponents;
- (long long)selectedMode;
- (void)setArtworkCatalog:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBottomDividerView:(id)arg1;
- (void)setCoverSheetRoutingViewController:(id)arg1;
- (void)setCoverSheetRoutingViewControllerShouldBePresented:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointController:(id)arg1;
- (void)setGroupSliderCoordinator:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setIsListeningForResponse:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setParentContainerView:(id)arg1;
- (void)setRoutingCornerView:(id)arg1;
- (void)setRoutingCornerViewTappedBlock:(id /* block */)arg1;
- (void)setRoutingViewController:(id)arg1;
- (void)setSecondaryStringComponents:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedMode:(long long)arg1;
- (void)setSelectedMode:(long long)arg1 animated:(bool)arg2;
- (void)setStyle:(long long)arg1;
- (void)setSupportedModes:(unsigned long long)arg1;
- (void)setTopDividerView:(id)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)setVibrantStylingProvider:(id)arg1;
- (void)setVolumeContainerView:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (long long)style;
- (unsigned long long)supportedModes;
- (id)topDividerView;
- (id)vibrantStylingProvider;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)volumeContainerView;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withCoordinator:(id)arg2;

@end
