/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKStopwatchButton : UIControl {
    CLKDevice * _device;
    UIColor * _glyphBackgroundColor;
    UIColor * _glyphColor;
    NTKColoringImageView * _glyphView;
    UIView * _innerView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _touchEdgeInsets;
}

@property (nonatomic, retain) UIColor *glyphBackgroundColor;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchEdgeInsets;

- (void).cxx_destruct;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)glyphBackgroundColor;
- (id)glyphColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setGlyphBackgroundColor:(id)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setTouchEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchEdgeInsets;

@end
