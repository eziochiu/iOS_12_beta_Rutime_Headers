/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPTCPInfo : PBCodable <NSSecureCoding, _CPTCPInfo> {
    unsigned int  _avgRTT;
    unsigned long long  _cellRXPackets;
    unsigned long long  _cellTXPackets;
    unsigned int  _connectAttempts;
    unsigned int  _connectSuccesses;
    unsigned int  _minRTT;
    unsigned long long  _rxBytes;
    unsigned long long  _rxDuplicateBytes;
    unsigned long long  _rxOutOfOrderBytes;
    unsigned long long  _rxPackets;
    NSString * _statsType;
    unsigned long long  _txBytes;
    unsigned long long  _txPackets;
    unsigned long long  _txRetransmitBytes;
    unsigned long long  _txRetransmitPackets;
    unsigned int  _varRTT;
    unsigned long long  _wifiRXPackets;
    unsigned long long  _wifiTXPackets;
    unsigned long long  _wiredRXPackets;
    unsigned long long  _wiredTXPackets;
}

@property (nonatomic) unsigned int avgRTT;
@property (nonatomic) unsigned long long cellRXPackets;
@property (nonatomic) unsigned long long cellTXPackets;
@property (nonatomic) unsigned int connectAttempts;
@property (nonatomic) unsigned int connectSuccesses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int minRTT;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long rxDuplicateBytes;
@property (nonatomic) unsigned long long rxOutOfOrderBytes;
@property (nonatomic) unsigned long long rxPackets;
@property (nonatomic, copy) NSString *statsType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned long long txPackets;
@property (nonatomic) unsigned long long txRetransmitBytes;
@property (nonatomic) unsigned long long txRetransmitPackets;
@property (nonatomic) unsigned int varRTT;
@property (nonatomic) unsigned long long wifiRXPackets;
@property (nonatomic) unsigned long long wifiTXPackets;
@property (nonatomic) unsigned long long wiredRXPackets;
@property (nonatomic) unsigned long long wiredTXPackets;

- (void).cxx_destruct;
- (unsigned int)avgRTT;
- (unsigned long long)cellRXPackets;
- (unsigned long long)cellTXPackets;
- (unsigned int)connectAttempts;
- (unsigned int)connectSuccesses;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithTelemetryDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)minRTT;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (unsigned long long)rxBytes;
- (unsigned long long)rxDuplicateBytes;
- (unsigned long long)rxOutOfOrderBytes;
- (unsigned long long)rxPackets;
- (void)setAvgRTT:(unsigned int)arg1;
- (void)setCellRXPackets:(unsigned long long)arg1;
- (void)setCellTXPackets:(unsigned long long)arg1;
- (void)setConnectAttempts:(unsigned int)arg1;
- (void)setConnectSuccesses:(unsigned int)arg1;
- (void)setMinRTT:(unsigned int)arg1;
- (void)setRxBytes:(unsigned long long)arg1;
- (void)setRxDuplicateBytes:(unsigned long long)arg1;
- (void)setRxOutOfOrderBytes:(unsigned long long)arg1;
- (void)setRxPackets:(unsigned long long)arg1;
- (void)setStatsType:(id)arg1;
- (void)setTxBytes:(unsigned long long)arg1;
- (void)setTxPackets:(unsigned long long)arg1;
- (void)setTxRetransmitBytes:(unsigned long long)arg1;
- (void)setTxRetransmitPackets:(unsigned long long)arg1;
- (void)setVarRTT:(unsigned int)arg1;
- (void)setWifiRXPackets:(unsigned long long)arg1;
- (void)setWifiTXPackets:(unsigned long long)arg1;
- (void)setWiredRXPackets:(unsigned long long)arg1;
- (void)setWiredTXPackets:(unsigned long long)arg1;
- (id)statsType;
- (unsigned long long)txBytes;
- (unsigned long long)txPackets;
- (unsigned long long)txRetransmitBytes;
- (unsigned long long)txRetransmitPackets;
- (unsigned int)varRTT;
- (unsigned long long)wifiRXPackets;
- (unsigned long long)wifiTXPackets;
- (unsigned long long)wiredRXPackets;
- (unsigned long long)wiredTXPackets;
- (void)writeTo:(id)arg1;

@end
