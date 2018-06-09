/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitCloudSyncStatusEvent : PBCodable <NSCopying> {
    unsigned long long  _baselineEpoch;
    unsigned long long  _emptyZoneCount;
    HDAWDHealthKitCloudSyncEvent * _event;
    struct { 
        unsigned int baselineEpoch : 1; 
        unsigned int emptyZoneCount : 1; 
        unsigned int timeSinceDownloadSuccess : 1; 
        unsigned int timeSinceLastUploadForwardProgress : 1; 
        unsigned int timeSinceUploadSuccess : 1; 
        unsigned int timeUntilRebaseRequired : 1; 
        unsigned int timestamp : 1; 
        unsigned int hasEncounteredGapInCurrentEpoch : 1; 
    }  _has;
    bool  _hasEncounteredGapInCurrentEpoch;
    unsigned long long  _timeSinceDownloadSuccess;
    unsigned long long  _timeSinceLastUploadForwardProgress;
    unsigned long long  _timeSinceUploadSuccess;
    unsigned long long  _timeUntilRebaseRequired;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long baselineEpoch;
@property (nonatomic) unsigned long long emptyZoneCount;
@property (nonatomic, retain) HDAWDHealthKitCloudSyncEvent *event;
@property (nonatomic) bool hasBaselineEpoch;
@property (nonatomic) bool hasEmptyZoneCount;
@property (nonatomic) bool hasEncounteredGapInCurrentEpoch;
@property (nonatomic, readonly) bool hasEvent;
@property (nonatomic) bool hasHasEncounteredGapInCurrentEpoch;
@property (nonatomic) bool hasTimeSinceDownloadSuccess;
@property (nonatomic) bool hasTimeSinceLastUploadForwardProgress;
@property (nonatomic) bool hasTimeSinceUploadSuccess;
@property (nonatomic) bool hasTimeUntilRebaseRequired;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timeSinceDownloadSuccess;
@property (nonatomic) unsigned long long timeSinceLastUploadForwardProgress;
@property (nonatomic) unsigned long long timeSinceUploadSuccess;
@property (nonatomic) unsigned long long timeUntilRebaseRequired;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (unsigned long long)baselineEpoch;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)emptyZoneCount;
- (id)event;
- (bool)hasBaselineEpoch;
- (bool)hasEmptyZoneCount;
- (bool)hasEncounteredGapInCurrentEpoch;
- (bool)hasEvent;
- (bool)hasHasEncounteredGapInCurrentEpoch;
- (bool)hasTimeSinceDownloadSuccess;
- (bool)hasTimeSinceLastUploadForwardProgress;
- (bool)hasTimeSinceUploadSuccess;
- (bool)hasTimeUntilRebaseRequired;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBaselineEpoch:(unsigned long long)arg1;
- (void)setEmptyZoneCount:(unsigned long long)arg1;
- (void)setEvent:(id)arg1;
- (void)setHasBaselineEpoch:(bool)arg1;
- (void)setHasEmptyZoneCount:(bool)arg1;
- (void)setHasEncounteredGapInCurrentEpoch:(bool)arg1;
- (void)setHasHasEncounteredGapInCurrentEpoch:(bool)arg1;
- (void)setHasTimeSinceDownloadSuccess:(bool)arg1;
- (void)setHasTimeSinceLastUploadForwardProgress:(bool)arg1;
- (void)setHasTimeSinceUploadSuccess:(bool)arg1;
- (void)setHasTimeUntilRebaseRequired:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimeSinceDownloadSuccess:(unsigned long long)arg1;
- (void)setTimeSinceLastUploadForwardProgress:(unsigned long long)arg1;
- (void)setTimeSinceUploadSuccess:(unsigned long long)arg1;
- (void)setTimeUntilRebaseRequired:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timeSinceDownloadSuccess;
- (unsigned long long)timeSinceLastUploadForwardProgress;
- (unsigned long long)timeSinceUploadSuccess;
- (unsigned long long)timeUntilRebaseRequired;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
