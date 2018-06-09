/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPanGestureRecognizer : UIPanGestureRecognizer {
    bool  _didForcePress;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationOfFirstTouch;
}

@property (nonatomic) bool didForcePress;
@property (nonatomic) struct CGPoint { double x1; double x2; } locationOfFirstTouch;

- (bool)didForcePress;
- (struct CGPoint { double x1; double x2; })locationOfFirstTouch;
- (struct CGPoint { double x1; double x2; })locationOfFirstTouchInView:(id)arg1;
- (void)reset;
- (void)setDidForcePress:(bool)arg1;
- (void)setLocationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
