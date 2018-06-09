/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushSent : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    unsigned int  _dualChannelState;
    unsigned int  _error;
    unsigned int  _flushes;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int error : 1; 
        unsigned int flushes : 1; 
        unsigned int linkQuality : 1; 
        unsigned int payloadSize : 1; 
        unsigned int sendDuration : 1; 
    }  _has;
    int  _linkQuality;
    unsigned int  _payloadSize;
    unsigned int  _sendDuration;
    unsigned long long  _timestamp;
    NSString * _topic;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int dualChannelState;
@property (nonatomic) unsigned int error;
@property (nonatomic) unsigned int flushes;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasDualChannelState;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasFlushes;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasPayloadSize;
@property (nonatomic) bool hasSendDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTopic;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int payloadSize;
@property (nonatomic) unsigned int sendDuration;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *topic;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dualChannelState;
- (unsigned int)error;
- (unsigned int)flushes;
- (id)guid;
- (bool)hasConnectionType;
- (bool)hasDualChannelState;
- (bool)hasError;
- (bool)hasFlushes;
- (bool)hasGuid;
- (bool)hasLinkQuality;
- (bool)hasPayloadSize;
- (bool)hasSendDuration;
- (bool)hasTimestamp;
- (bool)hasTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)payloadSize;
- (bool)readFrom:(id)arg1;
- (unsigned int)sendDuration;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setFlushes:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasDualChannelState:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasFlushes:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasPayloadSize:(bool)arg1;
- (void)setHasSendDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTopic:(id)arg1;
- (unsigned long long)timestamp;
- (id)topic;
- (void)writeTo:(id)arg1;

@end
