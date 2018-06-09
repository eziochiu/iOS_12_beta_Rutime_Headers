/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLAppleWordTagger : MLModel <MLModelSpecificationLoader> {
    MLAppleWordTaggerParameters * _parameters;
    void * wordTaggingModel;
}

@property (readonly) MLAppleWordTaggerParameters *parameters;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
+ (bool)saveAppleWordTaggingModelToURL:(id)arg1 wordTaggerParameters:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 error:(id*)arg4;
- (id)parameters;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
