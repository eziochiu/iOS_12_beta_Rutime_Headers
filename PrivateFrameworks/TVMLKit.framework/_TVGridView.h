/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVGridView : _TVCollectionView {
    bool  _delegateRespondsToIndexPathForPreferredFocusedView;
    _TVCollectionViewFlowLayout * _gridFlowLayout;
}

@property (nonatomic, retain) _TVCollectionViewFlowLayout *gridFlowLayout;

- (void).cxx_destruct;
- (id)gridFlowLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGridFlowLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })tv_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end
