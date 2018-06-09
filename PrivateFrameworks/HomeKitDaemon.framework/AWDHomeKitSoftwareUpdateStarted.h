/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitSoftwareUpdateStarted : PBCodable <NSCopying> {
    unsigned int  _duration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int resultErrorCode : 1; 
        unsigned int isAutomaticUpdateEnabled : 1; 
    }  _has;
    bool  _isAutomaticUpdateEnabled;
    unsigned int  _resultErrorCode;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasIsAutomaticUpdateEnabled;
@property (nonatomic) bool hasResultErrorCode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isAutomaticUpdateEnabled;
@property (nonatomic) unsigned int resultErrorCode;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasDuration;
- (bool)hasIsAutomaticUpdateEnabled;
- (bool)hasResultErrorCode;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isAutomaticUpdateEnabled;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)resultErrorCode;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasIsAutomaticUpdateEnabled:(bool)arg1;
- (void)setHasResultErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsAutomaticUpdateEnabled:(bool)arg1;
- (void)setResultErrorCode:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
