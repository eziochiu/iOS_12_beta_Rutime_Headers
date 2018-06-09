/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRingBlur : CIFilter {
    CIImage * inputImage;
    NSNumber * inputPointCount;
    NSNumber * inputRadius;
}

+ (id)customAttributes;

- (id)outputImage;

@end
