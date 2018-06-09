/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemITunesPassLockup : UIControl {
    SKUIClientContext * _clientContext;
    SKUIITunesPassConfiguration * _configuration;
    UILabel * _descriptionLabel;
    UIView * _horizontalSeparatorView;
    UIImageView * _iconImageView;
    UILabel * _titleLabel;
}

- (void).cxx_destruct;
- (id)_attributedDescriptionString;
- (id)initWithITunesPassConfiguration:(id)arg1 clientContext:(id)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
