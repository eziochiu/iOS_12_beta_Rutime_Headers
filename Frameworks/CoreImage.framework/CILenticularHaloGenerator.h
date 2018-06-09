/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILenticularHaloGenerator : CIFilter {
    CIVector * inputCenter;
    CIColor * inputColor;
    NSNumber * inputHaloOverlap;
    NSNumber * inputHaloRadius;
    NSNumber * inputHaloWidth;
    NSNumber * inputStriationContrast;
    NSNumber * inputStriationStrength;
    NSNumber * inputTime;
}

+ (id)customAttributes;

- (id)_CILenticularHalo;
- (id)outputImage;

@end
