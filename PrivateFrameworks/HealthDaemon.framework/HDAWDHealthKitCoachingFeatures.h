/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitCoachingFeatures : PBCodable <NSCopying> {
    unsigned int  _activeCalories;
    unsigned int  _automotive;
    unsigned int  _briskMinutes;
    unsigned int  _cycling;
    unsigned int  _duration;
    struct { 
        unsigned int activeCalories : 1; 
        unsigned int automotive : 1; 
        unsigned int briskMinutes : 1; 
        unsigned int cycling : 1; 
        unsigned int duration : 1; 
        unsigned int heartRate : 1; 
        unsigned int other : 1; 
        unsigned int running : 1; 
        unsigned int unknown : 1; 
        unsigned int walking : 1; 
        unsigned int workout : 1; 
    }  _has;
    unsigned int  _heartRate;
    unsigned int  _other;
    unsigned int  _running;
    unsigned int  _unknown;
    unsigned int  _walking;
    unsigned int  _workout;
}

@property (nonatomic) unsigned int activeCalories;
@property (nonatomic) unsigned int automotive;
@property (nonatomic) unsigned int briskMinutes;
@property (nonatomic) unsigned int cycling;
@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasActiveCalories;
@property (nonatomic) bool hasAutomotive;
@property (nonatomic) bool hasBriskMinutes;
@property (nonatomic) bool hasCycling;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasHeartRate;
@property (nonatomic) bool hasOther;
@property (nonatomic) bool hasRunning;
@property (nonatomic) bool hasUnknown;
@property (nonatomic) bool hasWalking;
@property (nonatomic) bool hasWorkout;
@property (nonatomic) unsigned int heartRate;
@property (nonatomic) unsigned int other;
@property (nonatomic) unsigned int running;
@property (nonatomic) unsigned int unknown;
@property (nonatomic) unsigned int walking;
@property (nonatomic) unsigned int workout;

- (unsigned int)activeCalories;
- (unsigned int)automotive;
- (unsigned int)briskMinutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)cycling;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasActiveCalories;
- (bool)hasAutomotive;
- (bool)hasBriskMinutes;
- (bool)hasCycling;
- (bool)hasDuration;
- (bool)hasHeartRate;
- (bool)hasOther;
- (bool)hasRunning;
- (bool)hasUnknown;
- (bool)hasWalking;
- (bool)hasWorkout;
- (unsigned long long)hash;
- (unsigned int)heartRate;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)other;
- (bool)readFrom:(id)arg1;
- (unsigned int)running;
- (void)setActiveCalories:(unsigned int)arg1;
- (void)setAutomotive:(unsigned int)arg1;
- (void)setBriskMinutes:(unsigned int)arg1;
- (void)setCycling:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasActiveCalories:(bool)arg1;
- (void)setHasAutomotive:(bool)arg1;
- (void)setHasBriskMinutes:(bool)arg1;
- (void)setHasCycling:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasHeartRate:(bool)arg1;
- (void)setHasOther:(bool)arg1;
- (void)setHasRunning:(bool)arg1;
- (void)setHasUnknown:(bool)arg1;
- (void)setHasWalking:(bool)arg1;
- (void)setHasWorkout:(bool)arg1;
- (void)setHeartRate:(unsigned int)arg1;
- (void)setOther:(unsigned int)arg1;
- (void)setRunning:(unsigned int)arg1;
- (void)setUnknown:(unsigned int)arg1;
- (void)setWalking:(unsigned int)arg1;
- (void)setWorkout:(unsigned int)arg1;
- (unsigned int)unknown;
- (unsigned int)walking;
- (unsigned int)workout;
- (void)writeTo:(id)arg1;

@end