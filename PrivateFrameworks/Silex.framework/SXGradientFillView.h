/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXGradientFillView : SXFillView {
    SXClippingView * _clippingView;
    SXLinearGradientFill * _gradientFill;
    SXGradientView * _gradientView;
}

@property (nonatomic, readonly) SXClippingView *clippingView;
@property (nonatomic, readonly) SXLinearGradientFill *gradientFill;
@property (nonatomic, readonly) SXGradientView *gradientView;

- (void).cxx_destruct;
- (id)clippingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fillFrameWithBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)gradientFill;
- (id)gradientView;
- (id)initWithGradientFill:(id)arg1 gradientFactory:(id)arg2;
- (void)layoutSubviews;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
