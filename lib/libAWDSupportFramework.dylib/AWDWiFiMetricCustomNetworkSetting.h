/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricCustomNetworkSetting : PBCodable <NSCopying> {
    unsigned int  _autoProxySetCount;
    unsigned int  _bootpSetCount;
    unsigned int  _customNetworkCount;
    unsigned int  _dhcpSetCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int autoProxySetCount : 1; 
        unsigned int bootpSetCount : 1; 
        unsigned int customNetworkCount : 1; 
        unsigned int dhcpSetCount : 1; 
        unsigned int manualProxySetCount : 1; 
        unsigned int staticSetCount : 1; 
        unsigned int totalNetworkCount : 1; 
    }  _has;
    unsigned int  _manualProxySetCount;
    unsigned int  _staticSetCount;
    unsigned long long  _timestamp;
    unsigned int  _totalNetworkCount;
}

@property (nonatomic) unsigned int autoProxySetCount;
@property (nonatomic) unsigned int bootpSetCount;
@property (nonatomic) unsigned int customNetworkCount;
@property (nonatomic) unsigned int dhcpSetCount;
@property (nonatomic) bool hasAutoProxySetCount;
@property (nonatomic) bool hasBootpSetCount;
@property (nonatomic) bool hasCustomNetworkCount;
@property (nonatomic) bool hasDhcpSetCount;
@property (nonatomic) bool hasManualProxySetCount;
@property (nonatomic) bool hasStaticSetCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalNetworkCount;
@property (nonatomic) unsigned int manualProxySetCount;
@property (nonatomic) unsigned int staticSetCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalNetworkCount;

- (unsigned int)autoProxySetCount;
- (unsigned int)bootpSetCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)customNetworkCount;
- (id)description;
- (unsigned int)dhcpSetCount;
- (id)dictionaryRepresentation;
- (bool)hasAutoProxySetCount;
- (bool)hasBootpSetCount;
- (bool)hasCustomNetworkCount;
- (bool)hasDhcpSetCount;
- (bool)hasManualProxySetCount;
- (bool)hasStaticSetCount;
- (bool)hasTimestamp;
- (bool)hasTotalNetworkCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)manualProxySetCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutoProxySetCount:(unsigned int)arg1;
- (void)setBootpSetCount:(unsigned int)arg1;
- (void)setCustomNetworkCount:(unsigned int)arg1;
- (void)setDhcpSetCount:(unsigned int)arg1;
- (void)setHasAutoProxySetCount:(bool)arg1;
- (void)setHasBootpSetCount:(bool)arg1;
- (void)setHasCustomNetworkCount:(bool)arg1;
- (void)setHasDhcpSetCount:(bool)arg1;
- (void)setHasManualProxySetCount:(bool)arg1;
- (void)setHasStaticSetCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalNetworkCount:(bool)arg1;
- (void)setManualProxySetCount:(unsigned int)arg1;
- (void)setStaticSetCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalNetworkCount:(unsigned int)arg1;
- (unsigned int)staticSetCount;
- (unsigned long long)timestamp;
- (unsigned int)totalNetworkCount;
- (void)writeTo:(id)arg1;

@end
