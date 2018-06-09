/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupDockView : UIView {
    long long  _context;
    PKContinuousButton * _continousButton;
    PKPaymentSetupFooterView * _footerView;
    bool  _isBuddyiPad;
    OBPrivacyLinkController * _privacyLink;
    bool  _requiresAdditionalContinousButtonPadding;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, retain) PKContinuousButton *continousButton;
@property (nonatomic, retain) PKPaymentSetupFooterView *footerView;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLink;
@property (nonatomic) bool requiresAdditionalContinousButtonPadding;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)context;
- (id)continousButton;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2;
- (void)layoutSubviews;
- (id)privacyLink;
- (bool)requiresAdditionalContinousButtonPadding;
- (void)setButtonsEnabled:(bool)arg1;
- (void)setContinousButton:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setPrivacyLink:(id)arg1;
- (void)setRequiresAdditionalContinousButtonPadding:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
