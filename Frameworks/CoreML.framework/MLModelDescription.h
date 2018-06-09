/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelDescription : NSObject {
    NSDictionary * _inputDescriptionsByName;
    NSOrderedSet * _inputFeatureNames;
    NSDictionary * _metadata;
    NSDictionary * _outputDescriptionsByName;
    NSOrderedSet * _outputFeatureNames;
    NSString * _predictedFeatureName;
    NSString * _predictedProbabilitiesName;
}

@property (nonatomic, readonly) NSDictionary *inputDescriptionsByName;
@property (retain) NSOrderedSet *inputFeatureNames;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSDictionary *outputDescriptionsByName;
@property (retain) NSOrderedSet *outputFeatureNames;
@property (nonatomic, readonly, copy) NSString *predictedFeatureName;
@property (nonatomic, readonly, copy) NSString *predictedProbabilitiesName;

+ (id)metadataWithFormat:(struct _MLModelMetadataSpecification { struct shared_ptr<CoreML::Specification::Metadata> { struct Metadata {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1;
+ (id)metadataWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1;

- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5;
- (id)initWithModelDescriptionSpecification:(struct _MLModelDescriptionSpecification { struct shared_ptr<CoreML::Specification::ModelDescription> { struct ModelDescription {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
- (id)inputDescriptionsByName;
- (id)inputFeatureNames;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDescription:(id)arg1;
- (id)metadata;
- (id)outputDescriptionsByName;
- (id)outputFeatureNames;
- (id)predictedFeatureName;
- (id)predictedProbabilitiesName;
- (void)setInputFeatureNames:(id)arg1;
- (void)setOutputFeatureNames:(id)arg1;
- (bool)verifyInput:(id)arg1 error:(id*)arg2;

@end
