/* made by EzioChiu.
 */

@protocol HDWorkoutSessionController

@required

+ (NSString *)recoveryIdentifier;

- (void)hktest_setStateTransitionCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, void*
- (id)initWithProfile:(HDProfile *)arg1 sessionConfiguration:(HDWorkoutSessionConfiguration *)arg2 sessionStateController:(id <HDWorkoutSessionStateController>)arg3 recoveryState:(NSData *)arg4;
- (void)workoutSessionServer:(id <HDWorkoutSessionStateController>)arg1 accumulatorDidChange:(id <HDWorkoutDataAccumulator>)arg2;
- (void)workoutSessionServer:(id <HDWorkoutSessionStateController>)arg1 didChangeConfiguration:(HDWorkoutSessionConfiguration *)arg2;
- (void)workoutSessionServer:(id <HDWorkoutSessionStateController>)arg1 didTransitionToState:(long long)arg2 fromState:(long long)arg3;

@end
