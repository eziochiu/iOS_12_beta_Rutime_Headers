/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDisparityRefinementV3 : CIFilter {
    CIImage * inputImage;
    CIImage * inputLensModelImage;
    CIImage * inputMainImage;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputLensModelImage;
@property (retain) CIImage *inputMainImage;
@property (copy) NSNumber *inputScale;
@property (retain) NSDictionary *inputTuningParameters;

- (id)inputImage;
- (id)inputLensModelImage;
- (id)inputMainImage;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputLensModelImage:(id)arg1;
- (void)setInputMainImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
