/* made by EzioChiu.
 */

@protocol CKDURLRequestMetricsDelegate <NSObject>

@required

- (void)request:(CKDURLRequest *)arg1 didFinishWithMetrics:(CKDOperationMetrics *)arg2 w3cNavigationTiming:(NSDictionary *)arg3;

@end
