/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPageCurlTransition : CIFilter {
    NSNumber * inputAngle;
    CIImage * inputBacksideImage;
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputRadius;
    CIImage * inputShadingImage;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
}

+ (id)customAttributes;

- (id)_CIPageCurlTransNoEmap;
- (id)_CIPageCurlTransition;
- (id)outputImage;

@end
