/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDisparityWeightsV3 : CIFilter {
    CIImage * inputImage;
    NSDictionary * inputTuningParameters;
}

@property (retain) CIImage *inputImage;
@property (retain) NSDictionary *inputTuningParameters;

- (id)inputImage;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;
- (id)weightsXKernel;
- (id)weightsYKernel;

@end
