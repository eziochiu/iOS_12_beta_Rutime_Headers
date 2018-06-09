/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDisparityRefinement : CIFilter {
    CIImage * inputDisparityImage;
    CIImage * inputImage;
    CIVector * inputOriginalSize;
    NSNumber * inputPropagateKernel;
    NSNumber * inputPropagateMinWeightSum;
    NSNumber * inputPropagateSigmaChma;
    NSNumber * inputPropagateSigmaLuma;
    NSNumber * inputScale;
    NSNumber * inputSmoothSigma;
}

@property (retain) CIImage *inputDisparityImage;
@property (retain) CIImage *inputImage;
@property (copy) CIVector *inputOriginalSize;
@property (copy) NSNumber *inputPropagateKernel;
@property (copy) NSNumber *inputPropagateMinWeightSum;
@property (copy) NSNumber *inputPropagateSigmaChma;
@property (copy) NSNumber *inputPropagateSigmaLuma;
@property (copy) NSNumber *inputScale;
@property (copy) NSNumber *inputSmoothSigma;

+ (id)customAttributes;

- (id)_combineImages;
- (id)_initialConversionRGB;
- (id)_propagateDisparity;
- (id)_propagateDisparityCombined;
- (id)_propagateDisparityR1;
- (id)_propagateDisparityR1Combined;
- (id)_pyramidGenerateLevel;
- (id)_smoothDisparity;
- (id)generatePyramidLevel:(id)arg1 useMetal:(bool)arg2;
- (id)initialConversionForSize:(struct CGSize { double x1; double x2; })arg1 useMetal:(bool)arg2;
- (id)inputDisparityImage;
- (id)inputImage;
- (id)inputOriginalSize;
- (id)inputPropagateKernel;
- (id)inputPropagateMinWeightSum;
- (id)inputPropagateSigmaChma;
- (id)inputPropagateSigmaLuma;
- (id)inputScale;
- (id)inputSmoothSigma;
- (id)outputImage;
- (id)outputImageUsingMetal:(bool)arg1;
- (id)propagateDisparity:(id)arg1 pyramids:(id*)arg2 useMetal:(bool)arg3 computedPyramidLevels:(int)arg4;
- (void)setInputDisparityImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOriginalSize:(id)arg1;
- (void)setInputPropagateKernel:(id)arg1;
- (void)setInputPropagateMinWeightSum:(id)arg1;
- (void)setInputPropagateSigmaChma:(id)arg1;
- (void)setInputPropagateSigmaLuma:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputSmoothSigma:(id)arg1;
- (id)shiftmapLevelZeroWithSize:(struct CGSize { double x1; double x2; })arg1 useMetal:(bool)arg2;
- (id)smoothDisparityImage:(id)arg1 useMetal:(bool)arg2;

@end
