/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPageCurlWithShadowTransition : CIFilter {
    NSNumber * inputAngle;
    CIImage * inputBacksideImage;
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputShadowAmount;
    CIVector * inputShadowExtent;
    NSNumber * inputShadowSize;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
}

+ (id)customAttributes;

- (id)_CIPageCurlNoShadowTransition;
- (id)_CIPageCurlWithShadowTransition;
- (id)outputImage;

@end
