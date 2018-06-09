/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerOneStatsAssociationInfo : PBCodable <NSCopying> {
    AWDWiFiMetricsManagerBTCoexModeChange * _btCoexModeChange;
    AWDWiFiMetricsManagerBTCoexStats * _btCoexStats;
    AWDWiFiMetricsManagerChipCounters * _chipCounters;
    NSMutableArray * _chipCountersPerSlices;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDWiFiMetricsManagerBTCoexModeChange *btCoexModeChange;
@property (nonatomic, retain) AWDWiFiMetricsManagerBTCoexStats *btCoexStats;
@property (nonatomic, retain) AWDWiFiMetricsManagerChipCounters *chipCounters;
@property (nonatomic, retain) NSMutableArray *chipCountersPerSlices;
@property (nonatomic, readonly) bool hasBtCoexModeChange;
@property (nonatomic, readonly) bool hasBtCoexStats;
@property (nonatomic, readonly) bool hasChipCounters;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

+ (Class)chipCountersPerSliceType;

- (void)addChipCountersPerSlice:(id)arg1;
- (id)btCoexModeChange;
- (id)btCoexStats;
- (id)chipCounters;
- (id)chipCountersPerSliceAtIndex:(unsigned long long)arg1;
- (id)chipCountersPerSlices;
- (unsigned long long)chipCountersPerSlicesCount;
- (void)clearChipCountersPerSlices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBtCoexModeChange;
- (bool)hasBtCoexStats;
- (bool)hasChipCounters;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBtCoexModeChange:(id)arg1;
- (void)setBtCoexStats:(id)arg1;
- (void)setChipCounters:(id)arg1;
- (void)setChipCountersPerSlices:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
