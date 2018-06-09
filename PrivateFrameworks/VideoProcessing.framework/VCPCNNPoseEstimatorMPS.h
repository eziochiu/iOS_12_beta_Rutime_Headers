/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNPoseEstimatorMPS : VCPCNNPoseEstimator {
    VCPCNNData * _input;
    VCPCNNModel * _model;
}

- (void).cxx_destruct;
- (int)computePoseScore:(float*)arg1;
- (float*)getInputBuffer;
- (id)init;

@end
