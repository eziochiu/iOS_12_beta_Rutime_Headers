/* made by EzioChiu.
 */

@protocol FUFlightViewControllerDelegate <NSObject>

@required

- (void)flightController:(FUFlightViewController *)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3;

@end
