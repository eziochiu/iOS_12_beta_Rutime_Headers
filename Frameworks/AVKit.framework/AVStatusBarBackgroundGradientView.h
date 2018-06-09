/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVStatusBarBackgroundGradientView : UIView {
    double  _gradientOpacity;
}

@property (nonatomic) double gradientOpacity;

+ (Class)layerClass;

- (double)gradientOpacity;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientOpacity:(double)arg1;

@end
