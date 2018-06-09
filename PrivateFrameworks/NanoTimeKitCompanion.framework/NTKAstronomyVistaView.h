/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyVistaView : UIView <NUAnimationObserver> {
    NSMutableSet * _activeContentsAnimations;
    unsigned long long  _currentTab;
    CLKDevice * _device;
    bool  _drawRectEnabled;
    unsigned int  _isDrawRectEnabled;
    unsigned int  _isSupplemental;
    <NTKAstronomyVistaViewObserver> * _observer;
    NUView * _viewer;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (getter=isDrawRectEnabled, nonatomic) bool drawRectEnabled;
@property (nonatomic) <NTKAstronomyVistaViewObserver> *observer;
@property (nonatomic, retain) NUScene *scene;

- (void).cxx_destruct;
- (void)cleanupAfterZoom;
- (void)dealloc;
- (id)device;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2;
- (bool)isDrawRectEnabled;
- (void)layoutSubviews;
- (id)observer;
- (void)prepareToZoom;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (id)rotatable:(unsigned long long)arg1;
- (id)scene;
- (void)setDrawRectEnabled:(bool)arg1;
- (void)setMinFrameInterval:(int)arg1;
- (void)setObserver:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setScene:(id)arg1;
- (void)setVista:(unsigned long long)arg1 supplemental:(bool)arg2 animated:(bool)arg3;
- (void)setZoomFraction:(float)arg1 targetDiameter:(float)arg2;
- (void)startAnimation;
- (void)stopAnimation;
- (void)universeAnimationFinished:(id)arg1;
- (void)updateSunLocationForDate:(id)arg1 animated:(bool)arg2;
- (unsigned long long)vista;

@end
