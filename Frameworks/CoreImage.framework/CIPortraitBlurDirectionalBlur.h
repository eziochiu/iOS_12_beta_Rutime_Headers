/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitBlurDirectionalBlur : CIFilter {
    NSNumber * inputAntiAliasBlurStrength;
    NSNumber * inputHorizontalBlur;
    CIImage * inputImage;
    NSNumber * inputMaxBlur;
    NSNumber * inputUseMetal;
}

@property (nonatomic, copy) NSNumber *inputAntiAliasBlurStrength;
@property (nonatomic, copy) NSNumber *inputHorizontalBlur;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputMaxBlur;
@property (nonatomic, copy) NSNumber *inputUseMetal;

- (id)_kernel;
- (id)_kernelMetal;
- (id)inputAntiAliasBlurStrength;
- (id)inputHorizontalBlur;
- (id)inputImage;
- (id)inputMaxBlur;
- (id)inputUseMetal;
- (id)outputImage;
- (void)setInputAntiAliasBlurStrength:(id)arg1;
- (void)setInputHorizontalBlur:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMaxBlur:(id)arg1;
- (void)setInputUseMetal:(id)arg1;

@end
