/* made by EzioChiu.
 */

@protocol AMSURLBagContract <NSObject>

@optional

- (AMSBagValue *)apsAllowedProductTypes;
- (AMSBagValue *)apsEnabledPatterns;
- (AMSBagValue *)apsSamplingPercent;
- (AMSBagValue *)guidRegexes;
- (AMSBagValue *)guidSchemes;
- (<AMSMescalBagContract> *)mescalContract;
- (<AMSMetricsBagContract> *)metricsContract;
- (AMSBagValue *)metricsURL;
- (AMSBagValue *)storefrontSuffix;
- (AMSBagValue *)trustedDomains;

@end
