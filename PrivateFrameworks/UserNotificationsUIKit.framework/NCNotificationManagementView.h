/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationManagementView : UIView {
    UIView * _bottomSeparator;
    NCNotificationManagementBlueButton * _deliveryButton;
    UILabel * _explanation;
    UIImageView * _icon;
    NCNotificationManagementBlueButton * _offButton;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIView * _topSeparator;
}

@property (nonatomic, readonly) NCNotificationManagementBlueButton *deliveryButton;
@property (nonatomic, readonly) NCNotificationManagementBlueButton *offButton;

- (void).cxx_destruct;
- (void)_configureDeliveryButtonIfNeccessary:(bool)arg1;
- (void)_configureExplanationIfNeccessary:(bool)arg1;
- (void)_configureIconIfNeccessary:(id)arg1;
- (void)_configureOffButtonIfNeccessary;
- (void)_configureSubtitleIfNeccessary:(id)arg1;
- (void)_configureTitleIfNeccessary:(id)arg1;
- (void)_configureTopSeparatorIfNeccessary;
- (struct CGSize { double x1; double x2; })_explanationSizeForPlatterWidth:(double)arg1;
- (id)_newSeparatorView;
- (double)_separatorHeight;
- (struct CGSize { double x1; double x2; })_subtitleSizeForPlatterWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })_titleSizeForPlatterWidth:(double)arg1;
- (id)deliveryButton;
- (id)initWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3 deliveredQuietly:(bool)arg4;
- (void)layoutSubviews;
- (id)offButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
