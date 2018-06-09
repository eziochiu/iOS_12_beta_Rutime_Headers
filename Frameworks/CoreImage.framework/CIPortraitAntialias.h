/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitAntialias : CIFilter {
    NSNumber * inputAntiAliasRadius;
    CIImage * inputImage;
    NSNumber * inputLumaNoiseAmpl;
    NSNumber * inputLumaNoiseModelCoeff;
    NSNumber * inputMaxBlurInPixels;
    CIVector * inputSize;
}

@property (nonatomic, copy) NSNumber *inputAntiAliasRadius;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLumaNoiseAmpl;
@property (nonatomic, copy) NSNumber *inputLumaNoiseModelCoeff;
@property (nonatomic, copy) NSNumber *inputMaxBlurInPixels;
@property (nonatomic, copy) CIVector *inputSize;

- (id)_kernel:(bool)arg1;
- (id)inputAntiAliasRadius;
- (id)inputImage;
- (id)inputLumaNoiseAmpl;
- (id)inputLumaNoiseModelCoeff;
- (id)inputMaxBlurInPixels;
- (id)inputSize;
- (id)outputImage;
- (id)outputImage:(id)arg1 horizontal:(bool)arg2;
- (void)setInputAntiAliasRadius:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaNoiseAmpl:(id)arg1;
- (void)setInputLumaNoiseModelCoeff:(id)arg1;
- (void)setInputMaxBlurInPixels:(id)arg1;
- (void)setInputSize:(id)arg1;

@end
