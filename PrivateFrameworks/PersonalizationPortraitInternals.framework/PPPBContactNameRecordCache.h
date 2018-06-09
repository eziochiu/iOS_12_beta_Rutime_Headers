/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPPBContactNameRecordCache : PBCodable <NSCopying> {
    NSMutableArray * _records;
}

@property (nonatomic, retain) NSMutableArray *records;

+ (Class)recordsType;

- (void).cxx_destruct;
- (void)addRecords:(id)arg1;
- (void)clearRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)records;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)setRecords:(id)arg1;
- (void)writeTo:(id)arg1;

@end
