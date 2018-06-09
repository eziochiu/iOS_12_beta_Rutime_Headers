/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView {
    UIButton * _button;
    SEL  _buttonAction;
    id  _buttonTarget;
    NSLayoutConstraint * _rightMarginConstraint;
    NSLayoutConstraint * _titleToButtonConstraint;
}

@property (nonatomic) UIButton *button;
@property (nonatomic) SEL buttonAction;
@property (nonatomic) id buttonTarget;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint;
@property (nonatomic) NSLayoutConstraint *titleToButtonConstraint;

+ (struct CGSize { double x1; double x2; })platformSizeForTitle:(id)arg1;
+ (struct CGSize { double x1; double x2; })platformSizeForTitle:(id)arg1 buttonTitle:(id)arg2;
+ (double)widthForTitle:(id)arg1;
+ (double)widthForTitle:(id)arg1 buttonTitle:(id)arg2;

- (void)awakeFromNib;
- (id)button;
- (SEL)buttonAction;
- (void)buttonPressed:(id)arg1;
- (id)buttonTarget;
- (id)buttonTitle;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)rightMarginConstraint;
- (void)setButton:(id)arg1;
- (void)setButtonAction:(SEL)arg1;
- (void)setButtonTarget:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setRightMarginConstraint:(id)arg1;
- (void)setTitleToButtonConstraint:(id)arg1;
- (id)titleToButtonConstraint;

@end
