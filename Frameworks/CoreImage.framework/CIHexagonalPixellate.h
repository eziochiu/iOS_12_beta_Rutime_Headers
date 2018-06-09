/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIHexagonalPixellate : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputScale;
}

+ (id)customAttributes;

- (id)_CIHexagonalPixellate;
- (id)outputImage;

@end
