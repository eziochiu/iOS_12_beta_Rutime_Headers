/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAreaCentroid : CIReductionFilter

+ (id)customAttributes;

- (id)_kernelCentroid;
- (id)_kernelWeightedCoordinate;
- (id)outputImage;

@end
