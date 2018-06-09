/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerPowerStatsUpdateEvent : PBCodable <NSCopying> {
    unsigned int  _associatedSleepDur;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int associatedSleepDur : 1; 
        unsigned int roamDur : 1; 
        unsigned int totalDur : 1; 
        unsigned int type : 1; 
        unsigned int unassociatedSleepDur : 1; 
    }  _has;
    unsigned int  _roamDur;
    unsigned long long  _timestamp;
    unsigned int  _totalDur;
    unsigned int  _type;
    unsigned int  _unassociatedSleepDur;
}

@property (nonatomic) unsigned int associatedSleepDur;
@property (nonatomic) bool hasAssociatedSleepDur;
@property (nonatomic) bool hasRoamDur;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalDur;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUnassociatedSleepDur;
@property (nonatomic) unsigned int roamDur;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalDur;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int unassociatedSleepDur;

- (unsigned int)associatedSleepDur;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssociatedSleepDur;
- (bool)hasRoamDur;
- (bool)hasTimestamp;
- (bool)hasTotalDur;
- (bool)hasType;
- (bool)hasUnassociatedSleepDur;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)roamDur;
- (void)setAssociatedSleepDur:(unsigned int)arg1;
- (void)setHasAssociatedSleepDur:(bool)arg1;
- (void)setHasRoamDur:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalDur:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUnassociatedSleepDur:(bool)arg1;
- (void)setRoamDur:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalDur:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUnassociatedSleepDur:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)totalDur;
- (unsigned int)type;
- (unsigned int)unassociatedSleepDur;
- (void)writeTo:(id)arg1;

@end
