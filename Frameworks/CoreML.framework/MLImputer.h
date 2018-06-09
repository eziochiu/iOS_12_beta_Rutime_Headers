/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLImputer : MLModel <MLModelSpecificationLoader> {
    MLFeatureValue * _imputeValue;
    MLFeatureValue * _replaceValue;
}

@property (nonatomic, readonly) MLFeatureValue *imputeValue;
@property (nonatomic, readonly) MLFeatureValue *replaceValue;

+ (id)imputeValueFrom:(id)arg1 replaceValue:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 error:(id*)arg8;
+ (id)imputeValueFrom:(id)arg1 replaceValue:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 error:(id*)arg7;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)imputeValue;
- (id)initWith:(id)arg1 imputeValue:(id)arg2 replaceValue:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 error:(id*)arg8;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)replaceValue;

@end
