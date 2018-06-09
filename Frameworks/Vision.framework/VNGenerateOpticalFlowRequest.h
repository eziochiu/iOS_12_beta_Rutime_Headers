/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest

- (bool)_calculateLKTVectorResult:(struct __CVBuffer { }*)arg1 fromPixelBuffer:(struct __CVBuffer { }*)arg2 toPixelBuffer:(struct __CVBuffer { }*)arg3 ofWidth:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id*)arg6;
- (struct __CVBuffer { }*)_createLKTPixelBufferFromPixelRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inImageBuffer:(id)arg2 error:(id*)arg3;
- (struct __CVBuffer { }*)_createLKTVectorResultPixelBufferForImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 error:(id*)arg3;
- (id)_initializedLKTMetalContextAndReturnError:(id*)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)observationsCacheKey;
- (bool)wantsSequencedRequestObservationsRecording;

@end
