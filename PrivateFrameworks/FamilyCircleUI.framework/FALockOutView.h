/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FALockOutView : UIView {
    NSString * _backdropState;
    FACAPackageView * _backdropView;
    UIButton * _bottomButton;
    FAButtonSpecification * _bottomButtonSpecification;
    UIStackView * _bottomStackView;
    <FADigitalHealthDelegate> * _delegate;
    bool  _forSnapshot;
    NSString * _hourglassState;
    FACAPackageView * _hourglassView;
    UILabel * _messageLabel;
    UIStackView * _middleStackView;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *backdropState;
@property (nonatomic, readonly) UIButton *bottomButton;
@property (nonatomic, copy) FAButtonSpecification *bottomButtonSpecification;
@property (nonatomic) <FADigitalHealthDelegate> *delegate;
@property (getter=isForSnapshot, nonatomic, readonly) bool forSnapshot;
@property (nonatomic) double hourglassAlpha;
@property (nonatomic, copy) NSString *hourglassState;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_addBottomButton;
- (void)_addHourglassView;
- (void)_addMessageLabel;
- (void)_addTitleLabel;
- (void)_bottomButtonTapped:(id)arg1;
- (id)_hourglassPackageDescription;
- (id)_hourglassView;
- (id)_newStackView;
- (void)_sendDelegateAction:(long long)arg1 parameters:(id)arg2;
- (void)_setup;
- (void)_setupBackdrops;
- (void)_setupBottomStackView;
- (void)_setupConstraints;
- (void)_setupMiddleStackView;
- (id)_timesUpView;
- (id)backdropState;
- (id)bottomButton;
- (id)bottomButtonSpecification;
- (id)defaultButtonColor;
- (id)delegate;
- (double)hourglassAlpha;
- (id)hourglassState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSnapshot:(bool)arg2;
- (bool)isForSnapshot;
- (id)message;
- (id)messageFont;
- (id)messageLabel;
- (void)setBackdropState:(id)arg1;
- (void)setBackdropState:(id)arg1 animated:(bool)arg2;
- (void)setBackdropState:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setBottomButtonSpecification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHourglassAlpha:(double)arg1;
- (void)setHourglassState:(id)arg1;
- (void)setHourglassState:(id)arg1 animated:(bool)arg2;
- (void)setHourglassState:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleFont;
- (id)titleLabel;

@end
