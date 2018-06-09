/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPPriorityAnalysis : NSObject {
    float  _detectedLandMarks;
    float  _faceBounds;
    struct LandmarkDetector { int x1; int x2; int x3; int x4; int x5; int x6; int x7; bool x8; float *x9; float *x10; float *x11; int *x12; struct ZPoint {} *x13; struct RegressionTree {} *x14; int (*x15)(); } * _landmarkDetector;
    NSMutableArray * _mouthRatioArray;
    int  _rotationAngle;
    struct Rotator { struct __CVPixelBufferPool {} *x1; int x2; int x3; int x4; struct OpaqueVTImageRotationSession {} *x5; } * _rotator;
    float  _smoothedMAD;
}

+ (id)priorityAnalysis;

- (void).cxx_destruct;
- (int)calculateMADofAspectRatio:(struct __CVBuffer { }*)arg1;
- (int)calculatePriorityScore:(float*)arg1 ofPixelBuffer:(struct __CVBuffer { }*)arg2 withMetadata:(id)arg3;
- (void)dealloc;
- (void)detectLandmark:(float*)arg1 ofImage:(char *)arg2 withWidth:(unsigned int)arg3 height:(unsigned int)arg4 stride:(unsigned int)arg5 faceBounds:(float*)arg6 andPreviousResult:(float*)arg7;
- (id)init;
- (void)parseFaceBoundsWithMetadata:(id)arg1 inPixelBuffer:(struct __CVBuffer { }*)arg2;

@end
