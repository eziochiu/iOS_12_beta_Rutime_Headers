/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSmartCamClassifier : VNEspressoModelClassifier

+ (id)classifierResourceTypesToNamesForRevision:(unsigned long long)arg1;
+ (struct shared_ptr<vision::mod::ImageClassifierAbstract> { struct ImageClassifierAbstract {} *x1; struct __shared_weak_count {} *x2; })createClassifierWithDescriptor:(struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract {} *x1; struct __shared_weak_count {} *x2; })arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(/* Warning: unhandled struct encoding: '{Options=BQ{shared_ptr<Espresso::abstract_context>=^{abstract_context}^{__shared_weak_count}}@}' */ struct Options { bool x1; unsigned long long x2; struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; })arg6;
+ (struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract {} *x1; struct __shared_weak_count {} *x2; })createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(/* Warning: unhandled struct encoding: '{Options=BQ{shared_ptr<Espresso::abstract_context>=^{abstract_context}^{__shared_weak_count}}@}' */ struct Options { bool x1; unsigned long long x2; struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; id x4; })arg5;
+ (id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2;
+ (Class)espressoModelImageprintClass;
+ (void)initDumpDebugIntermediates:(id*)arg1 debugInfo:(id*)arg2;
+ (id)returnAllResultsOptionKey;

- (bool)completeInitializationAndReturnError:(id*)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
