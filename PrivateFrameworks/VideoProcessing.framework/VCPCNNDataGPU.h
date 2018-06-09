/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNDataGPU : VCPCNNData

- (int)allocBuffers:(bool)arg1;
- (int)bufferAllocGPU;
- (int)convertCPUData2GPU;
- (int)convertGPUData2CPU;
- (int)reallocGPUTemporalBuffers;

@end
