/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewCellContainerView : UIView {
    NAUILayoutConstraintSet * _constraintSet;
    UIView * _contentView;
    NAUILayoutConstraintSet * _preferredContentFrameConstraintSet;
    UILayoutGuide * _preferredContentFrameLayoutGuide;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredContentLayoutFrameInset;
    UILabel * _titleLabel;
    unsigned long long  _titlePosition;
}

@property (nonatomic, readonly) NAUILayoutConstraintSet *constraintSet;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) NAUILayoutConstraintSet *preferredContentFrameConstraintSet;
@property (nonatomic, readonly) UILayoutGuide *preferredContentFrameLayoutGuide;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredContentLayoutFrameInset;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) unsigned long long titlePosition;

+ (id)_titleFont;
+ (double)preferredChromeHeightForTitlePosition:(unsigned long long)arg1;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_configureConstraintSets;
- (id)constraintSet;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 titlePosition:(unsigned long long)arg2;
- (id)preferredContentFrameConstraintSet;
- (id)preferredContentFrameLayoutGuide;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredContentLayoutFrameInset;
- (void)setContentView:(id)arg1;
- (void)setPreferredContentLayoutFrameInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePosition:(unsigned long long)arg1;
- (id)title;
- (id)titleLabel;
- (unsigned long long)titlePosition;
- (void)updateConstraints;

@end
