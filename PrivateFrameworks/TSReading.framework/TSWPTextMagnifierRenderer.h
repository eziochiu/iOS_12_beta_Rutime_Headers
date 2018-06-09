/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPTextMagnifierRenderer : UIView {
    int  _autoscrollDirections;
    CALayer * _canvasLayer;
    <TSWPTextMagnifierRendererDelegate> * _delegate;
    CALayer * _overlayLayer;
    CALayer * _underlayLayer;
}

@property (nonatomic) int autoscrollDirections;
@property (nonatomic) <TSWPTextMagnifierRendererDelegate> *delegate;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (int)autoscrollDirections;
- (void)canvasNeedsDisplay;
- (void)dealloc;
- (id)delegate;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)p_createChildLayer;
- (void)setAutoscrollDirections:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplay;
- (void)tearDown;

@end
