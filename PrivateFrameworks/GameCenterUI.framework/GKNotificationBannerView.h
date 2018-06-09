/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKNotificationBannerView : UIView {
    UILabel * _actionLabel;
    UIView * _centeringView;
    id /* block */  _completionHandler;
    double  _duration;
    UIImageView * _imageView;
    UILabel * _messageLabel;
    UILabel * _messageLabel2;
    double  _preferredWidthPad;
    UILabel * _titleLabel;
    id /* block */  _touchHandler;
}

@property (nonatomic, retain) UILabel *actionLabel;
@property (nonatomic, retain) UIView *centeringView;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) double duration;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) UILabel *messageLabel2;
@property (nonatomic, readonly) double preferredWidthPad;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) id /* block */ touchHandler;

+ (bool)_preventsAppearanceProxyCustomization;

- (void)_wasTouched:(id)arg1;
- (id)actionLabel;
- (void)awakeFromNib;
- (void)callCompletionHandler;
- (id)centeringView;
- (id /* block */)completionHandler;
- (void)dealloc;
- (double)duration;
- (void)fadeInWithCompletionHandler:(id /* block */)arg1;
- (void)fadeOutQuickly:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)hideBanner;
- (id)imageView;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 imageView:(id)arg2 message:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 player:(id)arg2 message:(id)arg3;
- (void)layoutSubviews;
- (id)messageLabel;
- (id)messageLabel2;
- (double)preferredWidthPad;
- (void)setActionLabel:(id)arg1;
- (void)setCenteringView:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setMessageLabel2:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTouchHandler:(id /* block */)arg1;
- (void)showWithCompletionHandler:(id /* block */)arg1;
- (void)showWithTouchHandler:(id /* block */)arg1;
- (id)titleLabel;
- (id /* block */)touchHandler;

@end
