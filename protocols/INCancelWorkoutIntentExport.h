/* made by EzioChiu.
 */

@protocol INCancelWorkoutIntentExport <NSObject, JSExport>

@required

- (id)init;
- (void)setWorkoutName:(INSpeakableString *)arg1;
- (INSpeakableString *)workoutName;

@end
