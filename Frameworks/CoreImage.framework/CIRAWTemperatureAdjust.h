/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRAWTemperatureAdjust : CIFilter {
    NSNumber * inputEV;
    CIImage * inputImage;
    NSNumber * inputVersion;
    CIVector * inputWhitePoint;
}

- (id)outputImage;

@end
