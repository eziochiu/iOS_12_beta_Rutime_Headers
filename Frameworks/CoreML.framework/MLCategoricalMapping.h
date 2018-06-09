/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLCategoricalMapping : MLModel <MLModelSpecificationLoader> {
    NSDictionary * _mapping;
    MLFeatureValue * _valueOnUnknown;
}

@property (nonatomic, readonly) NSDictionary *mapping;
@property (nonatomic, readonly) MLFeatureValue *valueOnUnknown;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)initWithMapping:(id)arg1 valueOnUnknown:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7;
- (id)mapFeature:(id)arg1 error:(id*)arg2;
- (id)mapping;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)valueOnUnknown;

@end
