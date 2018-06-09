/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryPlaylistsOverviewViewController : UIViewController <MusicActionableHeaderViewDelegate, MusicClientContextConsuming, MusicLibraryBrowseCollectionViewControllerDelegate, MusicNoContentViewDelegate, MusicSwitcherButtonContainerViewDelegate, SKUIProxyScrollViewDelegate, SKUITabBarItemRootViewController, UIViewControllerRestoration> {
    UISwitch * _alertShowOfflineSwitch;
    MusicClientContext * _clientContext;
    NSDictionary * _curatorsByID;
    UIAlertController * _filterAlertController;
    MusicHairlineView * _hairlineView;
    bool  _hasSubscribedPlaylistsCapability;
    MusicSwitcherButtonContainerView * _librarySwitcherButtonContainerView;
    UIViewController * _noContentViewController;
    unsigned long long  _playlistsConfigurationOptions;
    MusicActionableHeaderView * _playlistsHeaderView;
    MusicPlaylistsWithNewActionViewConfiguration * _playlistsViewConfiguration;
    UIViewController * _playlistsViewController;
    SKUIProxyScrollView * _proxyScrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _proxyScrollViewContentInsetAdditions;
    MusicActionableHeaderView * _recentlyAddedPlaylistsHeaderView;
    MusicLibraryBrowseCollectionViewController * _recentlyAddedPlaylistsViewController;
    NSString * _selectedFilter;
    bool  _selectedFilterIsCuratorID;
    MusicPlaylistsWithNewActionViewConfiguration * _selectedPlaylistsViewConfiguration;
    bool  _shouldShowNoContentView;
    MusicLibraryTopBarController * _topBarController;
    MusicVerticalScrollingContainerViewController * _verticalScrollingContainerViewController;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_recentlyAddedViewControllerWithClientContext:(id)arg1;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (void)_alertShowOfflineSwitchValueChangedAction:(id)arg1;
- (double)_calculateHairlineViewHeight;
- (bool)_calculateHasSubscribedPlaylistsCapability;
- (void)_cloudUpdateInProgressDidChangeNotification:(id)arg1;
- (void)_configureForSelectedFilter;
- (void)_configureNoContentView:(id)arg1;
- (void)_delayedDismissFilterAlertController;
- (void)_didUpdateDefaultLibrary:(id)arg1;
- (void)_dismissEditSheet;
- (id)_getCurrentSortedPlaylistsOverviewFilters;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handlePlaylistsOverviewFilterAlertControllerDismissal;
- (void)_loadRecentlyAddedPlaylistsHeaderView;
- (void)_loadRecentlyAddedPlaylistsViewController;
- (void)_musicLibraryPlaylistsOverviewViewControllerCommonInitialization;
- (id)_newLibraryPlaylistsViewConfiguration;
- (id)_noContentViewController;
- (void)_playlistsEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_presentCreatePlaylistViewController;
- (void)_recentlyAddedEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_setSelectedFilter:(id)arg1;
- (id)_sortedBasicPlaylistsOverviewFilters;
- (id)_sortedSubscriberPlaylistsOverviewFilters;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (id)_titleForPlaylistsOverviewFilter:(id)arg1;
- (void)_updateChildViewController;
- (void)_updateCuratorsMapping;
- (void)_updateLibrarySwitcherButtonWithVerticalContainerItemsReload:(bool)arg1;
- (void)_updatePlaylistNoContentViewVisibilityForceReload:(bool)arg1;
- (void)_updatePlaylistsHeaderMetricsAllowingInvalidationOfVerticalScrollingContainerLayout:(bool)arg1;
- (void)_updateRecentlyAddedPlaylistsHeaderMetricsAllowingInvalidationOfVerticalScrollingContainerLayout:(bool)arg1;
- (void)_updateRecentlyAddedViewMoreButton;
- (void)_updateSizeOfLibrarySwitcherButtonContainerView;
- (void)_updateSizeOfPlaylistsHeaderView;
- (void)_updateSizeOfRecentlyAddedPlaylistsHeaderView;
- (void)_updateSizeOfRecentlyAddedPlaylistsView;
- (id)_validFilterForFilter:(id)arg1;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (id)clientContext;
- (void)collectionViewFlowLayoutLayoutMetricsWereUpdatedForLibraryBrowseCollectionViewController:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTabBarItem:(id)arg1;
- (void)music_handleCreatePlaylistAction;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)noContentViewDidTapButton:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)setClientContext:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)switcherButtonWasSelectedInContainerView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
