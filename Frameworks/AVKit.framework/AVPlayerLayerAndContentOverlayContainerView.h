/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerLayerAndContentOverlayContainerView : UIView {
    bool  _canShowStatusBarBackgroundGradientWhenStatusBarVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    UIView * _contentOverlayView;
    __AVPlayerLayerView * _playerLayerView;
    AVStatusBarBackgroundGradientView * _statusBarBackgroundGradientView;
}

@property (nonatomic) bool canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (nonatomic, readonly) __AVPlayerLayerView *playerLayerView;
@property (nonatomic, readonly) AVStatusBarBackgroundGradientView *statusBarBackgroundGradientView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForStatusBarBackgroundGradientView;
- (void)_updateStatusBarBackgroundGradientViewAlpha;
- (bool)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contentOverlayView;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 playerLayerView:(id)arg2;
- (void)layoutSubviews;
- (id)playerLayerView;
- (void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(bool)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)statusBarBackgroundGradientView;

@end
