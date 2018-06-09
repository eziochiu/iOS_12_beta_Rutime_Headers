/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest

- (bool)_calculateHomographicWarpTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1 ofFloatingImagePixelBuffer:(struct __CVBuffer { }*)arg2 ontoReferenceImagePixelBuffer:(struct __CVBuffer { }*)arg3 usingImageRegistrationContext:(struct ImageRegistrationCtx_s { }*)arg4 glContext:(void*)arg5 seededWithPreviousWarpTransform:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg6 error:(id*)arg7;
- (struct __CVBuffer { }*)_createHomographicPixelBufferFromImageBuffer:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 options:(id)arg3 error:(id*)arg4;
- (bool)_createN:(unsigned long long)arg1 CVPixelBuffers:(struct __CVBuffer {}**)arg2 withPixelFormat:(unsigned int)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id*)arg6;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (bool)wantsSequencedRequestObservationsRecording;

@end
