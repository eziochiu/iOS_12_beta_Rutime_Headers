/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingQuantizedSparseVector : PBCodable <NSCopying> {
    float  _bucketSize;
    struct { 
        unsigned int bucketSize : 1; 
        unsigned int length : 1; 
        unsigned int minValue : 1; 
    }  _has;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _indices;
    unsigned int  _length;
    float  _minValue;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _values;
}

@property (nonatomic) float bucketSize;
@property (nonatomic) bool hasBucketSize;
@property (nonatomic) bool hasLength;
@property (nonatomic) bool hasMinValue;
@property (nonatomic, readonly) unsigned int*indices;
@property (nonatomic, readonly) unsigned long long indicesCount;
@property (nonatomic) unsigned int length;
@property (nonatomic) float minValue;
@property (nonatomic, readonly) unsigned int*values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (id)quantizedSparseVectorFromDenseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2;
+ (id)quantizedSparseVectorFromSparseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2;

- (void)addIndices:(unsigned int)arg1;
- (void)addValues:(unsigned int)arg1;
- (float)bucketSize;
- (void)clearIndices;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBucketSize;
- (bool)hasLength;
- (bool)hasMinValue;
- (unsigned long long)hash;
- (unsigned int*)indices;
- (unsigned int)indicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)indicesCount;
- (bool)isEqual:(id)arg1;
- (unsigned int)length;
- (void)mergeFrom:(id)arg1;
- (float)minValue;
- (float)originalValueAtIndex:(unsigned long long)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBucketSize:(float)arg1;
- (void)setHasBucketSize:(bool)arg1;
- (void)setHasLength:(bool)arg1;
- (void)setHasMinValue:(bool)arg1;
- (void)setIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setLength:(unsigned int)arg1;
- (void)setMinValue:(float)arg1;
- (void)setValues:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)values;
- (unsigned int)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
