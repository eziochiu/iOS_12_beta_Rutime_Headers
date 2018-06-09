/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelInterface : NSObject {
    NSDictionary * _inputDescription;
    NSOrderedSet * _inputFeatureNames;
    NSDictionary * _outputDescription;
    NSOrderedSet * _outputFeatureNames;
    NSString * _predictedFeatureName;
    NSString * _predictedProbabilitiesName;
}

@property (readonly) MLFeatureDescription *classProbabilityFeatureDescription;
@property (readonly) NSDictionary *inputDescription;
@property (readonly) NSOrderedSet *inputFeatureNames;
@property (readonly) NSDictionary *outputDescription;
@property (readonly) NSOrderedSet *outputFeatureNames;
@property (readonly) MLFeatureDescription *predictedClassFeatureDescription;
@property (readonly) NSString *predictedFeatureName;
@property (readonly) NSString *predictedProbabilitiesName;
@property (readonly) MLFeatureDescription *predictedValueFeatureDescription;
@property (getter=isValidClassifierInterface, readonly) bool validClassifierInterface;
@property (getter=isValidRegressorInterface, readonly) bool validRegressorInterface;

+ (id)modelInterfaceWithInputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 outputDescription:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6;
+ (bool)validateSingleFeatureInDescription:(id)arg1 withSet:(id)arg2;

- (void).cxx_destruct;
- (id)classProbabilityFeatureDescription;
- (id)initWithInputDescription:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6;
- (id)initWithInterfaceFormat:(struct _MLModelDescriptionSpecification { struct shared_ptr<CoreML::Specification::ModelDescription> { struct ModelDescription {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
- (id)initWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
- (id)inputDescription;
- (id)inputFeatureNames;
- (bool)isValidClassifierInterface;
- (bool)isValidRegressorInterface;
- (id)outputDescription;
- (id)outputFeatureNames;
- (id)predictedClassFeatureDescription;
- (id)predictedFeatureName;
- (id)predictedProbabilitiesName;
- (id)predictedValueFeatureDescription;
- (bool)validateClassifierInterfaceWithError:(id*)arg1;
- (bool)validateRegressorInterfaceWithError:(id*)arg1;

@end
