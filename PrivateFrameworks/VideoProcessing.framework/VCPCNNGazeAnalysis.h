/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNGazeAnalysis : NSObject {
    VCPRTLandmarkDetector * _rtLandmarkDetector;
}

+ (id)analyzer;

- (void).cxx_destruct;
- (int)computeBlinkScore:(float*)arg1;
- (int)cropAndRotateEyeImage:(struct __CVBuffer { }*)arg1 leftCornerX:(int)arg2 leftCornerY:(int)arg3 rightCornerX:(int)arg4 rightCornerY:(int)arg5;
- (int)detectEyeOpennessForFace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBuffer:(struct __CVBuffer { }*)arg2 eyeOpenness:(bool*)arg3;
- (float*)getInputBuffer;
- (id)init;
- (int)planCreate;
- (int)planDestroy;

@end
