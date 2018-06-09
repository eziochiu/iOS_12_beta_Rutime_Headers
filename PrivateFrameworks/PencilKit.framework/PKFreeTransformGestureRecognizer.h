/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKFreeTransformGestureRecognizer : UIGestureRecognizer {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _accumulatedTransform;
    NSMapTable * _actualTouchStartLocations;
    bool  _allowSingleTouchDrag;
    unsigned long long  _allowedPanEdges;
    bool  _axisAligned;
    bool  _canBegin;
    double  _cancelThreshold;
    double  _deltaScale;
    bool  _isPanning;
    bool  _isScaling;
    double  _maxScale;
    double  _minScale;
    double  _previousScale;
    double  _scaleDamping;
    double  _scaleThreshold;
    double  _startThreshold;
    NSMapTable * _touchStartLocations;
    NSMutableOrderedSet * _touches;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } accumulatedTransform;
@property (nonatomic, retain) NSMapTable *actualTouchStartLocations;
@property (nonatomic) bool allowSingleTouchDrag;
@property (nonatomic) unsigned long long allowedPanEdges;
@property (nonatomic) bool axisAligned;
@property (nonatomic) bool canBegin;
@property (nonatomic) double cancelThreshold;
@property (nonatomic) double deltaScale;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } freeTransform;
@property (nonatomic) bool isPanning;
@property (nonatomic) bool isScaling;
@property (nonatomic) double maxScale;
@property (nonatomic) double minScale;
@property (nonatomic) double previousScale;
@property (nonatomic, readonly) double scale;
@property (nonatomic) double scaleDamping;
@property (nonatomic, readonly) bool scaleIsGrowing;
@property (nonatomic, readonly) bool scaleIsShrinking;
@property (nonatomic) double scaleThreshold;
@property (nonatomic) double startThreshold;
@property (nonatomic, retain) NSMapTable *touchStartLocations;
@property (nonatomic, readonly) NSMutableOrderedSet *touches;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } unscaledFreeTransform;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })accumulatedTransform;
- (id)actualTouchStartLocations;
- (bool)allowSingleTouchDrag;
- (unsigned long long)allowedPanEdges;
- (bool)axisAligned;
- (bool)canBegin;
- (double)cancelThreshold;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })clampTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 minScale:(double)arg2 maxScale:(double)arg3;
- (void)clearTouches;
- (double)deltaScale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })freeTransform;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isPanning;
- (bool)isScaling;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)maxScale;
- (double)minScale;
- (double)previousScale;
- (void)reset;
- (void)resetAndAccumulateTransform;
- (void)resetStartingTouches;
- (double)scale;
- (double)scaleDamping;
- (bool)scaleIsGrowing;
- (bool)scaleIsShrinking;
- (double)scaleThreshold;
- (void)setAccumulatedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setActualTouchStartLocations:(id)arg1;
- (void)setAllowSingleTouchDrag:(bool)arg1;
- (void)setAllowedPanEdges:(unsigned long long)arg1;
- (void)setAxisAligned:(bool)arg1;
- (void)setCanBegin:(bool)arg1;
- (void)setCancelThreshold:(double)arg1;
- (void)setDeltaScale:(double)arg1;
- (void)setIsPanning:(bool)arg1;
- (void)setIsScaling:(bool)arg1;
- (void)setMaxScale:(double)arg1;
- (void)setMinScale:(double)arg1;
- (void)setPreviousScale:(double)arg1;
- (void)setScaleDamping:(double)arg1;
- (void)setScaleThreshold:(double)arg1;
- (void)setStartThreshold:(double)arg1;
- (void)setTouchStartLocations:(id)arg1;
- (double)startThreshold;
- (id)touchStartLocations;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 rejectExcessTouches:(bool)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)touchesMovedPastScaleThreshold:(double)arg1;
- (bool)touchesMovedPastThreshold:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })unscaledFreeTransform;

@end
