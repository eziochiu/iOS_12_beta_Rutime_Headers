/* made by EzioChiu.
 */

@protocol HDClientDataCollectionObservationStateMonitorDelegate <NSObject>

@required

- (void)dataCollectionObservationStateDidChangeForClient:(HDXPCClient *)arg1;

@end
