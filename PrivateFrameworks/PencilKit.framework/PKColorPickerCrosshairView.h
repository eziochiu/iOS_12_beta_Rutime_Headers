/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKColorPickerCrosshairView : UIView {
    CALayer * _borderLayer;
    <PKColorPickerCrosshairViewDelegate> * _delegate;
    bool  _isCircleMode;
    CALayer * _shadowLayer;
}

@property (nonatomic, retain) CALayer *borderLayer;
@property (nonatomic) <PKColorPickerCrosshairViewDelegate> *delegate;
@property (nonatomic) bool isCircleMode;
@property (nonatomic, retain) CALayer *shadowLayer;

- (void).cxx_destruct;
- (id)borderLayer;
- (void)configureBorderLayerForCircleMode:(bool)arg1;
- (void)configureShadowLayerForCircleMode:(bool)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCircleMode;
- (void)layoutSubviews;
- (void)setBorderLayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2 duration:(double)arg3;
- (void)setIsCircleMode:(bool)arg1;
- (void)setIsCircleMode:(bool)arg1 animated:(bool)arg2 duration:(double)arg3;
- (void)setShadowLayer:(id)arg1;
- (id)shadowLayer;

@end
