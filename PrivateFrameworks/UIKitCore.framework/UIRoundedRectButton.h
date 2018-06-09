/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIRoundedRectButton : UIButton {
    UIColor * _fillColor;
    UIBezierPath * _fillPath;
    UIView * _shadowView;
    UIGroupTableViewCellBackground * _tableViewStyleBackground;
}

- (void).cxx_destruct;
- (id)_backgroundView;
- (bool)_canDrawContent;
- (void)_commonRoundedRectButtonInit;
- (id)_contentBackgroundColor;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateBackingViews;
- (void)_invalidatePaths;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_setupBackgroundView;
- (void)_updateState;
- (bool)_wantsTableViewStyleBackground;
- (long long)buttonType;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fillColor:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTintColor:(id)arg1;

@end
