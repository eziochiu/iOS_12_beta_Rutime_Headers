/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceLandmarkDetectorRevision1 : VNFaceLandmarkDetector {
    <VNModelFile> * mCoreLandmarkModelFileHandle;
    struct shared_ptr<vision::mod::LandmarkDetector> { 
        struct LandmarkDetector {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mFaceLandmarkAlgorithmImpl;
    struct shared_ptr<vision::mod::LandmarkDetector> { 
        struct LandmarkDetector {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mFaceLandmarkLeftEyeRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetector> { 
        struct LandmarkDetector {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mFaceLandmarkMouthRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetector> { 
        struct LandmarkDetector {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mFaceLandmarkRightEyeRefinerImpl;
    <VNModelFile> * mLandmarkRefinerModelFileHandle;
    bool  modelFilesWereMemmapped;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(struct __CVBuffer { }*)arg2 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg3 meanShapeInLumaIntermediate:(const struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ {} *x1; struct _Geometry2D_point2D_ {} *x2; struct __compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ {} *x_3_1_1; } x3; }*)arg4 landmarkPointsInLumaIntermediate:(const struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ {} *x1; struct _Geometry2D_point2D_ {} *x2; struct __compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_> > { struct _Geometry2D_point2D_ {} *x_3_1_1; } x3; }*)arg5;
+ (bool)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id*)arg2;
- (unsigned long long)cascadeStepCountInOriginalModel;
- (unsigned long long)cascadeStepCountLoaded;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (void)dealloc;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
