/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableWorkout : PBCodable <HDDecoding, NSCopying> {
    double  _duration;
    NSMutableArray * _events;
    double  _goal;
    long long  _goalType;
    struct { 
        unsigned int duration : 1; 
        unsigned int goal : 1; 
        unsigned int goalType : 1; 
        unsigned int totalBasalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int totalDistanceInCanonicalUnit : 1; 
        unsigned int totalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int totalFlightsClimbedInCanonicalUnit : 1; 
        unsigned int totalSwimmingStrokeCountInCanonicalUnit : 1; 
        unsigned int type : 1; 
    }  _has;
    HDCodableSample * _sample;
    double  _totalBasalEnergyBurnedInCanonicalUnit;
    double  _totalDistanceInCanonicalUnit;
    double  _totalEnergyBurnedInCanonicalUnit;
    double  _totalFlightsClimbedInCanonicalUnit;
    double  _totalSwimmingStrokeCountInCanonicalUnit;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic) double goal;
@property (nonatomic) long long goalType;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasGoal;
@property (nonatomic) bool hasGoalType;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) bool hasTotalDistanceInCanonicalUnit;
@property (nonatomic) bool hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) bool hasTotalFlightsClimbedInCanonicalUnit;
@property (nonatomic) bool hasTotalSwimmingStrokeCountInCanonicalUnit;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalFlightsClimbedInCanonicalUnit;
@property (nonatomic) double totalSwimmingStrokeCountInCanonicalUnit;
@property (nonatomic) long long type;

+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (bool)applyToObject:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedGoal;
- (unsigned long long)decodedGoalType;
- (id)decodedTotalBasalEnergyBurned;
- (id)decodedTotalDistance;
- (id)decodedTotalEnergyBurned;
- (id)decodedTotalFlightsClimbed;
- (id)decodedTotalSwimmingStrokeCount;
- (id)decodedWorkoutEvents;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (double)goal;
- (long long)goalType;
- (bool)hasDuration;
- (bool)hasGoal;
- (bool)hasGoalType;
- (bool)hasSample;
- (bool)hasTotalBasalEnergyBurnedInCanonicalUnit;
- (bool)hasTotalDistanceInCanonicalUnit;
- (bool)hasTotalEnergyBurnedInCanonicalUnit;
- (bool)hasTotalFlightsClimbedInCanonicalUnit;
- (bool)hasTotalSwimmingStrokeCountInCanonicalUnit;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setDuration:(double)arg1;
- (void)setEvents:(id)arg1;
- (void)setGoal:(double)arg1;
- (void)setGoalType:(long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasGoal:(bool)arg1;
- (void)setHasGoalType:(bool)arg1;
- (void)setHasTotalBasalEnergyBurnedInCanonicalUnit:(bool)arg1;
- (void)setHasTotalDistanceInCanonicalUnit:(bool)arg1;
- (void)setHasTotalEnergyBurnedInCanonicalUnit:(bool)arg1;
- (void)setHasTotalFlightsClimbedInCanonicalUnit:(bool)arg1;
- (void)setHasTotalSwimmingStrokeCountInCanonicalUnit:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setSample:(id)arg1;
- (void)setTotalBasalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setTotalDistanceInCanonicalUnit:(double)arg1;
- (void)setTotalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setTotalFlightsClimbedInCanonicalUnit:(double)arg1;
- (void)setTotalSwimmingStrokeCountInCanonicalUnit:(double)arg1;
- (void)setType:(long long)arg1;
- (double)totalBasalEnergyBurnedInCanonicalUnit;
- (double)totalDistanceInCanonicalUnit;
- (double)totalEnergyBurnedInCanonicalUnit;
- (double)totalFlightsClimbedInCanonicalUnit;
- (double)totalSwimmingStrokeCountInCanonicalUnit;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
