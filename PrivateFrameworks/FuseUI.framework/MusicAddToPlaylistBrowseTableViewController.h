/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicAddToPlaylistBrowseTableViewController : MusicLibraryBrowseTableViewController <MusicNoContentViewDelegate> {
    MusicNoContentView * _noContentView;
    NSOperationQueue * _platformLookupQueue;
    MusicEntityValueContext * _prepopulatedItemsEntityValueContext;
    NSArray * _prepopulatedMediaItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MusicEntityValueContext *prepopulatedItemsEntityValueContext;
@property (nonatomic, retain) NSArray *prepopulatedMediaItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_needsHeaderForSection:(long long)arg1;
- (void)_performBlockAfterDerivingPrepopulatedItems:(id /* block */)arg1;
- (void)_showNewPlaylistCreationFlow;
- (void)_updateNoContentViewVisibility;
- (void)dealloc;
- (void)handleEntityProviderDidInvalidate;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (void)music_handleCreatePlaylistAction;
- (id)noContentView;
- (void)noContentViewDidTapButton:(id)arg1;
- (id)prepopulatedItemsEntityValueContext;
- (id)prepopulatedMediaItems;
- (void)setPrepopulatedItemsEntityValueContext:(id)arg1;
- (void)setPrepopulatedMediaItems:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
