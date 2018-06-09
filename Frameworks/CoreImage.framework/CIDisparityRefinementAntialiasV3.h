/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDisparityRefinementAntialiasV3 : CIFilter {
    CIImage * inputImage;
    CIImage * inputLensModelImage;
    CIImage * inputPreprocImage;
    NSDictionary * inputTuningParameters;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputLensModelImage;
@property (retain) CIImage *inputPreprocImage;
@property (retain) NSDictionary *inputTuningParameters;

- (id)antialiasKernel;
- (id)inputImage;
- (id)inputLensModelImage;
- (id)inputPreprocImage;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputLensModelImage:(id)arg1;
- (void)setInputPreprocImage:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
