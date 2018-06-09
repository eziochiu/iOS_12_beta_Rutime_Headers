/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REBucketFeatureTransformer : REFeatureTransformer {
    long long  _bitCount;
    unsigned long long  _count;
    REFeatureValue * _max;
    REFeatureValue * _min;
}

- (void).cxx_destruct;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (id)_transform:(id)arg1;
- (bool)_validateWithFeatures:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBucketCount:(unsigned long long)arg1 minValue:(id)arg2 maxValue:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
