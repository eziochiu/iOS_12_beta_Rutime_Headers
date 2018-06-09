/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryArtistsViewConfiguration : MusicLibraryBrowseTableViewConfiguration {
    MusicEntityViewDescriptor * _artistsTableViewDescriptor;
    MusicEntityViewDescriptor * _recentlyAddedOverviewTableViewDescriptor;
    bool  _shouldIncludeRecentlyAddedOverview;
}

@property (nonatomic) bool shouldIncludeRecentlyAddedOverview;

- (void).cxx_destruct;
- (id)_artistsTableViewDescriptor;
- (id)_detailViewControllerForEntityValueContext:(id)arg1 sourceViewController:(id)arg2;
- (id)_entityViewDescriptorsForCurrentProperties;
- (id)_loadArtistsEntityProvider;
- (id)_loadArtistsTableViewDescriptor;
- (id)_loadRecentlyAddedOverviewEntityProvider;
- (id)_loadRecentlyAddedOverviewTableViewDescriptor;
- (id)_loadTableViewDescriptor;
- (id)_recentlyAddedOverviewTableViewDescriptor;
- (bool)canPreviewEntityValueContext:(id)arg1;
- (void)configureContentDescriptorForSearchResults:(id)arg1;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)setShouldIncludeRecentlyAddedOverview:(bool)arg1;
- (bool)shouldIncludeRecentlyAddedOverview;
- (bool)wantsToDisplayDetailViewControllerUponEntityValueProviderSelection;

@end
