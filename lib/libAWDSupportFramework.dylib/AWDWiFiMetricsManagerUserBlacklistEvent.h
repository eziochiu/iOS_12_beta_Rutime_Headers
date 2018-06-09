/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerUserBlacklistEvent : PBCodable <NSCopying> {
    NSString * _apuuid;
    unsigned long long  _blacklistDuration;
    unsigned long long  _dstChange;
    unsigned int  _eventType;
    struct { 
        unsigned int blacklistDuration : 1; 
        unsigned int dstChange : 1; 
        unsigned int timestamp : 1; 
        unsigned int trigger : 1; 
        unsigned int eventType : 1; 
        unsigned int locState : 1; 
        unsigned int moState : 1; 
        unsigned int securityType : 1; 
    }  _has;
    unsigned int  _locState;
    unsigned int  _moState;
    unsigned int  _securityType;
    NSString * _ssid;
    unsigned long long  _timestamp;
    unsigned long long  _trigger;
}

@property (nonatomic, retain) NSString *apuuid;
@property (nonatomic) unsigned long long blacklistDuration;
@property (nonatomic) unsigned long long dstChange;
@property (nonatomic) unsigned int eventType;
@property (nonatomic, readonly) bool hasApuuid;
@property (nonatomic) bool hasBlacklistDuration;
@property (nonatomic) bool hasDstChange;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasLocState;
@property (nonatomic) bool hasMoState;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic, readonly) bool hasSsid;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTrigger;
@property (nonatomic) unsigned int locState;
@property (nonatomic) unsigned int moState;
@property (nonatomic) unsigned int securityType;
@property (nonatomic, retain) NSString *ssid;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long trigger;

- (id)apuuid;
- (unsigned long long)blacklistDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)dstChange;
- (unsigned int)eventType;
- (bool)hasApuuid;
- (bool)hasBlacklistDuration;
- (bool)hasDstChange;
- (bool)hasEventType;
- (bool)hasLocState;
- (bool)hasMoState;
- (bool)hasSecurityType;
- (bool)hasSsid;
- (bool)hasTimestamp;
- (bool)hasTrigger;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)locState;
- (void)mergeFrom:(id)arg1;
- (unsigned int)moState;
- (bool)readFrom:(id)arg1;
- (unsigned int)securityType;
- (void)setApuuid:(id)arg1;
- (void)setBlacklistDuration:(unsigned long long)arg1;
- (void)setDstChange:(unsigned long long)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHasBlacklistDuration:(bool)arg1;
- (void)setHasDstChange:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasLocState:(bool)arg1;
- (void)setHasMoState:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setLocState:(unsigned int)arg1;
- (void)setMoState:(unsigned int)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setSsid:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTrigger:(unsigned long long)arg1;
- (id)ssid;
- (unsigned long long)timestamp;
- (unsigned long long)trigger;
- (void)writeTo:(id)arg1;

@end