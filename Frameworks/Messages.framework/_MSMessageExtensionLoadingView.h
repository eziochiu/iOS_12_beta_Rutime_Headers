/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSMessageExtensionLoadingView : UIView {
    UIImageView * _appIcon;
    UILabel * _appNameLabel;
    UIActivityIndicatorView * _spinnerView;
}

@property (nonatomic, retain) UIImageView *appIcon;
@property (nonatomic, retain) UILabel *appNameLabel;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerView;

- (void).cxx_destruct;
- (id)appIcon;
- (id)appNameLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 datasource:(id)arg2;
- (void)layoutSubviews;
- (void)setAppIcon:(id)arg1;
- (void)setAppNameLabel:(id)arg1;
- (void)setSpinnerView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spinnerView;

@end
