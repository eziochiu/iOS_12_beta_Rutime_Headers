/* made by EzioChiu.
 */

@protocol HDWorkoutSessionStateController

@required

- (void)autoPauseWithDate:(NSDate *)arg1;
- (void)autoResumeWithDate:(NSDate *)arg1;
- (void)endHeartRateRecovery;
- (bool)endWithError:(id*)arg1;
- (void)finish;
- (void)generateError:(NSError *)arg1;
- (void)generateEvent:(_HKWorkoutEvent *)arg1;
- (bool)pauseWithError:(id*)arg1;
- (bool)prepareWithError:(id*)arg1;
- (bool)resumeWithError:(id*)arg1;
- (bool)startActivityWithError:(id*)arg1;
- (bool)stopActivityWithError:(id*)arg1;
- (bool)storeSessionControllerState:(NSData *)arg1 forRecoveryIdentifier:(NSString *)arg2 error:(id*)arg3;
- (<HDWorkoutDataAccumulator> *)workoutDataAccumulator;

@end
