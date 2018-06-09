/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICircularWrap : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
}

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
