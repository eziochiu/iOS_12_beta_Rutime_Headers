/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIIntegralImageProcessorCPU : CIImageProcessorKernel

+ (bool)canReduceOutputChannels;
+ (int)outputFormat;
+ (bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4;

@end
