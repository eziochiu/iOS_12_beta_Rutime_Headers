/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILineOverlay : CIFilter {
    NSNumber * inputContrast;
    NSNumber * inputEdgeIntensity;
    CIImage * inputImage;
    NSNumber * inputNRNoiseLevel;
    NSNumber * inputNRSharpness;
    NSNumber * inputThreshold;
}

+ (id)customAttributes;

- (id)_CIColorControls;
- (id)_CIComicNoiseReduction;
- (id)_CISobelEdges;
- (id)outputImage;

@end
