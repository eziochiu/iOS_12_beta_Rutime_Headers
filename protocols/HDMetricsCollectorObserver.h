/* made by EzioChiu.
 */

@protocol HDMetricsCollectorObserver

@required

- (void)metricsCollector:(id <HDMetricsCollector>)arg1 didCollectMetrics:(NSDictionary *)arg2;

@end
