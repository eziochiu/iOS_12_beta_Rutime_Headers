/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreConnectionTCPInfoMetrics : NSObject {
    NSNumber * _bytesReceived;
    NSNumber * _bytesRetransmitted;
    NSNumber * _bytesSent;
    NSNumber * _bytesUnacked;
    NSNumber * _duplicateBytesReceived;
    NSString * _interfaceName;
    NSNumber * _outOfOrderBytesReceived;
    NSNumber * _packetsReceived;
    NSNumber * _packetsSent;
    NSNumber * _rttBest;
    NSNumber * _rttCurrent;
    NSNumber * _rttSmoothed;
    NSNumber * _rttVariance;
    NSNumber * _sendBandwidth;
    NSNumber * _synRetransmits;
    NSNumber * _tfoSynDataAcked;
}

@property (nonatomic, readonly, copy) NSNumber *bytesReceived;
@property (nonatomic, readonly, copy) NSNumber *bytesRetransmitted;
@property (nonatomic, readonly, copy) NSNumber *bytesSent;
@property (nonatomic, readonly, copy) NSNumber *bytesUnacked;
@property (nonatomic, readonly, copy) NSNumber *duplicateBytesReceived;
@property (nonatomic, readonly, copy) NSString *interfaceName;
@property (nonatomic, readonly, copy) NSNumber *outOfOrderBytesReceived;
@property (nonatomic, readonly, copy) NSNumber *packetsReceived;
@property (nonatomic, readonly, copy) NSNumber *packetsSent;
@property (nonatomic, readonly, copy) NSNumber *rttBest;
@property (nonatomic, readonly, copy) NSNumber *rttCurrent;
@property (nonatomic, readonly, copy) NSNumber *rttSmoothed;
@property (nonatomic, readonly, copy) NSNumber *rttVariance;
@property (nonatomic, readonly, copy) NSNumber *sendBandwidth;
@property (nonatomic, readonly, copy) NSNumber *synRetransmits;
@property (nonatomic, readonly, copy) NSNumber *tfoSynDataAcked;

- (void).cxx_destruct;
- (id)bytesReceived;
- (id)bytesRetransmitted;
- (id)bytesSent;
- (id)bytesUnacked;
- (id)description;
- (id)duplicateBytesReceived;
- (id)init;
- (id)initWithInterfaceName:(id)arg1 rttCurrent:(id)arg2 rttSmoothed:(id)arg3 rttVariance:(id)arg4 rttBest:(id)arg5 packetsSent:(id)arg6 bytesSent:(id)arg7 bytesRetransmitted:(id)arg8 bytesUnacked:(id)arg9 packetsReceived:(id)arg10 bytesReceived:(id)arg11 duplicateBytesReceived:(id)arg12 outOfOrderBytesReceived:(id)arg13 sendBandwidth:(id)arg14 synRetransmits:(id)arg15 tfoSynDataAcked:(id)arg16;
- (id)interfaceName;
- (id)outOfOrderBytesReceived;
- (id)packetsReceived;
- (id)packetsSent;
- (id)rttBest;
- (id)rttCurrent;
- (id)rttSmoothed;
- (id)rttVariance;
- (id)sendBandwidth;
- (id)synRetransmits;
- (id)tfoSynDataAcked;

@end
