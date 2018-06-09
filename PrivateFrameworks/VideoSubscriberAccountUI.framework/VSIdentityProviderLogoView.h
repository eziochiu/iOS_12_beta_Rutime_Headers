/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSIdentityProviderLogoView : UIView {
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIImage *logo;
@property (nonatomic, readonly) double marginLength;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredImageSize;

- (void).cxx_destruct;
- (double)_height;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageViewFrame;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)logo;
- (double)marginLength;
- (struct CGSize { double x1; double x2; })preferredImageSize;
- (void)setImageView:(id)arg1;
- (void)setLogo:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
