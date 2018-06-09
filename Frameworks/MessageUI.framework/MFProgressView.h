/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFProgressView : UIView {
    <MFProgressViewDelegate> * _delegate;
    double  _diameter;
    CADisplayLink * _displayLink;
    double  _displayedProgress;
    NSTimer * _simulateActivityTimer;
    double  _stroke;
    double  _targetProgress;
    UIColor * _tintColor;
}

@property (nonatomic) <MFProgressViewDelegate> *delegate;
@property (nonatomic, retain) UIColor *tintColor;

+ (id)progressViewWithDefaultStyleStrokeAndRect;

- (void)_adjustProgress;
- (void)_drawCircleWithCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2;
- (void)_drawProgressInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_drawWedgeWithCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2;
- (void)_invalidateDisplayLink;
- (void)_invalidateSimulationTimer;
- (bool)_isValidCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_onDisplayLink:(id)arg1;
- (void)_stopSimulationIfCompleted;
- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithProgressViewStyle:(int)arg1 stroke:(double)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)progressDidFinish;
- (void)setDelegate:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setTintColor:(id)arg1;
- (void)simulateActivity;
- (id)tintColor;

@end
