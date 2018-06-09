/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CINoiseReduction : CIFilter {
    CIImage * inputImage;
    NSNumber * inputNoiseLevel;
    NSNumber * inputSharpness;
}

+ (id)customAttributes;

- (id)_CINoiseReduction;
- (id)outputImage;

@end
