/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiMostUsedNetworks : PBCodable <NSCopying> {
    unsigned int  _apOUI;
    NSData * _apOui;
    NSString * _bundleID;
    struct { 
        unsigned int timeUsed : 1; 
        unsigned int apOUI : 1; 
        unsigned int networkScore : 1; 
        unsigned int networkScoreBitMap : 1; 
        unsigned int securityType : 1; 
        unsigned int switchToCount : 1; 
        unsigned int switchedAwayFromCount : 1; 
        unsigned int timeUsedMinutes : 1; 
    }  _has;
    int  _networkScore;
    unsigned int  _networkScoreBitMap;
    unsigned int  _securityType;
    unsigned int  _switchToCount;
    unsigned int  _switchedAwayFromCount;
    double  _timeUsed;
    unsigned int  _timeUsedMinutes;
}

@property (nonatomic) unsigned int apOUI;
@property (nonatomic, retain) NSData *apOui;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) bool hasApOUI;
@property (nonatomic, readonly) bool hasApOui;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasNetworkScore;
@property (nonatomic) bool hasNetworkScoreBitMap;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasSwitchToCount;
@property (nonatomic) bool hasSwitchedAwayFromCount;
@property (nonatomic) bool hasTimeUsed;
@property (nonatomic) bool hasTimeUsedMinutes;
@property (nonatomic) int networkScore;
@property (nonatomic) unsigned int networkScoreBitMap;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) unsigned int switchToCount;
@property (nonatomic) unsigned int switchedAwayFromCount;
@property (nonatomic) double timeUsed;
@property (nonatomic) unsigned int timeUsedMinutes;

- (unsigned int)apOUI;
- (id)apOui;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApOUI;
- (bool)hasApOui;
- (bool)hasBundleID;
- (bool)hasNetworkScore;
- (bool)hasNetworkScoreBitMap;
- (bool)hasSecurityType;
- (bool)hasSwitchToCount;
- (bool)hasSwitchedAwayFromCount;
- (bool)hasTimeUsed;
- (bool)hasTimeUsedMinutes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)networkScore;
- (unsigned int)networkScoreBitMap;
- (bool)readFrom:(id)arg1;
- (unsigned int)securityType;
- (void)setApOUI:(unsigned int)arg1;
- (void)setApOui:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setHasApOUI:(bool)arg1;
- (void)setHasNetworkScore:(bool)arg1;
- (void)setHasNetworkScoreBitMap:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasSwitchToCount:(bool)arg1;
- (void)setHasSwitchedAwayFromCount:(bool)arg1;
- (void)setHasTimeUsed:(bool)arg1;
- (void)setHasTimeUsedMinutes:(bool)arg1;
- (void)setNetworkScore:(int)arg1;
- (void)setNetworkScoreBitMap:(unsigned int)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setSwitchToCount:(unsigned int)arg1;
- (void)setSwitchedAwayFromCount:(unsigned int)arg1;
- (void)setTimeUsed:(double)arg1;
- (void)setTimeUsedMinutes:(unsigned int)arg1;
- (unsigned int)switchToCount;
- (unsigned int)switchedAwayFromCount;
- (double)timeUsed;
- (unsigned int)timeUsedMinutes;
- (void)writeTo:(id)arg1;

@end
