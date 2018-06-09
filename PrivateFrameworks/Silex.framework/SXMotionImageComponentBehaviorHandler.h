/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMotionImageComponentBehaviorHandler : SXComponentBehaviorHandler <SXViewportChangeListener> {
    double  _amplitude;
    UIView * _clippingView;
    bool  _horizontal;
    UIView * _motionContentView;
    bool  _vertical;
    unsigned long long  _viewHierarchyIndex;
    bool  _windowed;
    UIInterpolatingMotionEffect * _xMotionEffect;
    UIInterpolatingMotionEffect * _yMotionEffect;
}

@property (nonatomic) double amplitude;
@property (nonatomic, retain) UIView *clippingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool horizontal;
@property (nonatomic, retain) UIView *motionContentView;
@property (readonly) Class superclass;
@property (nonatomic) bool vertical;
@property (nonatomic) unsigned long long viewHierarchyIndex;
@property (nonatomic) bool windowed;
@property (nonatomic, retain) UIInterpolatingMotionEffect *xMotionEffect;
@property (nonatomic, retain) UIInterpolatingMotionEffect *yMotionEffect;

- (void).cxx_destruct;
- (double)amplitude;
- (id)clippingView;
- (void)destroyMotionDetection;
- (void)destroyWithBehaviorController:(id)arg1;
- (bool)horizontal;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (id)motionContentView;
- (void)setAmplitude:(double)arg1;
- (void)setClippingView:(id)arg1;
- (void)setHorizontal:(bool)arg1;
- (void)setMotionContentView:(id)arg1;
- (void)setVertical:(bool)arg1;
- (void)setViewHierarchyIndex:(unsigned long long)arg1;
- (void)setWindowed:(bool)arg1;
- (void)setXMotionEffect:(id)arg1;
- (void)setYMotionEffect:(id)arg1;
- (void)setupMotionDetection;
- (void)setupWithBehaviorController:(id)arg1;
- (void)updateEdgeAntialiasingForViewport:(id)arg1;
- (bool)vertical;
- (unsigned long long)viewHierarchyIndex;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (bool)windowed;
- (id)xMotionEffect;
- (id)yMotionEffect;

@end
