/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector <VNDetectorKeyProviding> {
    struct shared_ptr<vision::mod::LandmarkAttributes> { 
        struct LandmarkAttributes {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _faceAttributesPupilRefiner;
    <VNModelFile> * mLandmarkRefinerModelFileHandle;
    bool  modelFilesWereMemmapped;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) void*faceAttributesPupilRefiner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct _Geometry2D_point2D_ { float x1; float x2; })_computeCentroidUsingPoints:(const struct _Geometry2D_point2D_ { float x1; float x2; }*)arg1 indicies:(const int*)arg2 numberOfIndicies:(int)arg3;
+ (Class)detectorClassForConfigurationOptions:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (id)computeLandmarksScoreOnImage:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 withFaceBoundingBox:(const struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 andLandmarks:(const void*)arg3 error:(id*)arg4;
- (struct __CVBuffer { }*)createLumaPixelBufferFrom:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 forFaceBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg3 initializeVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg4 initializeRect2D:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 initializeIgnoreCropAndScaleFlag:(bool*)arg6 initializeLumaScaleFromOriginal:(float*)arg7 error:(id*)arg8;
- (void)dealloc;
- (bool)detectBlinkOnFaceImage:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 faceObservation:(id)arg2 lumaRec2DInImageCoordinates:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 landmarks:(const void*)arg4 options:(id)arg5 warningRecorder:(id)arg6 error:(id*)arg7;
- (void*)faceAttributesPupilRefiner;

@end
