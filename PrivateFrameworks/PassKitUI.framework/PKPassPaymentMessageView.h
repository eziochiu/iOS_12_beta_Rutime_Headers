/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentMessageView : PKPassFooterContentView {
    UIImageView * _alertImageView;
    UILabel * _bodyLabel;
    UIView * _bottomRule;
    UIButton * _button;
    UILabel * _titleLabel;
}

- (void).cxx_destruct;
- (id)_actionButton;
- (id)_alertImage;
- (id)_bodyLabel;
- (id)_bottomRule;
- (void)_layoutCompactSubviews;
- (id)_titleLabel;
- (void)dealloc;
- (id)initWithPass:(id)arg1 title:(id)arg2 body:(id)arg3;
- (id)initWithPass:(id)arg1 title:(id)arg2 body:(id)arg3 buttonTitle:(id)arg4 action:(SEL)arg5 isImportant:(bool)arg6;
- (void)layoutSubviews;

@end
