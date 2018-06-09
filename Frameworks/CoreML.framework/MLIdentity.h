/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLIdentity : MLModel <MLModelSpecificationLoader>

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { }*)arg1 error:(id*)arg2;

- (id)init;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
