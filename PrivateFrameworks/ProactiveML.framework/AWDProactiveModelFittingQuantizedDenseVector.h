/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingQuantizedDenseVector : PBCodable <NSCopying> {
    float  _bucketSize;
    struct { 
        unsigned int bucketSize : 1; 
        unsigned int minValue : 1; 
    }  _has;
    float  _minValue;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _values;
}

@property (nonatomic) float bucketSize;
@property (nonatomic) bool hasBucketSize;
@property (nonatomic) bool hasMinValue;
@property (nonatomic) float minValue;
@property (nonatomic, readonly) unsigned int*values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (id)quantizedDenseVectorFromDenseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2;

- (void)addValues:(unsigned int)arg1;
- (float)bucketSize;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBucketSize;
- (bool)hasMinValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)minValue;
- (float)originalValueAtIndex:(unsigned long long)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBucketSize:(float)arg1;
- (void)setHasBucketSize:(bool)arg1;
- (void)setHasMinValue:(bool)arg1;
- (void)setMinValue:(float)arg1;
- (void)setValues:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)values;
- (unsigned int)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
