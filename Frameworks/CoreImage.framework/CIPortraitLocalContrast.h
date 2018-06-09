/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitLocalContrast : CIFilter {
    NSNumber * inputBlur;
    CIImage * inputImage;
    CIVector * inputScale;
    NSNumber * inputStrength;
}

+ (id)customAttributes;

- (id)_convertToGrayscale;
- (id)_kernelLocalContrast;
- (id)outputImage;

@end
