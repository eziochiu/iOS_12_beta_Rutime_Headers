/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIShadedMaterial : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScale;
    CIImage * inputShadingImage;
}

+ (id)customAttributes;

- (id)_CIShadedmaterial;
- (id)_CIShadedmaterial_0;
- (id)outputImage;

@end
