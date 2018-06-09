/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCaptureAnalysisSession : NSObject {
    unsigned long long  _analysisTypes;
    float  _focalLengthInPixels;
    VCPVideoFaceMeshAnalyzer * _meshAnalyzer;
    VCPVideoFacePoseAnalyzer * _poseAnalyzer;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preferredTransform;
    struct Rotator { struct __CVPixelBufferPool {} *x1; int x2; int x3; int x4; struct OpaqueVTImageRotationSession {} *x5; } * _rotator;
    VCPFullVideoAnalyzer * _videoAnalysis;
}

@property (readonly) NSDictionary *aggregatedResults;

+ (id)analyzerForAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 properties:(id)arg3;

- (void).cxx_destruct;
- (id)aggregatedResults;
- (id)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 properties:(id)arg4 error:(id*)arg5;
- (void)dealloc;
- (bool)finalizeAnalysis;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })flipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)init;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 withFocalLengthInPixels:(float)arg3;

@end
