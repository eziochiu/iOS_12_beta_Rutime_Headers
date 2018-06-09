/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKBCompatInputView : UIView {
    UIView * _snapshotView;
    UIView * _touchableView;
}

@property (nonatomic, retain) UIView *snapshotView;
@property (nonatomic, retain) UIView *touchableView;

+ (bool)_retroactivelyRequiresConstraintBasedLayout;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_compatibleBounds;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (bool)_hasAutolayoutHeightConstraint;
- (void)addSubview:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setTouchableView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)snapshotView;
- (id)touchableView;

@end
