/* made by EzioChiu.
 */

@protocol HKWorkoutRouteQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverWorkoutRouteLocations:(NSArray *)arg1 isFinal:(bool)arg2 query:(NSUUID *)arg3;

@end
