/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@interface MSTrackListViewController : MSStructuredPageViewController <MSTrackListHeaderDelegate> {
    MSTrackListHeaderView * _headerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_delayedReloadForWebViews;
- (id)_headerArtworkImage;
- (id)_headerArtworkItemImage;
- (id)_newImageDataProvider;
- (id)_newPlaceholderImage;
- (void)_reloadFooterView;
- (void)_reloadHeaderView;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_webViewsLoaded:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (id)newTermsAndConditionsFooter;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)purchasableItemsForHeaderView:(id)arg1;
- (void)reloadData;
- (void)viewWillDisappear:(bool)arg1;

@end
