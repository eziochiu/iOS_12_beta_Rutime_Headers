/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCompanionSyncFullSyncDuration : PBCodable <NSCopying> {
    struct { 
        unsigned int syncDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int isMaster : 1; 
    }  _has;
    bool  _isMaster;
    NSString * _service;
    unsigned long long  _syncDuration;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasIsMaster;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasSyncDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isMaster;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long syncDuration;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsMaster;
- (bool)hasService;
- (bool)hasSyncDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMaster;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setHasIsMaster:(bool)arg1;
- (void)setHasSyncDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsMaster:(bool)arg1;
- (void)setService:(id)arg1;
- (void)setSyncDuration:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)syncDuration;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
