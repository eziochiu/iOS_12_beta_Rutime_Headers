/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITorusLensDistortion : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputRefraction;
    NSNumber * inputWidth;
}

+ (id)customAttributes;

- (id)_CITorusRefraction;
- (id)outputImage;

@end
