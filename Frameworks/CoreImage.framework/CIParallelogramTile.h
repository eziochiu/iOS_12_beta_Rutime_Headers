/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIParallelogramTile : CIFilter {
    NSNumber * inputAcuteAngle;
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputWidth;
}

+ (id)customAttributes;

- (id)_CIParallelogramTile;
- (id)outputImage;

@end
