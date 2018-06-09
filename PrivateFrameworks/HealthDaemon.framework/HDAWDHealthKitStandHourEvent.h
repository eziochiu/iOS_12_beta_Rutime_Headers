/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitStandHourEvent : PBCodable <NSCopying> {
    bool  _didStand;
    struct { 
        unsigned int standHourTimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int didStand : 1; 
    }  _has;
    long long  _standHourTimestamp;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool didStand;
@property (nonatomic) bool hasDidStand;
@property (nonatomic) bool hasStandHourTimestamp;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) long long standHourTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didStand;
- (bool)hasDidStand;
- (bool)hasStandHourTimestamp;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDidStand:(bool)arg1;
- (void)setHasDidStand:(bool)arg1;
- (void)setHasStandHourTimestamp:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setStandHourTimestamp:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)standHourTimestamp;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
