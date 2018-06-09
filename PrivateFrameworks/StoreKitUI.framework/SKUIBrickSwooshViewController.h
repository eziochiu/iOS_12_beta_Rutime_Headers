/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBrickSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray * _bricks;
    UICollectionView * _collectionView;
    bool  _delegateWantsWillDisplay;
    NSMutableIndexSet * _hiddenImageIndexSet;
    struct { 
        double cellHeight; 
        double cellWidth; 
        double interItemSpacing; 
    }  _metrics;
    bool  _showBrickTitles;
    NSString * _swooshTitle;
    SKUISwooshView * _swooshView;
}

@property (nonatomic, copy) NSArray *bricks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { double x1; double x2; double x3; })_brickSwooshMetrics;
- (id)bricks;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (void)deselectAllItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(long long)arg1;
- (id)indexPathsForVisibleItems;
- (id)initWithSwoosh:(id)arg1;
- (void)loadView;
- (id)popImageViewForItemAtIndex:(long long)arg1;
- (void)setBricks:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)unhideImages;
- (void)viewWillAppear:(bool)arg1;

@end
