/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoFaceMeshAnalyzer : NSObject {
    bool  _angleStable;
    NSDictionary * _blendShapes;
    float * _curLM;
    int  _detectionModeCounter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceBounds;
    int  _faceCount;
    VCPLandmarkValidator * _faceValidator;
    float  _focalLengthInPixels;
    bool  _fpInitialized;
    bool  _inDetectionMode;
    bool  _initialized;
    VCPRTLandmarkDetector * _lmDetector;
    VCPRTLandmarkDetector * _lmTracker;
    int  _lostTrackCounter;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _meshVertices;
    bool  _offline;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pose;
    float * _prevLM;
    VCPFaceShapeModel * _shapeModel;
    int  _trackingModeCounter;
    float  _uc;
    float * _valAngle;
    struct __CVBuffer { } * _valBuffer;
    float * _valLM;
    bool  _validateFailedOnce;
    NSObject<OS_dispatch_group> * _validationGroup;
    NSObject<OS_dispatch_queue> * _validationQueue;
    float  _validationScore;
    float  _vc;
    unsigned long long  _vertexCount;
}

@property (nonatomic, readonly) NSDictionary *blendShapes;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**vertices;

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)blendShapes;
- (void)dealloc;
- (id)initWithFocalLengthInPixels:(float)arg1 offline:(bool)arg2;
- (int)initialize:(struct __CVBuffer { }*)arg1;
- (bool)isTracked;
- (void)mapToCameraNegativeZ;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (int)validateThisFace:(struct __CVBuffer { }*)arg1;
- (unsigned long long)vertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

@end
