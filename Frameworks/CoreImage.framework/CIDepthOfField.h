/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDepthOfField : CIFilter {
    CIImage * inputImage;
    CIVector * inputPoint0;
    CIVector * inputPoint1;
    NSNumber * inputRadius;
    NSNumber * inputSaturation;
    NSNumber * inputUnsharpMaskIntensity;
    NSNumber * inputUnsharpMaskRadius;
}

+ (id)customAttributes;

- (id)_CIAlphaNormalize;
- (id)_CITiltShift;
- (id)_DistanceColored;
- (id)outputImage;

@end
