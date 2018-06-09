/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVShelfView : _TVCollectionView {
    _TVShelfViewLayout * _shelfFlowLayout;
}

@property (nonatomic, retain) _TVShelfViewLayout *shelfFlowLayout;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_contentOffsetForNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 oldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 newContentSize:(struct CGSize { double x1; double x2; })arg3 andOldContentSize:(struct CGSize { double x1; double x2; })arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_selectionMarginsForCell:(id)arg1;
- (void)_updateLayoutForFocusedView:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shelfViewLayout:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionMarginsForCellAtIndexPath:(id)arg1;
- (void)setShelfFlowLayout:(id)arg1;
- (id)shelfFlowLayout;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tv_augmentedSelectionFrameForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })tv_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)updateLayoutForFocusedView:(id)arg1;

@end
