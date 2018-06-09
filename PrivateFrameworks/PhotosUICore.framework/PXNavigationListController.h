/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListController : UIViewController <PXNavigationListDataSourceManagerObserver, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate> {
    <PXNavigationListContainer> * _container;
    PXNavigationListDataSource * _dataSource;
    PXNavigationListDataSourceManager * _dataSourceManager;
    UITableView * _tableView;
}

@property (nonatomic) bool allowsNavigation;
@property (nonatomic) <PXNavigationListContainer> *container;
@property (nonatomic, readonly) double contentHeight;
@property (nonatomic, retain) PXNavigationListDataSource *dataSource;
@property (nonatomic, readonly) PXNavigationListDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

+ (id)navigateToListItem:(id)arg1 sourceViewController:(id)arg2 animated:(bool)arg3;

- (void).cxx_destruct;
- (id)_createTransparentFullWidthViewOfHeight:(double)arg1;
- (id)_navigateTolistItem:(id)arg1 animated:(bool)arg2;
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;
- (bool)allowsNavigation;
- (id)container;
- (double)contentHeight;
- (id)dataSource;
- (id)dataSourceManager;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAllowsNavigation:(bool)arg1;
- (void)setContainer:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
