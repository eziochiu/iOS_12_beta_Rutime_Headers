/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupFooterView : PKTableFooterView {
    long long  _context;
    UIButton * _continueButton;
    bool  _forceShowSetupLaterButton;
    bool  _isBuddyiPad;
    UIButton * _manualEntryButton;
    UILabel * _notificationText;
    UIButton * _setupLaterButton;
    UIButton * _skipCardButton;
}

@property (nonatomic) long long context;
@property (nonatomic) bool forceShowSetupLaterButton;
@property (nonatomic, retain) UIButton *manualEntryButton;
@property (nonatomic, retain) UILabel *notificationText;
@property (nonatomic, retain) UIButton *setupLaterButton;
@property (nonatomic, retain) UIButton *skipCardButton;

- (void).cxx_destruct;
- (void)_createSetupLaterButton;
- (struct CGSize { double x1; double x2; })_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })_sizeForLabel:(id)arg1 maxText:(id)arg2 constrainedToSize:(struct CGSize { double x1; double x2; })arg3;
- (long long)context;
- (bool)forceShowSetupLaterButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2;
- (void)layoutSubviews;
- (id)manualEntryButton;
- (id)notificationText;
- (void)setButtonsEnabled:(bool)arg1;
- (void)setContext:(long long)arg1;
- (void)setForceShowSetupLaterButton:(bool)arg1;
- (void)setManualEntryButton:(id)arg1;
- (void)setNotificationText:(id)arg1;
- (void)setSetupLaterButton:(id)arg1;
- (void)setSkipCardButton:(id)arg1;
- (id)setupLaterButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)skipCardButton;

@end
