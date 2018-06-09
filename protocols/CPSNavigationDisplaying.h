/* made by EzioChiu.
 */

@protocol CPSNavigationDisplaying <NSObject>

@optional

- (void)navigator:(CPSNavigator *)arg1 didEndTrip:(bool)arg2;
- (void)navigator:(CPSNavigator *)arg1 pausedTripForReason:(unsigned long long)arg2;
- (void)showManeuvers:(NSArray *)arg1;
- (void)updateEstimates:(CPTravelEstimates *)arg1 forManeuver:(CPManeuver *)arg2;

@end
