/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIQuicklinksViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    SKUIColorScheme * _colorScheme;
    <SKUIQuicklinksViewControllerDelegate> * _delegate;
    NSArray * _links;
    SKUIQuicklinksView * _quicklinksView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIQuicklinksViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *indexPathsForVisibleItems;
@property (nonatomic, copy) NSArray *links;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_numberOfRows;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLinkAtIndex:(long long)arg1;
- (id)indexPathsForVisibleItems;
- (id)links;
- (void)loadView;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLinks:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
