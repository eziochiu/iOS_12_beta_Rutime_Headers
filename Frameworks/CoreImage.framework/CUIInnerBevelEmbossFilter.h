/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CUIInnerBevelEmbossFilter : CUIOuterBevelEmbossFilter

- (id)_kernelInvertMask;
- (id)_kernelMultiplyByMask;
- (id)outputImage;

@end
