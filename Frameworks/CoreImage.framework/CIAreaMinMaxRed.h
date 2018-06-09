/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAreaMinMaxRed : CIReductionFilter

+ (id)customAttributes;

- (id)_reduce1X4;
- (id)_reduce2X2;
- (id)_reduce4X1;
- (id)_reduce4x4;
- (id)_reduceCrop;
- (id)outputImage;

@end
