/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRippleTransition : CIFilter {
    CIVector * inputCenter;
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputScale;
    CIImage * inputShadingImage;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
    NSNumber * inputWidth;
}

+ (id)customAttributes;

- (id)_CIRippleTransition;
- (id)outputImage;

@end
