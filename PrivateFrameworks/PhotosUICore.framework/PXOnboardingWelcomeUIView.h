/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXOnboardingWelcomeUIView : UIView {
    UIFont * _buttonFont;
    NSString * _buttonTitle;
    NSArray * _constraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UILabel * _descriptionLabel;
    NSString * _descriptionText;
    NSLayoutConstraint * _iconTopCnst;
    UIView * _iconView;
    long long  _layoutStyle;
    UILayoutGuide * _leadingWhitespace;
    UILayoutGuide * _middleWhitespace;
    struct { 
        bool button; 
    }  _needsUpdateFlags;
    NSLayoutConstraint * _startBottomCnst;
    UIButton * _startButton;
    NSString * _title;
    UILabel * _titleLabel;
    UILayoutGuide * _trailingWhitespace;
}

@property (nonatomic, retain) UIFont *buttonFont;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, retain) NSLayoutConstraint *iconTopCnst;
@property (nonatomic, retain) UIView *iconView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) UILayoutGuide *leadingWhitespace;
@property (nonatomic, readonly) UILayoutGuide *middleWhitespace;
@property (nonatomic, retain) NSLayoutConstraint *startBottomCnst;
@property (nonatomic, readonly) UIButton *startButton;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILayoutGuide *trailingWhitespace;

- (void).cxx_destruct;
- (id)_createLandscapeConstraintsPhone;
- (id)_createPadConstraints;
- (id)_createPortraitConstraintsPhone;
- (void)_invalidateButton;
- (void)_invalidateConstraints;
- (void)_updateButtonIfNeeded;
- (id)buttonFont;
- (id)buttonTitle;
- (void)commonInit;
- (id)constraints;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)descriptionLabel;
- (id)descriptionText;
- (id)iconTopCnst;
- (id)iconView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutStyle;
- (id)leadingWhitespace;
- (id)middleWhitespace;
- (void)setButtonFont:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setIconTopCnst:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setStartBottomCnst:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startBottomCnst;
- (id)startButton;
- (void)tintColorDidChange;
- (id)title;
- (id)titleLabel;
- (id)trailingWhitespace;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
