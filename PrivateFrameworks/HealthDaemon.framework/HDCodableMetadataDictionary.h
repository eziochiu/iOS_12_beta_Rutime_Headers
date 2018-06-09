/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMetadataDictionary : PBCodable <NSCopying> {
    NSMutableArray * _keyValuePairs;
}

@property (nonatomic, retain) NSMutableArray *keyValuePairs;

+ (id)decodeMetadataFromData:(id)arg1;
+ (Class)keyValuePairsType;

- (void).cxx_destruct;
- (void)addKeyValuePairs:(id)arg1;
- (void)clearKeyValuePairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyValuePairs;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKeyValuePairs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
