/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _RETransformedFeature : REFeature <REIndentedDescription> {
    REFeatureSet * _features;
    NSString * _name;
    REFeatureTransformer * _transformer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) REFeatureSet *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) REFeatureTransformer *transformer;

- (void).cxx_destruct;
- (long long)_bitCount;
- (id)_dependentFeatures;
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;
- (id)_rootFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)featureType;
- (id)features;
- (unsigned long long)hash;
- (id)initWithTransformer:(id)arg1 features:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)transformer;

@end
