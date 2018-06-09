/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceDetectorRevision2 : VNFaceDetector {
    VNFaceBBoxAligner * _faceBBoxAligner;
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2> { 
        struct ObjectDetector_DCNFaceDetector_v2 {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _faceDetector;
}

+ (id)configurationOptionKeysForDetectorKey;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;
- (void)purgeIntermediates;
- (bool)supportsProcessingDevice:(id)arg1;

@end
