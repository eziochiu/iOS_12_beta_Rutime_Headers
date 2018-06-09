/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitWorkoutSessionEvent : PBCodable <NSCopying> {
    int  _activityType;
    int  _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int activityType : 1; 
        unsigned int eventType : 1; 
    }  _has;
    NSString * _sessionUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic) int activityType;
@property (nonatomic) int eventType;
@property (nonatomic) bool hasActivityType;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)StringAsActivityType:(id)arg1;
- (int)StringAsEventType:(id)arg1;
- (int)activityType;
- (id)activityTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasActivityType;
- (bool)hasEventType;
- (bool)hasSessionUUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setActivityType:(int)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasActivityType:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
