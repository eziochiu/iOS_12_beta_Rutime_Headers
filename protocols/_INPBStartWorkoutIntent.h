/* made by EzioChiu.
 */

@protocol _INPBStartWorkoutIntent <NSObject>

@required

- (int)StringAsWorkoutGoalUnitType:(NSString *)arg1;
- (int)StringAsWorkoutLocationType:(NSString *)arg1;
- (_INPBDouble *)goalValue;
- (bool)hasGoalValue;
- (bool)hasIntentMetadata;
- (bool)hasIsOpenEnded;
- (bool)hasWorkoutGoalUnitType;
- (bool)hasWorkoutLocationType;
- (bool)hasWorkoutName;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)isOpenEnded;
- (void)setGoalValue:(_INPBDouble *)arg1;
- (void)setHasIsOpenEnded:(bool)arg1;
- (void)setHasWorkoutGoalUnitType:(bool)arg1;
- (void)setHasWorkoutLocationType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setIsOpenEnded:(bool)arg1;
- (void)setWorkoutGoalUnitType:(int)arg1;
- (void)setWorkoutLocationType:(int)arg1;
- (void)setWorkoutName:(_INPBDataString *)arg1;
- (int)workoutGoalUnitType;
- (NSString *)workoutGoalUnitTypeAsString:(int)arg1;
- (int)workoutLocationType;
- (NSString *)workoutLocationTypeAsString:(int)arg1;
- (_INPBDataString *)workoutName;

@end
