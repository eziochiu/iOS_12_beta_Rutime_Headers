/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushKeepAliveFailed : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    unsigned int  _currentGrowthStage;
    unsigned int  _dualChannelState;
    int  _error;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentGrowthStage : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int error : 1; 
        unsigned int keepAliveVersion : 1; 
        unsigned int lastKeepAliveInterval : 1; 
        unsigned int linkQuality : 1; 
        unsigned int timeSinceConnected : 1; 
        unsigned int timeSinceLastSuccessfulKeepAlive : 1; 
    }  _has;
    unsigned int  _keepAliveVersion;
    unsigned int  _lastKeepAliveInterval;
    int  _linkQuality;
    unsigned int  _timeSinceConnected;
    unsigned int  _timeSinceLastSuccessfulKeepAlive;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int currentGrowthStage;
@property (nonatomic) unsigned int dualChannelState;
@property (nonatomic) int error;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasCurrentGrowthStage;
@property (nonatomic) bool hasDualChannelState;
@property (nonatomic) bool hasError;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasKeepAliveVersion;
@property (nonatomic) bool hasLastKeepAliveInterval;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasTimeSinceConnected;
@property (nonatomic) bool hasTimeSinceLastSuccessfulKeepAlive;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int keepAliveVersion;
@property (nonatomic) unsigned int lastKeepAliveInterval;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int timeSinceConnected;
@property (nonatomic) unsigned int timeSinceLastSuccessfulKeepAlive;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentGrowthStage;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dualChannelState;
- (int)error;
- (id)guid;
- (bool)hasConnectionType;
- (bool)hasCurrentGrowthStage;
- (bool)hasDualChannelState;
- (bool)hasError;
- (bool)hasGuid;
- (bool)hasKeepAliveVersion;
- (bool)hasLastKeepAliveInterval;
- (bool)hasLinkQuality;
- (bool)hasTimeSinceConnected;
- (bool)hasTimeSinceLastSuccessfulKeepAlive;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)keepAliveVersion;
- (unsigned int)lastKeepAliveInterval;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setCurrentGrowthStage:(unsigned int)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (void)setError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasCurrentGrowthStage:(bool)arg1;
- (void)setHasDualChannelState:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasKeepAliveVersion:(bool)arg1;
- (void)setHasLastKeepAliveInterval:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasTimeSinceConnected:(bool)arg1;
- (void)setHasTimeSinceLastSuccessfulKeepAlive:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setKeepAliveVersion:(unsigned int)arg1;
- (void)setLastKeepAliveInterval:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setTimeSinceConnected:(unsigned int)arg1;
- (void)setTimeSinceLastSuccessfulKeepAlive:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)timeSinceConnected;
- (unsigned int)timeSinceLastSuccessfulKeepAlive;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
