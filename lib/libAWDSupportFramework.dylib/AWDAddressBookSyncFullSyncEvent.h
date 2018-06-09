/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDAddressBookSyncFullSyncEvent : PBCodable <NSCopying> {
    unsigned long long  _approximateRecordCount;
    struct { 
        unsigned int approximateRecordCount : 1; 
        unsigned int recordsPerSecond : 1; 
        unsigned int timestamp : 1; 
        unsigned int result : 1; 
    }  _has;
    unsigned long long  _recordsPerSecond;
    int  _result;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long approximateRecordCount;
@property (nonatomic) bool hasApproximateRecordCount;
@property (nonatomic) bool hasRecordsPerSecond;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long recordsPerSecond;
@property (nonatomic) int result;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsResult:(id)arg1;
- (unsigned long long)approximateRecordCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApproximateRecordCount;
- (bool)hasRecordsPerSecond;
- (bool)hasResult;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)recordsPerSecond;
- (int)result;
- (id)resultAsString:(int)arg1;
- (void)setApproximateRecordCount:(unsigned long long)arg1;
- (void)setHasApproximateRecordCount:(bool)arg1;
- (void)setHasRecordsPerSecond:(bool)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRecordsPerSecond:(unsigned long long)arg1;
- (void)setResult:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
