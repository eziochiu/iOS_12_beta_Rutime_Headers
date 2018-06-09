/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSNavigationAlertView : UIView {
    CPSNavigationAlertButtonView * _buttonView;
    UIImageView * _imageView;
    CPNavigationAlert * _navigationAlert;
    CPSNavigationAlertProgressView * _progressView;
    CPSAbridgableLabel * _subtitleLabel;
    CPSAbridgableLabel * _titleLabel;
}

@property (nonatomic, retain) CPSNavigationAlertButtonView *buttonView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, readonly) CPNavigationAlert *navigationAlert;
@property (nonatomic, retain) CPSNavigationAlertProgressView *progressView;
@property (nonatomic, retain) CPSAbridgableLabel *subtitleLabel;
@property (nonatomic, retain) CPSAbridgableLabel *titleLabel;

+ (struct CGSize { double x1; double x2; })sizeForNavigationAlert:(id)arg1;

- (void).cxx_destruct;
- (id)buttonView;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 navigationAlert:(id)arg2 templateDelegate:(id)arg3 buttonDelegate:(id)arg4;
- (id)navigationAlert;
- (id)progressView;
- (void)setButtonView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)startAnimating;
- (id)subtitleLabel;
- (id)titleLabel;

@end
