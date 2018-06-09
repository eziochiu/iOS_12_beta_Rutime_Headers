/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLArrayFeatureExtractor : MLModel <MLModelSpecificationLoader> {
    NSString * _arrayColumnName;
    NSArray * _extractIndices;
    long long  _outputType;
}

@property (nonatomic, readonly) NSString *arrayColumnName;
@property (nonatomic, readonly) NSArray *extractIndices;
@property (nonatomic, readonly) long long outputType;

+ (id)extractArrayElement:(id)arg1 indices:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7;
+ (id)extractArrayElement:(id)arg1 indices:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)arrayColumnName;
- (id)extractIndices;
- (id)initWith:(id)arg1 indices:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7;
- (long long)outputType;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
