/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerLinkQualityStats : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _statRecords;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *statRecords;
@property (nonatomic) unsigned long long timestamp;

+ (Class)statRecordType;

- (void)addStatRecord:(id)arg1;
- (void)clearStatRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setStatRecords:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)statRecordAtIndex:(unsigned long long)arg1;
- (id)statRecords;
- (unsigned long long)statRecordsCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
