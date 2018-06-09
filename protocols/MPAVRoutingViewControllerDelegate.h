/* made by EzioChiu.
 */

@protocol MPAVRoutingViewControllerDelegate <NSObject>

@optional

- (void)routingViewController:(MPAVRoutingViewController *)arg1 didPickRoute:(MPAVRoute *)arg2;
- (void)routingViewControllerDidShowAirPlayDebugScreen:(MPAVRoutingViewController *)arg1;
- (void)routingViewControllerDidUpdateContents:(MPAVRoutingViewController *)arg1;

@end
