/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceExpressionDetector : VNDetector {
    struct shared_ptr<vision::mod::LandmarkAttributes> { 
        struct LandmarkAttributes {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_FaceAttributesImpl;
    <VNModelFile> * m_LandmarkRefinerModelFileHandle;
    bool  modelFilesWereMemmapped;
}

+ (id)createExpressionAndConfidencesDictionaryFromScores:(id)arg1;
+ (id)createExpressionDetectionDictionaryFromScores:(id)arg1;
+ (int)expressionTypeFromString:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (void)dealloc;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
