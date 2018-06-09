/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceMaskKernel : CIImageProcessorKernel

+ (void)allocateBuffers:(id)arg1;
+ (void)allocateBuffersIfNeeded:(id)arg1;
+ (void)compilePipelines:(id)arg1;
+ (void)compilePipelinesIfNeeded:(id)arg1;
+ (int)formatForInputAtIndex:(int)arg1;
+ (bool)hasValidBuffers;
+ (bool)hasValidPipelines;
+ (int)outputFormat;
+ (bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4;
+ (void)releaseBuffers;
+ (void)releasePipelines;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (bool)synchronizeInputs;

@end
