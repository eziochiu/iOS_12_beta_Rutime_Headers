/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REContinuousHistogram : REHistogram {
    REFeatureValue * _binningValue;
    RESortedDictionary * _values;
}

- (void).cxx_destruct;
- (void)_enumerateValuesBetweenMinValue:(id)arg1 maxValue:(id)arg2 block:(id /* block */)arg3;
- (void)addValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countForValue:(id)arg1;
- (unsigned long long)countOfValuesBetweenMinValue:(id)arg1 maxValue:(id)arg2;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 binningSize:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mean;
- (void)removeValue:(id)arg1;
- (id)standardDeviation;

@end
