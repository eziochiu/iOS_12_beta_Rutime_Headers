/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIPeopleGroupsGridViewController : UIViewController <CNUIPeopleGroupsDataSourceDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    CNUIPeopleGroupsDataSource * _dataSource;
    <CNUIPeopleGroupsGridViewControllerDelegate> * _delegate;
    CNUIContactsEnvironment * _environment;
    CNUIPeopleGroupsGridView * _gridView;
}

@property (nonatomic, retain) CNUIPeopleGroupsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNUIPeopleGroupsGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNUIContactsEnvironment *environment;
@property (nonatomic, retain) CNUIPeopleGroupsGridView *gridView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)dataSource;
- (void)dataSourceDidChange:(id)arg1;
- (id)delegate;
- (id)environment;
- (id)gridView;
- (id)initWithEnvironment:(id)arg1 contactStore:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)loadView;
- (id)newGridLayout;
- (void)reloadData;
- (void)reloadGridView;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setGridView:(id)arg1;
- (void)viewDidLoad;

@end
