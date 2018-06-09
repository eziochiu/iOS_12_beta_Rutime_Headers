/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineSettingsSessionDuration : PBCodable <NSCopying> {
    int  _duration;
    int  _endedByScreenLock;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int endedByScreenLock : 1; 
    }  _has;
    NSString * _sessionId;
    unsigned long long  _timestamp;
}

@property (nonatomic) int duration;
@property (nonatomic) int endedByScreenLock;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEndedByScreenLock;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)duration;
- (int)endedByScreenLock;
- (bool)hasDuration;
- (bool)hasEndedByScreenLock;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setDuration:(int)arg1;
- (void)setEndedByScreenLock:(int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEndedByScreenLock:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
