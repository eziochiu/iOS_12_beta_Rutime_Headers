/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLProgressHUD : UIView {
    UIActivityIndicatorView * _activityIndicatorView;
    _UIBackdropView * _backdropView;
    UIImageView * _checkmarkView;
    bool  _isShowing;
    UILabel * _label;
}

- (void)dealloc;
- (void)done;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)showInView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
