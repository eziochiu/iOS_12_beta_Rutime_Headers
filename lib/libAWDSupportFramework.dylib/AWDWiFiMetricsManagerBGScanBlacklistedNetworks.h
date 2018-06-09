/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerBGScanBlacklistedNetworks : PBCodable <NSCopying> {
    NSMutableArray * _blacklistingHistorys;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _interfaceName;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *blacklistingHistorys;
@property (nonatomic, readonly) bool hasInterfaceName;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *interfaceName;
@property (nonatomic) unsigned long long timestamp;

+ (Class)blacklistingHistoryType;

- (void)addBlacklistingHistory:(id)arg1;
- (id)blacklistingHistoryAtIndex:(unsigned long long)arg1;
- (id)blacklistingHistorys;
- (unsigned long long)blacklistingHistorysCount;
- (void)clearBlacklistingHistorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInterfaceName;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)interfaceName;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBlacklistingHistorys:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
