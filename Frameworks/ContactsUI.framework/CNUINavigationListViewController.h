/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUINavigationListViewController : UIViewController <CNUINavigationListViewDataSource, CNUINavigationListViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    <CNUINavigationListViewControllerDelegate> * _delegate;
    CNUINavigationListItem * _displayedExpandedItem;
    CNUINavigationListItem * _expandedItem;
    bool  _ignoreParentControllerResize;
    NSArray * _items;
    CNUINavigationListView * _navigationListView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNUINavigationListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNUINavigationListItem *displayedExpandedItem;
@property (nonatomic, retain) CNUINavigationListItem *expandedItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreParentControllerResize;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) CNUINavigationListView *navigationListView;
@property (readonly) Class superclass;

+ (bool)itemRequiresDetailCell:(id)arg1;

- (void).cxx_destruct;
- (bool)canExpandItem:(id)arg1;
- (double)cellSeparatorHeight;
- (struct CGSize { double x1; double x2; })contentSizeForExpandedItem:(id)arg1;
- (id)delegate;
- (id)dequeueReusableDetailCell;
- (id)dequeueReusableStandardCell;
- (id)displayedExpandedItem;
- (void)expandItem:(id)arg1;
- (id)expandedItem;
- (bool)ignoreParentControllerResize;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)itemAtIndex:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)items;
- (id)itemsForItem:(id)arg1;
- (void)loadView;
- (id)navigationListView;
- (void)navigationListView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)navigationListView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadNavigationListView;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedExpandedItem:(id)arg1;
- (void)setExpandedItem:(id)arg1;
- (void)setIgnoreParentControllerResize:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setNavigationListView:(id)arg1;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (void)stopTrackingRollover;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)toggleItem:(id)arg1;
- (void)updateNavigationListView;
- (void)updateNavigationListViewSeparatorStyle;
- (void)updateNavigationListViewStateAnimated:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
