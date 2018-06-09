/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int reportReason : 1; 
    }  _has;
    NWAWDLibnetcoreMbufStatsReport * _mbufStatisticsReport;
    NWAWDLibnetcoreMPTCPStatsReport * _mptcpStatisticsReport;
    NWAWDLibnetcoreNetworkdStatsReport * _networkdStatisticsReport;
    NWAWDNWAPIUsage * _nwAPIUsageReport;
    unsigned int  _reportReason;
    NSMutableArray * _tcpECNInterfaceReports;
    NWAWDLibnetcoreTCPECNStatsReport * _tcpECNStatisticsReport;
    NWAWDLibnetcoreTCPStatsReport * _tcpStatisticsReport;
    NWAWDLibnetcoreTCPTFOStatsReport * _tcpTFOStatisticsReport;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasMbufStatisticsReport;
@property (nonatomic, readonly) bool hasMptcpStatisticsReport;
@property (nonatomic, readonly) bool hasNetworkdStatisticsReport;
@property (nonatomic, readonly) bool hasNwAPIUsageReport;
@property (nonatomic) bool hasReportReason;
@property (nonatomic, readonly) bool hasTcpECNStatisticsReport;
@property (nonatomic, readonly) bool hasTcpStatisticsReport;
@property (nonatomic, readonly) bool hasTcpTFOStatisticsReport;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NWAWDLibnetcoreMbufStatsReport *mbufStatisticsReport;
@property (nonatomic, retain) NWAWDLibnetcoreMPTCPStatsReport *mptcpStatisticsReport;
@property (nonatomic, retain) NWAWDLibnetcoreNetworkdStatsReport *networkdStatisticsReport;
@property (nonatomic, retain) NWAWDNWAPIUsage *nwAPIUsageReport;
@property (nonatomic) unsigned int reportReason;
@property (nonatomic, retain) NSMutableArray *tcpECNInterfaceReports;
@property (nonatomic, retain) NWAWDLibnetcoreTCPECNStatsReport *tcpECNStatisticsReport;
@property (nonatomic, retain) NWAWDLibnetcoreTCPStatsReport *tcpStatisticsReport;
@property (nonatomic, retain) NWAWDLibnetcoreTCPTFOStatsReport *tcpTFOStatisticsReport;
@property (nonatomic) unsigned long long timestamp;

+ (Class)tcpECNInterfaceReportType;

- (void).cxx_destruct;
- (void)addTcpECNInterfaceReport:(id)arg1;
- (void)clearTcpECNInterfaceReports;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMbufStatisticsReport;
- (bool)hasMptcpStatisticsReport;
- (bool)hasNetworkdStatisticsReport;
- (bool)hasNwAPIUsageReport;
- (bool)hasReportReason;
- (bool)hasTcpECNStatisticsReport;
- (bool)hasTcpStatisticsReport;
- (bool)hasTcpTFOStatisticsReport;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mbufStatisticsReport;
- (void)mergeFrom:(id)arg1;
- (id)mptcpStatisticsReport;
- (id)networkdStatisticsReport;
- (id)nwAPIUsageReport;
- (bool)readFrom:(id)arg1;
- (unsigned int)reportReason;
- (void)setHasReportReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMbufStatisticsReport:(id)arg1;
- (void)setMptcpStatisticsReport:(id)arg1;
- (void)setNetworkdStatisticsReport:(id)arg1;
- (void)setNwAPIUsageReport:(id)arg1;
- (void)setReportReason:(unsigned int)arg1;
- (void)setTcpECNInterfaceReports:(id)arg1;
- (void)setTcpECNStatisticsReport:(id)arg1;
- (void)setTcpStatisticsReport:(id)arg1;
- (void)setTcpTFOStatisticsReport:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)tcpECNInterfaceReportAtIndex:(unsigned long long)arg1;
- (id)tcpECNInterfaceReports;
- (unsigned long long)tcpECNInterfaceReportsCount;
- (id)tcpECNStatisticsReport;
- (id)tcpStatisticsReport;
- (id)tcpTFOStatisticsReport;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
