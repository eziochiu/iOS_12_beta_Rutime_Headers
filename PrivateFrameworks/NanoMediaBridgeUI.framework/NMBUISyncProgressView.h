/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
 */

@interface NMBUISyncProgressView : UIView {
    UIVisualEffectView * _backgroundView;
    UIStackView * _progressContainerView;
    UIActivityIndicatorView * _progressIndicator;
    UILabel * _progressTextLabel;
    UIProgressView * _progressView;
    bool  _shouldShowProgressDetails;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateWithShouldShowProgressBar:(bool)arg1 progress:(float)arg2 progressText:(id)arg3;

@end
