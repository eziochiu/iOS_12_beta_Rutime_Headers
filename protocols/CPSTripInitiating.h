/* made by EzioChiu.
 */

@protocol CPSTripInitiating <NSObject>

@required

- (void)tripView:(CPSTripCardView *)arg1 selectedRouteChoice:(CPRouteChoice *)arg2;
- (void)tripView:(CPSTripCardView *)arg1 startedRouteChoice:(CPRouteChoice *)arg2;

@end
