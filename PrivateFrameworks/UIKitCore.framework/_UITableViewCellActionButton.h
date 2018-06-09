/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewCellActionButton : UIButton {
    UITableViewRowAction * _action;
    UIVisualEffect * _backgroundEffect;
    unsigned long long  _style;
}

@property (nonatomic, retain) UITableViewRowAction *action;
@property (nonatomic, copy) UIVisualEffect *backgroundEffect;
@property (nonatomic) unsigned long long style;

+ (id)actionButtonWithStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)action;
- (id)backgroundEffect;
- (void)didMoveToWindow;
- (double)dynamicTypeSizeFittingHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)preferredFontSizeForContentSizeCategory:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setBackgroundEffect:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitleFontSizeForContentSizeCategory:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (void)traitCollectionDidChange:(id)arg1;

@end
