/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REFeatureTransformer : NSObject {
    NSString * _name;
}

@property (nonatomic, copy) NSString *name;

+ (id)binaryTransformerWithThreshold:(id)arg1;
+ (id)bucketTransformerWithBitWidth:(unsigned long long)arg1;
+ (id)bucketTransformerWithCount:(unsigned long long)arg1 minValue:(id)arg2 maxValue:(id)arg3;
+ (id)customCategoricalTransformerWithName:(id)arg1 block:(id /* block */)arg2;
+ (id)customCategoricalTransformerWithName:(id)arg1 featureCount:(unsigned long long)arg2 transformation:(id /* block */)arg3;
+ (id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 block:(id /* block */)arg3;
+ (id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 featureCount:(unsigned long long)arg3 transformation:(id /* block */)arg4;
+ (id)hashTransform;
+ (id)logTransformerWithBase:(id)arg1;
+ (id)maskTransformWithWidth:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)name;
- (void)setName:(id)arg1;

@end
