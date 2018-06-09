/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REHistogram : NSObject <NSCopying> {
    REFeature * _feature;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) REFeatureValue *mean;
@property (nonatomic, readonly) REFeatureValue *standardDeviation;

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countForValue:(id)arg1;
- (unsigned long long)countOfValuesBetweenMinValue:(id)arg1 maxValue:(id)arg2;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (id)feature;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeature:(id)arg1 binningSize:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mean;
- (void)removeValue:(id)arg1;
- (id)standardDeviation;

@end
