/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDisplacementDistortion : CIFilter {
    CIImage * inputDisplacementImage;
    CIImage * inputImage;
    NSNumber * inputScale;
}

+ (id)customAttributes;

- (id)_CIDisplaceFromImage;
- (id)outputImage;

@end
