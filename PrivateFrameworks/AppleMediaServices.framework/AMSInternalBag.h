/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSInternalBag : NSObject <AMSMescalBagContract, AMSMetricsBagContract> {
    AMSBag * _bag;
}

@property (nonatomic, readonly) AMSBagValue *apsAllowedProductTypes;
@property (nonatomic, readonly) AMSBagValue *apsEnabledPatterns;
@property (nonatomic, readonly) AMSBagValue *apsSamplingPercent;
@property (nonatomic, retain) AMSBag *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AMSBagValue *guidRegexes;
@property (nonatomic, readonly) AMSBagValue *guidSchemes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSBagValue *mescalCertificateURL;
@property (nonatomic, readonly) <AMSMescalBagContract> *mescalContract;
@property (nonatomic, readonly) AMSBagValue *mescalPrimingURL;
@property (nonatomic, readonly) AMSBagValue *mescalSetupURL;
@property (nonatomic, readonly) AMSBagValue *mescalSignSapRequests;
@property (nonatomic, readonly) AMSBagValue *mescalSignSapResponses;
@property (nonatomic, readonly) AMSBagValue *mescalSignedActions;
@property (nonatomic, readonly) <AMSMetricsBagContract> *metricsContract;
@property (nonatomic, readonly) AMSBagValue *metricsDictionary;
@property (nonatomic, readonly) AMSBagValue *metricsURL;
@property (nonatomic, readonly) AMSBagValue *metricsUrl;
@property (nonatomic, readonly) AMSBagValue *storefrontSuffix;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSBagValue *trustedDomains;

+ (id)_keySet;

- (void).cxx_destruct;
- (id)bag;
- (id)init;
- (id)mescalCertificateURL;
- (id)mescalContract;
- (id)mescalSetupURL;
- (id)mescalSignSapRequests;
- (id)mescalSignSapResponses;
- (id)mescalSignedActions;
- (id)metricsURL;
- (void)setBag:(id)arg1;
- (id)trustedDomains;

@end
