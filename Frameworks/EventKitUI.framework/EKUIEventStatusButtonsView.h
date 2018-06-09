/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIEventStatusButtonsView : UIView {
    NSArray * _actions;
    double  _baselineFromBoundsTop;
    NSArray * _buttons;
    double  _buttonsCharge;
    NSArray * _currentConstraints;
    <EKUIEventStatusButtonsViewDelegate> * _delegate;
    bool  _disableButtonHighlights;
    UIFont * _font;
    bool  _forcesSingleButtonToCenter;
    NSLayoutConstraint * _leadingMarginConstraint;
    double  _outsideMargin;
    long long  _selectedAction;
    bool  _shouldUseVerticalLayout;
    long long  _textSizeMode;
    NSLayoutConstraint * _trailingMarginConstraint;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic) double buttonsCharge;
@property (nonatomic, readonly) UIButton *centerButton;
@property (nonatomic) <EKUIEventStatusButtonsViewDelegate> *delegate;
@property (nonatomic) bool disableButtonHighlights;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic) long long selectedAction;
@property (nonatomic) bool shouldUseVerticalLayout;
@property (nonatomic) long long textSizeMode;

+ (id)logHandle;

- (void).cxx_destruct;
- (long long)_actionForButton:(id)arg1;
- (id)_buttonForAction:(long long)arg1;
- (long long)_buttonIndexForAction:(long long)arg1;
- (id)_buttonTitleForAction:(long long)arg1;
- (double)_defaultFontSizeForButtons;
- (id)_fontWithSize:(double)arg1 selected:(bool)arg2;
- (id)_horizontalConstraintStringForMiddleButtonsStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 resultingViews:(id)arg3;
- (double)_minimumFontSize;
- (id)_newToolbarButton;
- (void)_setupButtons;
- (void)_setupConstraints;
- (bool)_shouldCenterButton;
- (void)_updateButtonFontsWithSize:(double)arg1;
- (double)_updateFontSizesFromDelegate;
- (void)_updateSelectionToButton:(id)arg1;
- (id)actions;
- (double)baselineFromBoundsTop;
- (void)buttonTapped:(id)arg1;
- (double)buttonsCharge;
- (id)centerButton;
- (id)delegate;
- (bool)disableButtonHighlights;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 actions:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 actions:(id)arg2 delegate:(id)arg3 centerSingleButton:(bool)arg4;
- (void)layoutSubviews;
- (long long)selectedAction;
- (void)setActions:(id)arg1;
- (void)setButtonsCharge:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableButtonHighlights:(bool)arg1;
- (void)setSelectedAction:(long long)arg1;
- (void)setShouldUseVerticalLayout:(bool)arg1;
- (void)setTextSizeMode:(long long)arg1;
- (bool)shouldUseVerticalLayout;
- (long long)textSizeMode;
- (void)updateConstraints;
- (void)updateFonts;
- (void)updateForMiniBarState:(bool)arg1;

@end
