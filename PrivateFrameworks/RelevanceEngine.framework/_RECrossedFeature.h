/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _RECrossedFeature : REFeature <REIndentedDescription> {
    unsigned long long  _bitCount;
    REFeatureSet * _dependentFeatures;
    unsigned long long  _featureType;
    NSArray * _features;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

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
- (id)initWithFeatures:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
