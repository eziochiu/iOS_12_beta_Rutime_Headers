/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchTopResultContentView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    UICollectionView * _collectionView;
    <PUTopResultDelegate> * _delegate;
    NSMutableDictionary * _images;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUTopResultDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *images;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })contentSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 assetCount:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(unsigned long long)arg1;
- (void)handleTap:(id)arg1;
- (id)images;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resetImages;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)setImages:(id)arg1;

@end
