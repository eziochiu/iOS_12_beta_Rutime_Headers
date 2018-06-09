/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPFaceShapeModel : NSObject {
    float  _LM2D;
    float  _LM3D;
    float * _asyncBlendshapes;
    float  _asyncExtMat;
    float  _asyncLm2d;
    float * _asyncLmBlendshapes;
    float  _asyncWeights;
    float * _blendShapeDelta;
    int * _boundaryLmIndices;
    bool  _boundaryLmUpdated;
    int * _boundaryVertices;
    int  _chCount;
    struct { 
        float x; 
        float y; 
        int index; 
    }  _chPts;
    float * _cur2D;
    float * _curBlendshapes;
    float * _curCoeff;
    float * _curExprWeights;
    float * _curMesh;
    int  _detectionModeCounterShapeModel;
    float  _eulerAngle;
    float * _exprWeightDiagMatrix;
    float  _extrinsicMatrix;
    bool  _identityInit;
    float  _intrinsicMatrix;
    float * _lm3dBlendshapeComponents;
    float * _lm3dBlendshapes;
    float * _lm3dMeanBlendshapes;
    int * _lmCoord;
    float * _lmWeight;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _meshVertices;
    int  _numBoundaryLms;
    int  _numBoundaryVertices;
    int  _numFrmsSinceLastShapeUpdate;
    int  _numInternalLms;
    int  _numVertices;
    VCPPnPSolver * _poseSolver;
    float * _prevExprWeights;
    int  _processingMode;
    float  _rotMatrix;
    bool  _shapeUpdateInProgress;
    VCPFaceTensorModel * _tensorModel;
    float  _trans;
    float * _transformedCoeff;
    NSObject<OS_dispatch_queue> * _updateShapeQueue;
    unsigned long long  _vertexCount;
}

@property int detectionModeCounterShapeModel;
@property bool identityInit;
@property (readonly) /* Warning: Unrecognized filer type: '' using 'void*' */ void**meshVertices;
@property int processingMode;
@property (readonly) unsigned long long vertexCount;

- (void).cxx_destruct;
- (id)blendShapes;
- (void)calculateBlendshapeWeights:(float*)arg1 prevWeights:(float*)arg2 lmBlendshapes:(float*)arg3 maxIter:(int)arg4;
- (void)calculateIdentityCoefficients:(float*)arg1 extrinsicMatrix:(float*)arg2 pts2D:(float*)arg3 exprWeights:(float*)arg4 lm3DMeanBlendshapes:(float*)arg5 lm3DComponents:(float*)arg6 maxIter:(int)arg7;
- (void)calculatePosePnpSolver:(int)arg1;
- (void)dealloc;
- (int)detectionModeCounterShapeModel;
- (void)estimateInitialProjectionMatrix:(int)arg1 pts2D:(float*)arg2 pts3D:(float*)arg3;
- (bool)fitOneImage:(float*)arg1;
- (void)getEulerAngle:(float*)arg1;
- (void)getInternal3dLandmarksCoordinates:(const float*)arg1 lm3dPos:(float*)arg2;
- (void)getOneInternalLandmarkCoordinates:(const float*)arg1 lmCoord:(const int*)arg2 lmWeight:(const float*)arg3 lm3dPos:(float*)arg4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })getPose;
- (bool)identityInit;
- (id)initWithMode:(int)arg1;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)meshVertices;
- (void)moveBoundaryLandmarks:(const float*)arg1 output:(float*)arg2 isInput:(bool)arg3;
- (bool)optimizeProjectionMatrix:(int)arg1 tracking:(bool)arg2;
- (int)processingMode;
- (void)project3Dto2D:(float*)arg1 intrinsinc:(float*)arg2 extrinsic:(float*)arg3 numVert:(int)arg4 out2dpts:(float*)arg5;
- (void)projectAndUpdateBoundary;
- (void)reestimateProjectionMatrix;
- (void)resetIdentityAndExpressions;
- (int)setCameraIntrinsics:(float)arg1 uc:(float)arg2 vc:(float)arg3;
- (void)setDetectionModeCounterShapeModel:(int)arg1;
- (void)setIdentityInit:(bool)arg1;
- (void)setProcessingMode:(int)arg1;
- (int)setupModel:(int)arg1;
- (bool)trackFaceMesh:(float*)arg1 reInit:(bool)arg2;
- (void)updateBoundary3dLandmarkBlendshapes:(const float*)arg1 numBlendshapes:(int)arg2 pts2D:(const float*)arg3 lm2D:(const float*)arg4 lmBlendshapes:(float*)arg5;
- (void)updateBoundaryLandmarkCoordinates:(const float*)arg1 pts2D:(const float*)arg2 lm2D:(const float*)arg3 lm3dPos:(float*)arg4;
- (void)updateBoundaryLmForShapeOptimization;
- (void)updateIdentityShape:(float*)arg1;
- (void)updateMeshAndLm3dAfterExpressionChange;
- (void)updateMeshVertices;
- (void)updateShapeCoeff:(float*)arg1 extrinsicMatrix:(float*)arg2 pts2D:(float*)arg3 exprWeights:(float*)arg4 outputblendshapes:(float*)arg5;
- (unsigned long long)vertexCount;

@end
