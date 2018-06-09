/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICrystallize : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
}

+ (id)customAttributes;

- (id)_CICrystallize;
- (id)outputImage;

@end
