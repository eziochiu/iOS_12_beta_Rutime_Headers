/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMInvitationBannerView : UIView {
    PXRoundImageView * _avatarImageView;
    UIVisualEffectView * _blurView;
    UILabel * _subtitle1Label;
    UILabel * _subtitle2Label;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImage *avatarImage;
@property (nonatomic, copy) NSString *subtitle1;
@property (nonatomic, copy) NSString *subtitle2;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (id)avatarImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAvatarImage:(id)arg1;
- (void)setSubtitle1:(id)arg1;
- (void)setSubtitle2:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle1;
- (id)subtitle2;
- (id)title;

@end
