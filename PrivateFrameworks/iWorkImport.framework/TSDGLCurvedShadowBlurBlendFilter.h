/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLCurvedShadowBlurBlendFilter : CIFilter {
    CIImage * inputEdgeBlurImage;
    NSNumber * inputEdgeOpacity;
    CIVector * inputExtent;
    CIImage * inputInterpBlurImage;
    CIImage * inputMiddleBlurImage;
    NSNumber * inputMiddleOpacity;
    NSNumber * inputPadding;
}

+ (id)blurBlendKernel;

@end
