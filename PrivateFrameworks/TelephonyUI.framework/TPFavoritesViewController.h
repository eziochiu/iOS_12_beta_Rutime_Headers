/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPFavoritesViewController : UICollectionViewController {
    CNAvatarViewControllerSettings * _avatarViewControllerSettings;
    CNContactFormatter * _contactFormatter;
    bool  _contentUnavailable;
    UIView * _contentUnavailableView;
    TPFavoritesController * _favoritesController;
    NSArray * _favoritesEntries;
    NSIndexSet * _sections;
}

@property (nonatomic, retain) CNAvatarViewControllerSettings *avatarViewControllerSettings;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic) bool contentUnavailable;
@property (nonatomic, retain) UIView *contentUnavailableView;
@property (nonatomic, readonly) TPFavoritesController *favoritesController;
@property (nonatomic, copy) NSArray *favoritesEntries;
@property (nonatomic, retain) NSIndexSet *sections;

- (void).cxx_destruct;
- (id)avatarViewControllerSettings;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)commonInit;
- (id)contactFormatter;
- (bool)contentUnavailable;
- (id)contentUnavailableView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)favoritesController;
- (id)favoritesEntries;
- (id)favoritesEntryAtIndex:(long long)arg1;
- (void)handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)handleFavoritesControllerFavoritesEntriesDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)refreshView;
- (void)refreshViewAnimated:(bool)arg1;
- (id)sections;
- (void)setAvatarViewControllerSettings:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setContentUnavailable:(bool)arg1;
- (void)setContentUnavailable:(bool)arg1 animated:(bool)arg2;
- (void)setContentUnavailableView:(id)arg1;
- (void)setFavoritesController:(id)arg1;
- (void)setFavoritesEntries:(id)arg1;
- (void)setFavoritesEntries:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setSections:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
