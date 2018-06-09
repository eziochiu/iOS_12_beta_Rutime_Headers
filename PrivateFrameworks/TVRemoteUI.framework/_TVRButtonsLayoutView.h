/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRButtonsLayoutView : UIView {
    NSArray * _bottomRowButtons;
    UIStackView * _bottomStackView;
    UIView * _mediaLeftButton;
    UIView * _mediaRightButton;
    _TVRButton * _menuButton;
}

@property (nonatomic, copy) NSArray *bottomRowButtons;
@property (nonatomic, retain) UIStackView *bottomStackView;
@property (nonatomic, readonly) UIView *mediaLeftButton;
@property (nonatomic, readonly) UIView *mediaRightButton;
@property (nonatomic, retain) _TVRButton *menuButton;

- (void).cxx_destruct;
- (void)_adjustMenuButtonHitTestAreaForShortcutButtons:(bool)arg1;
- (void)_layoutSizeDidChange;
- (void)_transformStackviewForLandscapeLayout:(bool)arg1;
- (id)bottomRowButtons;
- (id)bottomStackView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)mediaLeftButton;
- (id)mediaRightButton;
- (id)menuButton;
- (void)setBottomRowButtons:(id)arg1;
- (void)setBottomStackView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMediaButtonsLeft:(id)arg1 right:(id)arg2 animated:(bool)arg3;
- (void)setMenuButton:(id)arg1;

@end
