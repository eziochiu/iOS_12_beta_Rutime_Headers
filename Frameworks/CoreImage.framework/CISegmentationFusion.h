/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISegmentationFusion : CIFilter {
    CIVector * inputAddBlur;
    CIImage * inputImage;
    CIImage * inputMatteImage;
    CIVector * inputRemoveBlur;
    NSDictionary * inputTuningParameters;
}

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)kernel;
- (id)outputImage;

@end
