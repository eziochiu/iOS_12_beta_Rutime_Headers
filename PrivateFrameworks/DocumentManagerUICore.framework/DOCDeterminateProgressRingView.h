/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCDeterminateProgressRingView : UIView {
    bool  _canShowStopButton;
    double  _progress;
    CALayer * _squareLayer;
}

@property (nonatomic) bool canShowStopButton;
@property (nonatomic) double progress;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateShapePath;
- (bool)canShowStopButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (void)setCanShowStopButton:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setTintColor:(id)arg1;

@end
