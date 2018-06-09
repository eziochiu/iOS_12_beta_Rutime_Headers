/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNetworkMetrics : PBCodable <NSCopying> {
    NSMutableArray * _failures;
    NSMutableArray * _successes;
}

@property (nonatomic, retain) NSMutableArray *failures;
@property (nonatomic, retain) NSMutableArray *successes;

+ (Class)failuresType;
+ (Class)successesType;

- (void)addFailures:(id)arg1;
- (void)addSuccesses:(id)arg1;
- (void)clearFailures;
- (void)clearSuccesses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)failures;
- (id)failuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)failuresCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFailures:(id)arg1;
- (void)setSuccesses:(id)arg1;
- (id)successes;
- (id)successesAtIndex:(unsigned long long)arg1;
- (unsigned long long)successesCount;
- (void)writeTo:(id)arg1;

@end
