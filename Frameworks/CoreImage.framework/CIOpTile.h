/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIOpTile : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputScale;
    NSNumber * inputWidth;
}

+ (id)customAttributes;

- (id)_CIOpTile;
- (id)outputImage;

@end
