/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REWidthFeatureTransform : REFeatureTransformer {
    unsigned long long  _mask;
    unsigned long long  _width;
}

- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_outputType;
- (id)_transform:(id)arg1;
- (bool)_validateWithFeatures:(id)arg1;
- (unsigned long long)hash;
- (id)initWithWidth:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end