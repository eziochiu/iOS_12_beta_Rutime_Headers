/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTFTrafficSnapshot : PBCodable <NSCopying> {
    NSMutableArray * _compactSpeeds;
    NSString * _feedId;
    unsigned long long  _feedPublishTime;
    long long  _feedUpdateTime;
    struct { 
        unsigned int feedPublishTime : 1; 
        unsigned int feedUpdateTime : 1; 
        unsigned int trafficVersion : 1; 
    }  _has;
    NSMutableArray * _incidents;
    NSMutableArray * _regions;
    NSString * _snapshotId;
    NSMutableArray * _speeds;
    unsigned int  _trafficVersion;
}

@property (nonatomic, retain) NSMutableArray *compactSpeeds;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) unsigned long long feedPublishTime;
@property (nonatomic) long long feedUpdateTime;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedPublishTime;
@property (nonatomic) bool hasFeedUpdateTime;
@property (nonatomic, readonly) bool hasSnapshotId;
@property (nonatomic) bool hasTrafficVersion;
@property (nonatomic, retain) NSMutableArray *incidents;
@property (nonatomic, retain) NSMutableArray *regions;
@property (nonatomic, retain) NSString *snapshotId;
@property (nonatomic, retain) NSMutableArray *speeds;
@property (nonatomic) unsigned int trafficVersion;

+ (Class)compactSpeedsType;
+ (Class)incidentsType;
+ (Class)regionType;
+ (Class)speedsType;

- (void).cxx_destruct;
- (void)addCompactSpeeds:(id)arg1;
- (void)addIncidents:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)addSpeeds:(id)arg1;
- (void)clearCompactSpeeds;
- (void)clearIncidents;
- (void)clearRegions;
- (void)clearSpeeds;
- (id)compactSpeeds;
- (id)compactSpeedsAtIndex:(unsigned long long)arg1;
- (unsigned long long)compactSpeedsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (unsigned long long)feedPublishTime;
- (long long)feedUpdateTime;
- (bool)hasFeedId;
- (bool)hasFeedPublishTime;
- (bool)hasFeedUpdateTime;
- (bool)hasSnapshotId;
- (bool)hasTrafficVersion;
- (unsigned long long)hash;
- (id)incidents;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)regionAtIndex:(unsigned long long)arg1;
- (id)regions;
- (unsigned long long)regionsCount;
- (void)setCompactSpeeds:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedPublishTime:(unsigned long long)arg1;
- (void)setFeedUpdateTime:(long long)arg1;
- (void)setHasFeedPublishTime:(bool)arg1;
- (void)setHasFeedUpdateTime:(bool)arg1;
- (void)setHasTrafficVersion:(bool)arg1;
- (void)setIncidents:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setSnapshotId:(id)arg1;
- (void)setSpeeds:(id)arg1;
- (void)setTrafficVersion:(unsigned int)arg1;
- (id)snapshotId;
- (id)speeds;
- (id)speedsAtIndex:(unsigned long long)arg1;
- (unsigned long long)speedsCount;
- (unsigned int)trafficVersion;
- (void)writeTo:(id)arg1;

@end
