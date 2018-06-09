/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupTableViewCell : PKTableViewCell {
    UILabel * _betaLabel;
    bool  _showBetaBadge;
    UIImageView * _thumbnailImageView;
}

@property (nonatomic) bool showBetaBadge;
@property (nonatomic, readonly) UIImageView *thumbnailImageView;

+ (struct CGSize { double x1; double x2; })defaultImageViewSize;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setShowBetaBadge:(bool)arg1;
- (bool)showBetaBadge;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailImageView;

@end
