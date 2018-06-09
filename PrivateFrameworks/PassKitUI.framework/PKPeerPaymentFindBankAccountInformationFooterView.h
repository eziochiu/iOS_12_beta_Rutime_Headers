/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentFindBankAccountInformationFooterView : PKTableFooterView {
    UIButton * _accountInformationButton;
}

@property (nonatomic, retain) UIButton *accountInformationButton;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize { double x1; double x2; })arg2;
- (id)accountInformationButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccountInformationButton:(id)arg1;
- (void)setButtonsEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
