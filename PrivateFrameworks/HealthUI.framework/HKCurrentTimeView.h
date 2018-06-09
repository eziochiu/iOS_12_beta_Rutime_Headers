/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCurrentTimeView : UIView {
    UIButton * _currentTimeButton;
    bool  _currentTimeButtonEnabled;
    NSString * _currentTimeString;
    <HKCurrentTimeViewDelegate> * _delegate;
    bool  _disableControls;
    HKCurrentTimeChevronButton * _nextTimeIndexButton;
    HKCurrentTimeChevronButton * _previousTimeIndexButton;
}

@property (nonatomic) bool currentTimeButtonEnabled;
@property (nonatomic, copy) NSString *currentTimeString;
@property (nonatomic) <HKCurrentTimeViewDelegate> *delegate;
@property (nonatomic) bool disableControls;
@property (nonatomic) bool nextTimeButtonEnabled;
@property (nonatomic) bool previousTimeButtonEnabled;

- (void).cxx_destruct;
- (double)_backgroundAlpha:(bool)arg1;
- (id)_backgroundColor:(bool)arg1;
- (id)_colorIfForeground:(bool)arg1 enabled:(bool)arg2;
- (double)_currentTimeButtonBaselineToBottom;
- (double)_currentTimeButtonBaselineToTop;
- (id)_currentTimeButtonFont;
- (double)_foregroundAlpha:(bool)arg1;
- (id)_foregroundColor:(bool)arg1;
- (void)_handleContentSizeCategoryDidChange;
- (id)_tintColor:(bool)arg1;
- (bool)currentTimeButtonEnabled;
- (void)currentTimeButtonTapped:(id)arg1;
- (id)currentTimeString;
- (id)delegate;
- (bool)disableControls;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithWideHorizontalMargin:(bool)arg1;
- (bool)nextTimeButtonEnabled;
- (void)nextTimeIndexButtonTapped:(id)arg1;
- (bool)previousTimeButtonEnabled;
- (void)previousTimeIndexButtonTapped:(id)arg1;
- (void)setCurrentTimeButtonEnabled:(bool)arg1;
- (void)setCurrentTimeString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableControls:(bool)arg1;
- (void)setNextTimeButtonEnabled:(bool)arg1;
- (void)setPreviousTimeButtonEnabled:(bool)arg1;
- (void)setupViewWithWideHorizontalMargin:(bool)arg1;

@end
