/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICMYKHalftone : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    NSNumber * inputGCR;
    CIImage * inputImage;
    NSNumber * inputSharpness;
    NSNumber * inputUCR;
    NSNumber * inputWidth;
}

+ (id)customAttributes;

- (id)_CICMYK_black;
- (id)_CICMYK_convert;
- (id)_CICMYK_cyan;
- (id)_CICMYK_magenta;
- (id)_CICMYK_yellow;
- (id)_CIWhite;
- (id)outputImage;

@end
