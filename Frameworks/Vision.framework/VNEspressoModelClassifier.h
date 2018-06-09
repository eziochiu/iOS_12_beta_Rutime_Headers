/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNEspressoModelClassifier : VNDetector {
    NSSet * _blacklistedIdentifiers;
    struct shared_ptr<vision::mod::ImageClassifierAbstract> { 
        struct ImageClassifierAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mClassifier;
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { 
        struct ImageDescriptorProcessorAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mDescriptorProcessor;
}

+ (void)convertRelationships:(id)arg1 toStdRelationships:(struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> > > > { struct pair<std::__1::basic_string<char>, std::__1::basic_string<char> > {} *x1; struct pair<std::__1::basic_string<char>, std::__1::basic_string<char> > {} *x2; struct __compressed_pair<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> > *, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> > > > { struct pair<std::__1::basic_string<char>, std::__1::basic_string<char> > {} *x_3_1_1; } x3; }*)arg2;
+ (struct shared_ptr<vision::mod::ImageClassifierAbstract> { struct ImageClassifierAbstract {} *x1; struct __shared_weak_count {} *x2; })createClassifierWithDescriptor:(struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract {} *x1; struct __shared_weak_count {} *x2; })arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(/* Warning: unhandled struct encoding: '{Options=BQ{shared_ptr<Espresso::abstract_context>=^{abstract_context}^{__shared_weak_count}}@}' */ struct Options { bool x1; unsigned long long x2; struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; })arg6;
+ (struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract {} *x1; struct __shared_weak_count {} *x2; })createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(/* Warning: unhandled struct encoding: '{Options=BQ{shared_ptr<Espresso::abstract_context>=^{abstract_context}^{__shared_weak_count}}@}' */ struct Options { bool x1; unsigned long long x2; struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; })arg5;
+ (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel {} *x1; struct __shared_weak_count {} *x2; })createHierarchicalModelForRequestRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2;
+ (void)initDumpDebugIntermediates:(id*)arg1 debugInfo:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_calculateImageDescriptors:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 canceller:(id)arg4 descriptorBuffer:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract {} *x1; struct __shared_weak_count {} *x2; }*)arg5 debugIntermediatesDumpPath:(id)arg6 outputDebugDictionary:(id)arg7 error:(id*)arg8;
- (id)blacklistedIdentifiers;
- (id)calculateImageDescriptorsWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;
- (bool)completeInitializationAndReturnError:(id*)arg1;
- (id)getLabels;

@end
