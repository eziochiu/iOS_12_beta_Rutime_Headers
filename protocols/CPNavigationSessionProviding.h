/* made by EzioChiu.
 */

@protocol CPNavigationSessionProviding <NSObject>

@required

- (void)cancelTrip;
- (void)finishTrip;
- (void)pauseTripForReason:(unsigned long long)arg1;
- (void)updateManeuvers:(NSArray *)arg1;
- (void)updateTravelEstimates:(CPTravelEstimates *)arg1 forManeuver:(CPManeuver *)arg2;

@end
