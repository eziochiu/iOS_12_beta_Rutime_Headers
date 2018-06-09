/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLibnetcoreTCPStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int tcpConnectionAccepts : 1; 
        unsigned int tcpConnectionAttempts : 1; 
        unsigned int tcpIPv4AvgRTT : 1; 
        unsigned int tcpIPv6AvgRTT : 1; 
        unsigned int tcpRecvPLR : 1; 
        unsigned int tcpSendPLR : 1; 
        unsigned int tcpSendReorderRate : 1; 
        unsigned int tcpSendTLRTO : 1; 
    }  _has;
    unsigned long long  _tcpConnectionAccepts;
    unsigned long long  _tcpConnectionAttempts;
    unsigned long long  _tcpIPv4AvgRTT;
    unsigned long long  _tcpIPv6AvgRTT;
    unsigned long long  _tcpRecvPLR;
    unsigned long long  _tcpSendPLR;
    unsigned long long  _tcpSendReorderRate;
    unsigned long long  _tcpSendTLRTO;
}

@property (nonatomic) bool hasTcpConnectionAccepts;
@property (nonatomic) bool hasTcpConnectionAttempts;
@property (nonatomic) bool hasTcpIPv4AvgRTT;
@property (nonatomic) bool hasTcpIPv6AvgRTT;
@property (nonatomic) bool hasTcpRecvPLR;
@property (nonatomic) bool hasTcpSendPLR;
@property (nonatomic) bool hasTcpSendReorderRate;
@property (nonatomic) bool hasTcpSendTLRTO;
@property (nonatomic) unsigned long long tcpConnectionAccepts;
@property (nonatomic) unsigned long long tcpConnectionAttempts;
@property (nonatomic) unsigned long long tcpIPv4AvgRTT;
@property (nonatomic) unsigned long long tcpIPv6AvgRTT;
@property (nonatomic) unsigned long long tcpRecvPLR;
@property (nonatomic) unsigned long long tcpSendPLR;
@property (nonatomic) unsigned long long tcpSendReorderRate;
@property (nonatomic) unsigned long long tcpSendTLRTO;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTcpConnectionAccepts;
- (bool)hasTcpConnectionAttempts;
- (bool)hasTcpIPv4AvgRTT;
- (bool)hasTcpIPv6AvgRTT;
- (bool)hasTcpRecvPLR;
- (bool)hasTcpSendPLR;
- (bool)hasTcpSendReorderRate;
- (bool)hasTcpSendTLRTO;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTcpConnectionAccepts:(bool)arg1;
- (void)setHasTcpConnectionAttempts:(bool)arg1;
- (void)setHasTcpIPv4AvgRTT:(bool)arg1;
- (void)setHasTcpIPv6AvgRTT:(bool)arg1;
- (void)setHasTcpRecvPLR:(bool)arg1;
- (void)setHasTcpSendPLR:(bool)arg1;
- (void)setHasTcpSendReorderRate:(bool)arg1;
- (void)setHasTcpSendTLRTO:(bool)arg1;
- (void)setTcpConnectionAccepts:(unsigned long long)arg1;
- (void)setTcpConnectionAttempts:(unsigned long long)arg1;
- (void)setTcpIPv4AvgRTT:(unsigned long long)arg1;
- (void)setTcpIPv6AvgRTT:(unsigned long long)arg1;
- (void)setTcpRecvPLR:(unsigned long long)arg1;
- (void)setTcpSendPLR:(unsigned long long)arg1;
- (void)setTcpSendReorderRate:(unsigned long long)arg1;
- (void)setTcpSendTLRTO:(unsigned long long)arg1;
- (unsigned long long)tcpConnectionAccepts;
- (unsigned long long)tcpConnectionAttempts;
- (unsigned long long)tcpIPv4AvgRTT;
- (unsigned long long)tcpIPv6AvgRTT;
- (unsigned long long)tcpRecvPLR;
- (unsigned long long)tcpSendPLR;
- (unsigned long long)tcpSendReorderRate;
- (unsigned long long)tcpSendTLRTO;
- (void)writeTo:(id)arg1;

@end
