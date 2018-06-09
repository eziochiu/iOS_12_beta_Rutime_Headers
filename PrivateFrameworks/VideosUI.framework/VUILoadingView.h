/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILoadingView : UIView {
    UIActivityIndicatorView * _indicatorView;
    VUILabel * _loadingLabel;
}

@property (nonatomic, retain) UIActivityIndicatorView *indicatorView;
@property (nonatomic, retain) VUILabel *loadingLabel;

- (void).cxx_destruct;
- (id)indicatorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 loadingString:(id)arg2;
- (void)layoutSubviews;
- (id)loadingLabel;
- (void)setIndicatorView:(id)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)startTimer;

@end
