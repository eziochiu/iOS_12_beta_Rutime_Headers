/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNGazeAnalysisMPS : VCPCNNGazeAnalysis {
    VCPCNNData * _eyeInput;
    VCPCNNModel * _modelEyeOpenness;
}

- (void).cxx_destruct;
- (int)computeBlinkScore:(float*)arg1;
- (float*)getInputBuffer;
- (id)init;
- (int)initEyeOpennessModel;
- (int)planCreate;
- (int)planDestroy;

@end
