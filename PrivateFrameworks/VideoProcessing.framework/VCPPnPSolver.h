/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPPnPSolver : NSObject {
    float * _alphas;
    float  _cameraOrientation;
    float  _controlPointsCamera;
    float  _controlPointsWorld;
    float  _fu;
    float  _fv;
    int  _numPoints;
    const float * _points2D;
    const float * _points3D;
    float * _points3DCamera;
    const float * _pointsImage;
    const float * _pointsWorld;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pose;
    float  _uc;
    float  _vc;
}

@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;

- (int)computeBarycentricCoordinates;
- (void)computeControlPointsCamera:(const float*)arg1 Vt:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg2;
- (int)computeL6x10:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg1 L6x10:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg2;
- (void)computePoints3DCamera;
- (float)computeProjectionError:(float)arg1 T:(float)arg2;
- (void)computeR6x1:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg1;
- (int)computeRT:(float)arg1 T:(float)arg2;
- (int)computeSVDVt:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg1 Vt:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg2;
- (int)configureGaussNewton:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg1 R6x1:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg2 betas:(float)arg3 jacobian:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg4 residual:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg5;
- (int)correctSigns;
- (void)dealloc;
- (int)estimateBetasN1:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg1 R6x1:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg2 betas:(float*)arg3;
- (int)estimateBetasN2:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg1 R6x1:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg2 betas:(float*)arg3;
- (int)estimateBetasN3:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg1 R6x1:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg2 betas:(float*)arg3;
- (int)estimateExtrinsicsWith:(const float*)arg1 andPoints3D:(const float*)arg2 andNumPoints:(int)arg3;
- (int)estimatePose:(float*)arg1;
- (int)estimateRT:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg1 betas:(const float*)arg2 R:(float)arg3 T:(float)arg4 projectionError:(float*)arg5;
- (int)getControlPoints;
- (id)initWithFocalLengthInPixels:(float)arg1 principalPoint:(struct CGPoint { double x1; double x2; })arg2 cameraTowardsPositiveZ:(bool)arg3;
- (int)optimizeBetas:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg1 R6x1:(struct Matrix<float, 0, 0> { float *x1; unsigned long long x2; unsigned int x3; unsigned int x4; }*)arg2 betas:(float)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (void)setPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
