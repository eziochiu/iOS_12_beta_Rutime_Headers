/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REHasFeatureRuleCondition : RECondition {
    bool  _contains;
    REFeature * _feature;
}

@property (nonatomic, readonly) bool contains;
@property (nonatomic, readonly) REFeature *feature;

- (void).cxx_destruct;
- (bool)_acceptsFeatureMap:(id)arg1;
- (id)_dependentFeatures;
- (id)_notCondition;
- (bool)contains;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)feature;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 contains:(bool)arg2;
- (bool)isEqual:(id)arg1;

@end