/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageAnalyzerMultiDetector : VNDetector {
    struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { 
        struct ImageClassifier_HierarchicalModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _defaultSceneClassificationHierarchicalModel;
    struct shared_ptr<vision::mod::ImageAnalyzer> { 
        struct ImageAnalyzer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _imageAnalyzer;
    unsigned long long  _model;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel {} *x1; struct __shared_weak_count {} *x2; })createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addClassificationObservationsForSceneRequestRevisionNumber:(unsigned long long)arg1 toArray:(id)arg2 fromSceneLabelsAndConfidences:(const struct vector<std::__1::pair<std::__1::basic_string<char>, float>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, float> > > { struct pair<std::__1::basic_string<char>, float> {} *x1; struct pair<std::__1::basic_string<char>, float> {} *x2; struct __compressed_pair<std::__1::pair<std::__1::basic_string<char>, float> *, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, float> > > { struct pair<std::__1::basic_string<char>, float> {} *x_3_1_1; } x3; }*)arg3;
- (struct __CVBuffer { }*)_createScaledImagePixelBufferFromCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofImageBuffer:(id)arg2 forNetworkInputImageSize:(struct _Geometry2D_size2D_ { float x1; float x2; })arg3 usingAnisotropicScaling:(bool)arg4 options:(id)arg5 error:(id*)arg6;
- (struct __CVBuffer { }*)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 forNetworkInputImageSize:(struct _Geometry2D_size2D_ { float x1; float x2; })arg2 usingAnisotropicScaling:(bool)arg3 options:(id)arg4 error:(id*)arg5;
- (id)_observationsForScene:(bool)arg1 sceneprint:(bool)arg2 aesthetics:(bool)arg3 saliencyHeatMap:(bool)arg4 of32BGRAImageInPixelBuffer:(struct __CVBuffer { }*)arg5 withOptions:(id)arg6 originalImageSize:(struct CGSize { double x1; double x2; })arg7 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 warningRecorder:(id)arg9 error:(id*)arg10;
- (id)allSceneLabels;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
