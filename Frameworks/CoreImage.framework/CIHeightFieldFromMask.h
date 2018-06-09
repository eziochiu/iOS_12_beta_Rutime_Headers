/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIHeightFieldFromMask : CIFilter {
    CIImage * inputImage;
    NSNumber * inputRadius;
}

+ (id)customAttributes;

- (id)_CIResetalpha;
- (id)outputImage;

@end
