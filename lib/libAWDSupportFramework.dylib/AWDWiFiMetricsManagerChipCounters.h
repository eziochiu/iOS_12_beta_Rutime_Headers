/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerChipCounters : PBCodable <NSCopying> {
    NSMutableArray * _frameCounterPerInterfaces;
    AWDWiFiMetricsManagerFrameCounterStats * _frameCounters;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    AWDWPA2Counters * _mcastWPA2Counters;
    AWDChipCountersRx * _rxGeneralStats;
    AWDMacCountersRx * _rxMACCounterStats;
    AWDMacCountersRxErrors * _rxMACErrorStats;
    AWDRxPhyErrors * _rxPhyErrors;
    unsigned long long  _timestamp;
    AWDChipErrorCountersTx * _txErrorStats;
    AWDChipCountersTx * _txGeneralStats;
    AWDWPA2Counters * _ucastWPA2Counters;
}

@property (nonatomic, retain) NSMutableArray *frameCounterPerInterfaces;
@property (nonatomic, retain) AWDWiFiMetricsManagerFrameCounterStats *frameCounters;
@property (nonatomic, readonly) bool hasFrameCounters;
@property (nonatomic, readonly) bool hasMcastWPA2Counters;
@property (nonatomic, readonly) bool hasRxGeneralStats;
@property (nonatomic, readonly) bool hasRxMACCounterStats;
@property (nonatomic, readonly) bool hasRxMACErrorStats;
@property (nonatomic, readonly) bool hasRxPhyErrors;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTxErrorStats;
@property (nonatomic, readonly) bool hasTxGeneralStats;
@property (nonatomic, readonly) bool hasUcastWPA2Counters;
@property (nonatomic, retain) AWDWPA2Counters *mcastWPA2Counters;
@property (nonatomic, retain) AWDChipCountersRx *rxGeneralStats;
@property (nonatomic, retain) AWDMacCountersRx *rxMACCounterStats;
@property (nonatomic, retain) AWDMacCountersRxErrors *rxMACErrorStats;
@property (nonatomic, retain) AWDRxPhyErrors *rxPhyErrors;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) AWDChipErrorCountersTx *txErrorStats;
@property (nonatomic, retain) AWDChipCountersTx *txGeneralStats;
@property (nonatomic, retain) AWDWPA2Counters *ucastWPA2Counters;

+ (Class)frameCounterPerInterfaceType;

- (void)addFrameCounterPerInterface:(id)arg1;
- (void)clearFrameCounterPerInterfaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)frameCounterPerInterfaceAtIndex:(unsigned long long)arg1;
- (id)frameCounterPerInterfaces;
- (unsigned long long)frameCounterPerInterfacesCount;
- (id)frameCounters;
- (bool)hasFrameCounters;
- (bool)hasMcastWPA2Counters;
- (bool)hasRxGeneralStats;
- (bool)hasRxMACCounterStats;
- (bool)hasRxMACErrorStats;
- (bool)hasRxPhyErrors;
- (bool)hasTimestamp;
- (bool)hasTxErrorStats;
- (bool)hasTxGeneralStats;
- (bool)hasUcastWPA2Counters;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mcastWPA2Counters;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rxGeneralStats;
- (id)rxMACCounterStats;
- (id)rxMACErrorStats;
- (id)rxPhyErrors;
- (void)setFrameCounterPerInterfaces:(id)arg1;
- (void)setFrameCounters:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMcastWPA2Counters:(id)arg1;
- (void)setRxGeneralStats:(id)arg1;
- (void)setRxMACCounterStats:(id)arg1;
- (void)setRxMACErrorStats:(id)arg1;
- (void)setRxPhyErrors:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxErrorStats:(id)arg1;
- (void)setTxGeneralStats:(id)arg1;
- (void)setUcastWPA2Counters:(id)arg1;
- (unsigned long long)timestamp;
- (id)txErrorStats;
- (id)txGeneralStats;
- (id)ucastWPA2Counters;
- (void)writeTo:(id)arg1;

@end
