/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSStreamingReport : PBCodable <NSCopying> {
    unsigned long long  _bytesReceived;
    unsigned long long  _bytesSent;
    NSString * _guid;
    struct { 
        unsigned int bytesReceived : 1; 
        unsigned int bytesSent : 1; 
        unsigned int packetsReceived : 1; 
        unsigned int packetsSent : 1; 
        unsigned int priority : 1; 
        unsigned int samplingInterval : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _packetsReceived;
    unsigned long long  _packetsSent;
    unsigned long long  _priority;
    unsigned long long  _samplingInterval;
    NSString * _service;
    NSString * _streamName;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long bytesReceived;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasBytesReceived;
@property (nonatomic) bool hasBytesSent;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasPacketsReceived;
@property (nonatomic) bool hasPacketsSent;
@property (nonatomic) bool hasPriority;
@property (nonatomic) bool hasSamplingInterval;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic, readonly) bool hasStreamName;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long packetsReceived;
@property (nonatomic) unsigned long long packetsSent;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) unsigned long long samplingInterval;
@property (nonatomic, retain) NSString *service;
@property (nonatomic, retain) NSString *streamName;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)bytesReceived;
- (unsigned long long)bytesSent;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasBytesReceived;
- (bool)hasBytesSent;
- (bool)hasGuid;
- (bool)hasPacketsReceived;
- (bool)hasPacketsSent;
- (bool)hasPriority;
- (bool)hasSamplingInterval;
- (bool)hasService;
- (bool)hasStreamName;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)packetsReceived;
- (unsigned long long)packetsSent;
- (unsigned long long)priority;
- (bool)readFrom:(id)arg1;
- (unsigned long long)samplingInterval;
- (id)service;
- (void)setBytesReceived:(unsigned long long)arg1;
- (void)setBytesSent:(unsigned long long)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasBytesReceived:(bool)arg1;
- (void)setHasBytesSent:(bool)arg1;
- (void)setHasPacketsReceived:(bool)arg1;
- (void)setHasPacketsSent:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasSamplingInterval:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPacketsReceived:(unsigned long long)arg1;
- (void)setPacketsSent:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setSamplingInterval:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setStreamName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)streamName;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
