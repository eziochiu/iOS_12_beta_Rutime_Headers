/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIRotationGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorSceneReferencePoint;
    long long  _currentRotationCount;
    double  _currentTouchAngle;
    double  _initialTouchAngle;
    double  _initialTouchDistance;
    double  _lastTouchTime;
    float  _postRecognitionWeight;
    float  _preRecognitionWeight;
    double  _previousVelocity;
    UITouch * _touches;
    id  _transformAnalyzer;
    double  _velocity;
}

@property (nonatomic) double rotation;
@property (nonatomic, readonly) double velocity;

+ (bool)_shouldDefaultToTouches;

- (void).cxx_destruct;
- (double)_postRecognitionWeight;
- (double)_preRecognitionWeight;
- (void)_resetGestureRecognizer;
- (void)_setPostRecognitionWeight:(double)arg1;
- (void)_setPreRecognitionWeight:(double)arg1;
- (void)_updateTransformAnalyzerWeights;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)rotation;
- (void)setRotation:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)velocity;

@end
