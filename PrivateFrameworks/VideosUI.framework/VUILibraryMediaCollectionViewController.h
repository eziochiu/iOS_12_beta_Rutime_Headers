/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryMediaCollectionViewController : VUILibraryStackViewController <TVShelfViewLayoutDelegate, UICollectionViewDataSource, UICollectionViewDelegate, VUILocalContentProtocol, VUIMediaEntitiesFetchControllerDelegate, VUIMediaEntityDownloadViewControllerDelegate, VUIProductLockupViewDelegate> {
    bool  _canShowMultipleSeasons;
    NSMutableDictionary * _downloadViewControllerBySeasonIdentifier;
    NSArray * _episodeGroups;
    NSArray * _episodes;
    VUIMediaCollection * _mediaCollection;
    VUILibraryMediaCollectionViewModel * _mediaCollectionViewModel;
    bool  _onlyShowLocalContent;
    NSArray * _seasons;
    NSString * _showTitle;
}

@property (nonatomic) bool canShowMultipleSeasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *downloadViewControllerBySeasonIdentifier;
@property (nonatomic, retain) NSArray *episodeGroups;
@property (nonatomic, retain) NSArray *episodes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VUIMediaCollection *mediaCollection;
@property (nonatomic, retain) VUILibraryMediaCollectionViewModel *mediaCollectionViewModel;
@property (nonatomic) bool onlyShowLocalContent;
@property (nonatomic, retain) NSArray *seasons;
@property (nonatomic, retain) NSString *showTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildMediaCollectionViewModel;
- (id)_episodeShelfViewControllerWithSeason:(id)arg1 episodes:(id)arg2;
- (id)_episodesBySeasonIdentifier;
- (id)_episodesChangeSetMapWithEpisodeGroups:(id)arg1 changeSet:(id)arg2;
- (id)_productLockupViewWithSeason:(id)arg1;
- (id)_seasonViewModelsWithSeasons:(id)arg1;
- (void)_updateDeletedContentErrorMessage;
- (void)_updateMediaCollectionViewModelWithSeasonViewModels:(id)arg1;
- (void)_updateProductLockupView:(id)arg1 withSeason:(id)arg2;
- (bool)_usingEpisodesGroupFetch;
- (void)addDownloadViewControllerToProductLockupView:(id)arg1 forSeason:(id)arg2;
- (bool)canShowMultipleSeasons;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (void)contentDescriptionExpanded;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)downloadViewController:(id)arg1 didRemoveDownloadForAssetController:(id)arg2;
- (id)downloadViewControllerBySeasonIdentifier;
- (id)episodeGroups;
- (id)episodes;
- (id)initWithMediaCollection:(id)arg1 showMultipleSeasons:(bool)arg2;
- (id)mediaCollection;
- (id)mediaCollectionViewModel;
- (bool)onlyShowLocalContent;
- (id)seasons;
- (void)setCanShowMultipleSeasons:(bool)arg1;
- (void)setDownloadViewControllerBySeasonIdentifier:(id)arg1;
- (void)setEpisodeGroups:(id)arg1;
- (void)setEpisodes:(id)arg1;
- (void)setMediaCollectionViewModel:(id)arg1;
- (void)setOnlyShowLocalContent:(bool)arg1;
- (void)setSeasons:(id)arg1;
- (void)setShowTitle:(id)arg1;
- (id)showTitle;
- (void)start;
- (void)traitCollectionDidChange:(id)arg1;

@end
