/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaPickerNavigationController : MPUNavigationController <MusicClientContextConsuming, MusicSearchBarDelegate, MusicSearchViewControllerMediaPickerDelegate> {
    bool  _allowsCollectionsInSelectedEntities;
    bool  _allowsMultipleSelection;
    MusicClientContext * _clientContext;
    bool  _includeStoreItemsInSearch;
    <MusicMediaPickerDelegate> * _mediaPickerDelegate;
    NSMutableArray * _pickedEntities;
    unsigned long long  _pickedEntitiesCount;
    bool  _picksSingleCollectionEntity;
    NSString * _prompt;
    UIBarButtonItem * _rightBarButtonItem;
    NSMutableArray * _selectedEntitiesForActiveSession;
    bool  _showsOnlyStoreItems;
    long long  _state;
    NSMutableArray * _storeItemIDs;
    unsigned int  _watchCompatibilityVersion;
}

@property (nonatomic) bool allowsCollectionsInSelectedEntities;
@property (nonatomic) bool allowsMultipleSelection;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeStoreItemsInSearch;
@property (nonatomic) <MusicMediaPickerDelegate> *mediaPickerDelegate;
@property (nonatomic, readonly) bool omitsGeniusPlaylists;
@property (nonatomic, readonly) NSArray *pickedEntities;
@property (nonatomic) bool picksSingleCollectionEntity;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, readonly) UIBarButtonItem *rightBarButtonItem;
@property (nonatomic, retain) NSMutableArray *selectedEntitiesForActiveSession;
@property (nonatomic) bool showsOnlyStoreItems;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int watchCompatibilityVersion;

+ (id)navigationController;
+ (id)selectedItemsForActiveSession;

- (void).cxx_destruct;
- (id)_allPlayableChildrenMetadataObjectsForMetadata:(id)arg1;
- (void)_configureNavigationBar;
- (void)_insertSearchBarIntoTableView:(id)arg1;
- (void)_insertSearchBarIntoViewControllerIfNeeded:(id)arg1;
- (bool)_isMetadataAddable:(id)arg1;
- (void)_reloadDataInViewController:(id)arg1;
- (id)_searchBarInViewController:(id)arg1;
- (void)_selectItem:(id)arg1;
- (void)_stylizeSearchBar:(id)arg1;
- (void)_updatePrompt;
- (void)_updateRightBarButtonItem;
- (void)_updateTitle;
- (bool)allowsCollectionsInSelectedEntities;
- (bool)allowsMultipleSelection;
- (id)clientContext;
- (void)finish;
- (bool)includeStoreItemsInSearch;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)mediaPickerDelegate;
- (void)musicSearchViewController:(id)arg1 didSelectStoreItemWithID:(id)arg2;
- (void)musicSearchViewControllerDidFinish:(id)arg1 withSearchBar:(id)arg2;
- (bool)omitsGeniusPlaylists;
- (id)pickedEntities;
- (bool)picksSingleCollectionEntity;
- (id)prompt;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)reset;
- (id)rightBarButtonItem;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)selectAllMediaItemsInCollection:(id)arg1 fromViewController:(id)arg2;
- (void)selectMediaItem:(id)arg1 fromViewController:(id)arg2;
- (id)selectedEntitiesForActiveSession;
- (void)setAllowsCollectionsInSelectedEntities:(bool)arg1;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setIncludeStoreItemsInSearch:(bool)arg1;
- (void)setMediaPickerDelegate:(id)arg1;
- (void)setPicksSingleCollectionEntity:(bool)arg1;
- (void)setPrompt:(id)arg1;
- (void)setSelectedEntitiesForActiveSession:(id)arg1;
- (void)setShowsOnlyStoreItems:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setWatchCompatibilityVersion:(unsigned int)arg1;
- (bool)showsOnlyStoreItems;
- (long long)state;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (unsigned int)watchCompatibilityVersion;

@end
