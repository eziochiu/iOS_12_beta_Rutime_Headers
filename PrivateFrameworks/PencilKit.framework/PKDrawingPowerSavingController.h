/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKDrawingPowerSavingController : NSObject {
    double  _accumulatedMovement;
    double  _currentMovement;
    bool  _isDrawingWithMarkerOrEraser;
    bool  _isDrawingWithPencil;
    double  _minimumMovementDistanceFinger;
    double  _minimumMovementDistancePencil;
    double  _minimumMovementDistanceTimeout;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__value_; 
        } __end_cap_; 
    }  _movementDistanceHistoryBuffer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousDrawingLocation;
    double  _previousRenderTimestamp;
    bool  _valid;
}

@property (nonatomic) bool isDrawingWithMarkerOrEraser;
@property (nonatomic) bool isDrawingWithPencil;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accumulateMovementForCurrentFrame;
- (double)averageMovementDistance;
- (void)drawingBeganAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawingMovedToLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (void)invalidate;
- (bool)isDrawingWithMarkerOrEraser;
- (bool)isDrawingWithPencil;
- (bool)isValid;
- (void)registerFrameStartTimestamp:(double)arg1;
- (void)setIsDrawingWithMarkerOrEraser:(bool)arg1;
- (void)setIsDrawingWithPencil:(bool)arg1;
- (bool)shouldSkipFrameWithFrameStartTimestamp:(double)arg1 framesAfterStart:(unsigned long long)arg2;

@end
