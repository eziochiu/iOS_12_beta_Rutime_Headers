/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICircleGenerator : CIFilter {
    CIVector * inputCenter;
    CIColor * inputColor;
    NSNumber * inputEdgeBlur;
    NSNumber * inputRadius;
}

+ (id)customAttributes;

- (id)_CICircle;
- (id)outputImage;

@end
