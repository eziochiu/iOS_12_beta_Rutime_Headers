/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceViewNearbyAppsCell : MKTableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    NSLayoutConstraint * _collectionHeightConstraint;
    UICollectionView * _collectionView;
    <MKPlaceViewNearbyAppsCellDelegate> * _delegate;
    _MKNearbyAppsFlowLayout * _flowLayout;
    NSLayoutConstraint * _headerBaselineConstraint;
    UILabel * _headerLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    NSArray * _marginConstraints;
    NSArray * _storeItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceViewNearbyAppsCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *marginConstraints;
@property (nonatomic, retain) NSArray *storeItems;
@property (readonly) Class superclass;

+ (double)_headerBaselineOffsetFromTop;
+ (id)_headerLabelFont;
+ (struct CGSize { double x1; double x2; })_iconSize;
+ (double)contentHeight;
+ (bool)requiresConstraintBasedLayout;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)contentSizeDidChange;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (id)marginConstraints;
- (void)refreshMarginConstraints;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setMarginConstraints:(id)arg1;
- (void)setStoreItems:(id)arg1;
- (id)storeItems;

@end
