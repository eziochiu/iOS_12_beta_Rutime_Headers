/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSceneDebugInspectorViewController : UITableViewController {
    UIView * _loadingContentView;
    NSArray * _sceneViewModels;
    UIBarButtonItem * _shareButton;
    UIImage * _sortBarButtonImage;
    UIBarButtonItem * _sortButton;
}

@property (nonatomic, retain) UIView *loadingContentView;
@property (nonatomic, copy) NSArray *sceneViewModels;
@property (nonatomic, retain) UIBarButtonItem *shareButton;
@property (nonatomic, retain) UIImage *sortBarButtonImage;
@property (nonatomic, retain) UIBarButtonItem *sortButton;

- (void).cxx_destruct;
- (id)_assetGridViewControllerForViewModel:(id)arg1;
- (id)_commaSeparatedValueRepresentation;
- (id)_sortViewModels:(id)arg1 sortOrder:(unsigned long long)arg2;
- (id)_titleForSortOrder:(unsigned long long)arg1;
- (void)didSelectDoneButton:(id)arg1;
- (void)didSelectShareButton:(id)arg1;
- (void)didSelectSortButton:(id)arg1;
- (id)loadingContentView;
- (id)sceneViewModels;
- (void)setLoadingContentView:(id)arg1;
- (void)setSceneViewModels:(id)arg1;
- (void)setShareButton:(id)arg1;
- (void)setSortBarButtonImage:(id)arg1;
- (void)setSortButton:(id)arg1;
- (id)shareButton;
- (id)sortBarButtonImage;
- (id)sortButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateToolbarButtons;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
