/* made by EzioChiu.
 */

@protocol CLLocationManagerRoutineClientInterface <NSObject>

@required

- (void)didUpdateLocations:(NSArray *)arg1;
- (void)didUpdatePredictedApplications:(NSArray *)arg1;

@end
