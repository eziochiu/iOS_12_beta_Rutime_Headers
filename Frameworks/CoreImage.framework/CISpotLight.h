/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISpotLight : CIFilter {
    NSNumber * inputBrightness;
    CIColor * inputColor;
    NSNumber * inputConcentration;
    CIImage * inputImage;
    CIVector * inputLightPointsAt;
    CIVector * inputLightPosition;
}

+ (id)customAttributes;

- (id)_CISpotLight;
- (id)outputImage;

@end
