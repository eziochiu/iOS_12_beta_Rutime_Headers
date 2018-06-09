/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLCurvedShadowCurveFilter : CIFilter {
    NSNumber * inputCurveAmount;
    CIImage * inputImage;
    NSNumber * inputPadding;
    CIVector * inputSampleExtent;
}

+ (id)curveKernel;

@end
