/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitCoachingEvent : PBCodable <NSCopying> {
    unsigned int  _dismissReason;
    unsigned long long  _duration;
    unsigned long long  _eventTimestamp;
    unsigned int  _eventType;
    HDAWDHealthKitCoachingFeatureGroup * _features;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _goalTypes;
    struct { 
        unsigned int duration : 1; 
        unsigned int eventTimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int dismissReason : 1; 
        unsigned int eventType : 1; 
        unsigned int newGoal : 1; 
        unsigned int recommendedGoal : 1; 
    }  _has;
    unsigned int  _newGoal;
    unsigned int  _recommendedGoal;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int dismissReason;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long eventTimestamp;
@property (nonatomic) unsigned int eventType;
@property (nonatomic, retain) HDAWDHealthKitCoachingFeatureGroup *features;
@property (nonatomic, readonly) unsigned int*goalTypes;
@property (nonatomic, readonly) unsigned long long goalTypesCount;
@property (nonatomic) bool hasDismissReason;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEventTimestamp;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasFeatures;
@property (nonatomic) bool hasNewGoal;
@property (nonatomic) bool hasRecommendedGoal;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int newGoal;
@property (nonatomic) unsigned int recommendedGoal;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addGoalType:(unsigned int)arg1;
- (void)clearGoalTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dismissReason;
- (unsigned long long)duration;
- (unsigned long long)eventTimestamp;
- (unsigned int)eventType;
- (id)features;
- (unsigned int)goalTypeAtIndex:(unsigned long long)arg1;
- (unsigned int*)goalTypes;
- (unsigned long long)goalTypesCount;
- (bool)hasDismissReason;
- (bool)hasDuration;
- (bool)hasEventTimestamp;
- (bool)hasEventType;
- (bool)hasFeatures;
- (bool)hasNewGoal;
- (bool)hasRecommendedGoal;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)newGoal;
- (bool)readFrom:(id)arg1;
- (unsigned int)recommendedGoal;
- (void)setDismissReason:(unsigned int)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setEventTimestamp:(unsigned long long)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setFeatures:(id)arg1;
- (void)setGoalTypes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasDismissReason:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEventTimestamp:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasNewGoal:(bool)arg1;
- (void)setHasRecommendedGoal:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNewGoal:(unsigned int)arg1;
- (void)setRecommendedGoal:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
