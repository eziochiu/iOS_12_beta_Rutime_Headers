/* made by EzioChiu.
 */

@protocol AMSMetricsBagContract <AMSURLBagContract>

@optional

- (AMSBagValue *)metricsDictionary;
- (AMSBagValue *)metricsURL;
- (AMSBagValue *)metricsUrl;

@end
