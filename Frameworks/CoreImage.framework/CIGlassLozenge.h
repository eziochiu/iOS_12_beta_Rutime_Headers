/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIGlassLozenge : CIFilter {
    CIImage * inputImage;
    CIVector * inputPoint0;
    CIVector * inputPoint1;
    NSNumber * inputRadius;
    NSNumber * inputRefraction;
}

+ (id)customAttributes;

- (id)_CILozengeRefraction;
- (id)outputImage;

@end
