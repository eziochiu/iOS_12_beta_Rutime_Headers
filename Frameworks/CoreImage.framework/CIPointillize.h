/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPointillize : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
}

+ (id)customAttributes;

- (id)_CIPointillize;
- (id)outputImage;

@end
