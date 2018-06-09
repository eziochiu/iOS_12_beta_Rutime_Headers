/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REBlockFeatureTransformer : REFeatureTransformer {
    id /* block */  _block;
    unsigned long long  _featureCount;
    unsigned long long  _outputFeatureType;
}

- (void).cxx_destruct;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (id)_transform:(id)arg1;
- (bool)_validateWithFeatures:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFeatureCount:(unsigned long long)arg1 outputFeatureType:(unsigned long long)arg2 transformation:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;

@end