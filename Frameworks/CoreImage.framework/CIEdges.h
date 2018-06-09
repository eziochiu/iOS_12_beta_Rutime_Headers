/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEdges : CIFilter {
    CIImage * inputImage;
    NSNumber * inputIntensity;
}

+ (id)customAttributes;

- (id)_CIEdges;
- (id)outputImage;

@end
