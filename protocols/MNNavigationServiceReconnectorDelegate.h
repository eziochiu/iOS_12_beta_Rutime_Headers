/* made by EzioChiu.
 */

@protocol MNNavigationServiceReconnectorDelegate <NSObject>

@required

- (void)navigationServiceReconnector:(MNNavigationServiceReconnector *)arg1 didReconnectWithDetails:(MNRoutePlanningDetails *)arg2;

@end
