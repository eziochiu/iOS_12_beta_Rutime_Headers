/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKStackedButtonView : UIView {
    UIBlurEffect * _backgroundBlurEffect;
    UIView * _backgroundBlurView;
    NSLayoutConstraint * _backgroundBlurViewLeadingConstraint;
    NSLayoutConstraint * _backgroundBlurViewTrailingConstraint;
    bool  _blurHidden;
    bool  _bottomAdjustsForHomeButtonlessScreen;
    NSLayoutConstraint * _bottomConstraint;
    long long  _buttonMode;
    NSArray * _buttons;
    <HKStackedButtonViewDelegate> * _delegate;
    NSString * _disclaimerText;
    UILabel * _disclaimerTextLabel;
    NSLayoutYAxisAnchor * _firstTopAnchor;
    double  _firstTopConstant;
    long long  _lastButtonMode;
    NSArray * _styles;
    NSArray * _titles;
}

@property (nonatomic, retain) UIBlurEffect *backgroundBlurEffect;
@property (nonatomic, retain) UIView *backgroundBlurView;
@property (nonatomic, retain) NSLayoutConstraint *backgroundBlurViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *backgroundBlurViewTrailingConstraint;
@property (getter=isBlurHidden, nonatomic) bool blurHidden;
@property (nonatomic) bool bottomAdjustsForHomeButtonlessScreen;
@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic) long long buttonMode;
@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic) <HKStackedButtonViewDelegate> *delegate;
@property (nonatomic, copy) NSString *disclaimerText;
@property (nonatomic, retain) UILabel *disclaimerTextLabel;
@property (nonatomic, retain) NSLayoutYAxisAnchor *firstTopAnchor;
@property (nonatomic) double firstTopConstant;
@property (nonatomic) long long lastButtonMode;
@property (nonatomic, copy) NSArray *styles;
@property (nonatomic, copy) NSArray *titles;

+ (double)_buttonSpacingForValue:(double)arg1;
+ (id)_disclaimerTextFont;
+ (double)_disclaimerTextSpacingForValue:(double)arg1;
+ (id)buddyStackedButtonViewWithTitles:(id)arg1 disclaimerText:(id)arg2 delegate:(id)arg3;

- (void).cxx_destruct;
- (void)_assignConstraintsForButtons;
- (id)_createButtons;
- (void)_createViewBottomConstraint;
- (void)_setUpBlurEffect;
- (void)_setUpButtons;
- (void)_setUpDisclaimerText;
- (void)_updateBottomConstraint;
- (void)actionButtonTapped:(id)arg1;
- (void)alignBlurViewHorizontalConstraintsWithView:(id)arg1;
- (id)backgroundBlurEffect;
- (id)backgroundBlurView;
- (id)backgroundBlurViewLeadingConstraint;
- (id)backgroundBlurViewTrailingConstraint;
- (bool)bottomAdjustsForHomeButtonlessScreen;
- (id)bottomConstraint;
- (long long)buttonMode;
- (id)buttons;
- (id)delegate;
- (id)disclaimerText;
- (id)disclaimerTextLabel;
- (id)firstTopAnchor;
- (double)firstTopConstant;
- (id)initWithButtonTitles:(id)arg1 styles:(id)arg2 disclaimerText:(id)arg3 delegate:(id)arg4;
- (bool)isBlurHidden;
- (long long)lastButtonMode;
- (void)setBackgroundBlurEffect:(id)arg1;
- (void)setBackgroundBlurView:(id)arg1;
- (void)setBackgroundBlurViewLeadingConstraint:(id)arg1;
- (void)setBackgroundBlurViewTrailingConstraint:(id)arg1;
- (void)setBlurHidden:(bool)arg1;
- (void)setBottomAdjustsForHomeButtonlessScreen:(bool)arg1;
- (void)setBottomConstraint:(id)arg1;
- (void)setButtonMode:(long long)arg1;
- (void)setButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclaimerText:(id)arg1;
- (void)setDisclaimerTextLabel:(id)arg1;
- (void)setFirstTopAnchor:(id)arg1;
- (void)setFirstTopConstant:(double)arg1;
- (void)setLastButtonMode:(long long)arg1;
- (void)setStyles:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)styles;
- (id)titles;

@end
