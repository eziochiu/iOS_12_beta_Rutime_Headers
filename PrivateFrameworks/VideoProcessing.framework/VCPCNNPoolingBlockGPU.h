/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNPoolingBlockGPU : VCPCNNPoolingBlock {
    MPSCNNPoolingMax * _mpsPooling;
}

- (void).cxx_destruct;
- (int)forward;
- (int)initializeRest;

@end
