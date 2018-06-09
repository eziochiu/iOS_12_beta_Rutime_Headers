/* made by EzioChiu.
 */

@protocol INStartWorkoutIntentExport <NSObject, JSExport>

@required

- (NSNumber *)goalValue;
- (id)init;
- (NSNumber *)isOpenEnded;
- (void)setGoalValue:(NSNumber *)arg1;
- (void)setIsOpenEnded:(NSNumber *)arg1;
- (void)setWorkoutGoalUnitType:(long long)arg1;
- (void)setWorkoutLocationType:(long long)arg1;
- (void)setWorkoutName:(INSpeakableString *)arg1;
- (long long)workoutGoalUnitType;
- (long long)workoutLocationType;
- (INSpeakableString *)workoutName;

@end
