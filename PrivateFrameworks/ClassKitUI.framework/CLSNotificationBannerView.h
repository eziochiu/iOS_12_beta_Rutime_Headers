/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
 */

@interface CLSNotificationBannerView : UIView {
    id /* block */  _completionHandler;
    double  _duration;
    UIImageView * _imageView;
    UILabel * _messageLabel;
    double  _preferredWidthPad;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) double duration;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, readonly) double preferredWidthPad;
@property (nonatomic, retain) UILabel *titleLabel;

+ (bool)_preventsAppearanceProxyCustomization;
+ (id)bannerMessageAttributes;
+ (id)bannerTitleAttributes;
+ (id)bundle;

- (void).cxx_destruct;
- (void)callCompletionHandler;
- (id /* block */)completionHandler;
- (double)duration;
- (void)hideBanner;
- (id)imageView;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (void)layoutSubviews;
- (id)messageLabel;
- (double)preferredWidthPad;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)showWithCompletionHandler:(id /* block */)arg1;
- (id)titleLabel;

@end