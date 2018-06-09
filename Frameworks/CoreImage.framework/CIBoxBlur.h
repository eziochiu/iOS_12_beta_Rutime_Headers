/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBoxBlur : CIFilter {
    CIImage * inputImage;
    NSNumber * inputRadius;
}

+ (id)customAttributes;

- (id)outputImage;

@end
