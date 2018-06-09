/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDisparityPreprocV3 : CIFilter {
    CIImage * inputImage;
    CIImage * inputWeightsImage;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputWeightsImage;

- (id)inputImage;
- (id)inputWeightsImage;
- (id)outputImage;
- (id)preprocKernel;
- (void)setInputImage:(id)arg1;
- (void)setInputWeightsImage:(id)arg1;

@end
