/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISpotColor : CIFilter {
    CIColor * inputCenterColor1;
    CIColor * inputCenterColor2;
    CIColor * inputCenterColor3;
    NSNumber * inputCloseness1;
    NSNumber * inputCloseness2;
    NSNumber * inputCloseness3;
    NSNumber * inputContrast1;
    NSNumber * inputContrast2;
    NSNumber * inputContrast3;
    CIImage * inputImage;
    CIColor * inputReplacementColor1;
    CIColor * inputReplacementColor2;
    CIColor * inputReplacementColor3;
}

+ (id)customAttributes;

- (id)_CISpotColor;
- (id)outputImage;

@end
