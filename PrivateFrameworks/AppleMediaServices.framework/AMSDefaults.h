/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDefaults : NSObject

+ (bool)_boolForKey:(id)arg1 defaultValue:(bool)arg2;
+ (void)_setBool:(bool)arg1 forKey:(id)arg2;
+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (id)_valueForKey:(id)arg1;
+ (bool)alwaysSendCacheBuster;
+ (bool)alwaysSendGUID;
+ (id)bagURLCookies;
+ (id)deviceOfferEligibility;
+ (bool)disableHARLogging;
+ (bool)enableReversePush;
+ (bool)forceLoadUrlMetrics;
+ (bool)ignoreServerTrustEvaluation;
+ (bool)includeFullResponseInHARLogging;
+ (id)metricsCanaryIdentifier;
+ (id)metricsTimingWindowStartTime;
+ (bool)migratedToNewCookieStorage;
+ (void)setAlwaysSendCacheBuster:(bool)arg1;
+ (void)setAlwaysSendGUID:(bool)arg1;
+ (void)setBagURLCookies:(id)arg1;
+ (void)setDeviceOfferEligibility:(id)arg1;
+ (void)setDisableHARLogging:(bool)arg1;
+ (void)setEnableReversePush:(bool)arg1;
+ (void)setForceLoadUrlMetrics:(bool)arg1;
+ (void)setIgnoreServerTrustEvaluation:(bool)arg1;
+ (void)setIncludeFullResponseInHARLogging:(bool)arg1;
+ (void)setMetricsCanaryIdentifier:(id)arg1;
+ (void)setMetricsTimingWindowStartTime:(id)arg1;
+ (void)setMigratedToNewCookieStorage:(bool)arg1;
+ (void)setShowSandboxAccountUI:(bool)arg1;
+ (void)setStorefrontSuffixes:(id)arg1;
+ (bool)showSandboxAccountUI;
+ (id)storefrontSuffixes;
+ (bool)useNewCookieStorage;

@end
