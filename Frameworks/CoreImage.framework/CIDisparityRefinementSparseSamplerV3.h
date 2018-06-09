/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDisparityRefinementSparseSamplerV3 : CIFilter {
    CIImage * inputImage;
    CIImage * inputPreprocImage;
    NSDictionary * inputTuningParameters;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputPreprocImage;
@property (retain) NSDictionary *inputTuningParameters;

- (id)inputImage;
- (id)inputPreprocImage;
- (id)inputTuningParameters;
- (id)outputImage;
- (id)sampleKernel;
- (void)setInputImage:(id)arg1;
- (void)setInputPreprocImage:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
