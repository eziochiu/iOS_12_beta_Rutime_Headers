/* made by EzioChiu.
 */

@protocol INResumeWorkoutIntentExport <NSObject, JSExport>

@required

- (id)init;
- (void)setWorkoutName:(INSpeakableString *)arg1;
- (INSpeakableString *)workoutName;

@end
