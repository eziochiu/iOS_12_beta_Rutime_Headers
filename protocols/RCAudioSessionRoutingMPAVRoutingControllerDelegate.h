/* made by EzioChiu.
 */

@protocol RCAudioSessionRoutingMPAVRoutingControllerDelegate <MPAVRoutingControllerDelegate>

@required

- (void)routingController:(RCAudioSessionRoutingMPAVRoutingController *)arg1 didChangeAirPlayMirrorDestinationToActive:(bool)arg2;
- (void)routingController:(RCAudioSessionRoutingMPAVRoutingController *)arg1 willChangeCategoryActiveStateToActive:(bool)arg2;

@end
