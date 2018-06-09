/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFAutomaticPasswordExplanationView : UIView {
    UILayoutGuide * _contentLayoutGuide;
    NSLayoutConstraint * _contentLayoutGuideBottomConstraint;
    UILabel * _explanationLabel;
    bool  _isPad;
    long long  _keyboardAppearance;
    long long  _keyboardType;
    NSLayoutConstraint * _narrowContentLeadingConstraint;
    NSLayoutConstraint * _narrowContentTrailingConstraint;
    UILabel * _passwordRetrievalExpalantionLabel;
    bool  _requiresWideAppearance;
    UIScrollView * _scrollView;
    UILayoutGuide * _scrollableContentCenterLayoutGuide;
    UIView * _scrollableContentView;
    NSLayoutConstraint * _strongPasswordButtonHeightConstraint;
    NSLayoutConstraint * _strongPasswordButtonWidthConstraint;
    NSLayoutConstraint * _useCustomPasswordBaselineToBottomConstraint;
    UIButton * _useCustomPasswordButton;
    NSLayoutConstraint * _useCustomPasswordButtonWidthConstraint;
    UIButton * _useStrongPasswordButton;
    NSLayoutConstraint * _wideContentLeadingConstraint;
    double  _wideContentMaximumPadding;
    NSLayoutConstraint * _wideContentTrailingConstraint;
}

@property (nonatomic, readonly) UILabel *explanationLabel;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic, readonly) UILabel *passwordRetrievalExpalantionLabel;
@property (nonatomic, readonly) UIButton *useCustomPasswordButton;
@property (nonatomic, readonly) UIButton *useStrongPasswordButton;

- (void).cxx_destruct;
- (void)_createLayoutConstraints;
- (void)_createSubviews;
- (void)_updateContentLayoutGuideBottomConstraint;
- (void)_updateMaximumPadding;
- (void)_updateStrongPasswordHeightConstraint;
- (void)_updateTextAndButtonColor;
- (void)_updateUseCustomPasswordBaselineToBottomConstraint;
- (void)_updateWideAppearanceRequirement;
- (id)explanationLabel;
- (id)initWithKeyboardType:(long long)arg1;
- (long long)keyboardAppearance;
- (void)layoutSubviews;
- (id)passwordRetrievalExpalantionLabel;
- (void)safeAreaInsetsDidChange;
- (void)setKeyboardAppearance:(long long)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;
- (id)useCustomPasswordButton;
- (id)useStrongPasswordButton;

@end
