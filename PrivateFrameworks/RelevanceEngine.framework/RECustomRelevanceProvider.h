/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RECustomRelevanceProvider : RERelevanceProvider {
    REFeature * _feature;
    REFeatureValue * _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) REFeatureValue *value;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)feature;
- (id)initWithFeature:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
