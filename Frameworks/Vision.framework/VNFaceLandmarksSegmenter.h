/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceLandmarksSegmenter : VNEspressoModelFileBasedDetector

+ (float)_faceLanmarksSegmenterMaximumInputImageAspectRatio;
+ (bool)getFaceLanmarksSegmenterInputImageSize:(struct CGSize { double x1; double x2; }*)arg1 forRequestRevision:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)getNumberOfSupportedFaceLandmarkSegments:(unsigned long long*)arg1 forRequestRevision:(unsigned long long)arg2 error:(id*)arg3;

- (void)dealloc;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (void)prepareNetworkInput:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 fromScaledFacePixelBuffer:(struct __CVBuffer { }*)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;
- (bool)supportsProcessingDevice:(id)arg1;

@end
