/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNSmileDetectorMPS : VCPCNNSmileDetector {
    VCPCNNData * _input;
    VCPCNNModel * _model;
}

- (void).cxx_destruct;
- (int)computeSmileScore:(float*)arg1;
- (float*)getInputBuffer;
- (id)init;

@end
