/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryEpisodeShelfViewController : VUIShelfViewController <TVShelfViewLayoutDelegate, UICollectionViewDataSource, UICollectionViewDelegate, VUIDialogInteractionControllerDelegate, VUIEpisodeDetailViewControllerDelegate, VUILibraryDownloadPopoverViewControllerDelegate, VUILibraryEpisodeListCellDelegate, VUIMediaEntityAssetControllerDelegate> {
    NSDictionary * _assetControllerForIdentifier;
    VUIDialogInteractionController * _dialogInteractionController;
    VUIEpisodeDetailViewController * _episodeDetailViewController;
    NSArray * _episodes;
    NSIndexPath * _popoverIndexPath;
    bool  _shouldIgnoreSelectEvent;
    VUILibraryEpisodeListCell * _sizingCell;
}

@property (nonatomic, retain) NSDictionary *assetControllerForIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIEpisodeDetailViewController *episodeDetailViewController;
@property (nonatomic, copy) NSArray *episodes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *popoverIndexPath;
@property (nonatomic) bool shouldIgnoreSelectEvent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetControllerForCell:(id)arg1;
- (bool)_canRemoveEpisodeAtIndexPath:(id)arg1;
- (void)_configureShelfLayout:(id)arg1;
- (void)_updateAssetControllers;
- (void)_updateCell:(id)arg1 withAssetController:(id)arg2;
- (void)_updateHeaderView;
- (void)_updateViewAfterReceivingEpisodes;
- (id)assetControllerForIdentifier;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (void)dialogInteractionController:(id)arg1 interactionDidBeginForIndexPath:(id)arg2;
- (void)dialogInteractionController:(id)arg1 interactionDidEndForIndexPath:(id)arg2;
- (bool)dialogInteractionController:(id)arg1 shouldBeginInteractionForIndexPath:(id)arg2;
- (id)episodeDetailViewController;
- (void)episodeDetailViewControllerWasDismissed:(id)arg1;
- (void)episodeListCellDidRequestCancelDownload:(id)arg1;
- (void)episodeListCellDidRequestStartDownload:(id)arg1;
- (id)episodes;
- (id)initWithEpisodes:(id)arg1;
- (void)mediaEntityAssetController:(id)arg1 stateDidChange:(unsigned long long)arg2 downloadProgress:(double)arg3;
- (id)popoverIndexPath;
- (void)removeDownloadDismissed;
- (void)removeDownloadPressed;
- (void)setAssetControllerForIdentifier:(id)arg1;
- (void)setEpisodeDetailViewController:(id)arg1;
- (void)setEpisodes:(id)arg1;
- (void)setPopoverIndexPath:(id)arg1;
- (void)setShouldIgnoreSelectEvent:(bool)arg1;
- (bool)shouldIgnoreSelectEvent;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateShelfLayout:(id)arg1;
- (void)updateWithEpisodes:(id)arg1 andChangeSet:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
