/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIStretchCrop : CIFilter {
    NSNumber * inputCenterStretchAmount;
    NSNumber * inputCropAmount;
    CIImage * inputImage;
    CIVector * inputSize;
}

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
