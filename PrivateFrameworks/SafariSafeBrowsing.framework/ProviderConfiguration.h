/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

@interface ProviderConfiguration : NSObject {
    NSDictionary * _configuration;
    bool  _malwareThreatTypeOff;
    bool  _providerOff;
    bool  _socialEngineeringThreatTypeOff;
    bool  _unwantedSoftwareThreatTypeOff;
}

@property (nonatomic, readonly) bool malwareThreatTypeOff;
@property (nonatomic) bool providerOff;
@property (nonatomic, readonly) bool socialEngineeringThreatTypeOff;
@property (nonatomic, readonly) bool unwantedSoftwareThreatTypeOff;

- (void).cxx_destruct;
- (void)_configureToBeOff;
- (void)_configureToUseDefaultValues;
- (id)_currentRegionCode;
- (void)_parseConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (bool)malwareThreatTypeOff;
- (bool)providerOff;
- (void)setProviderOff:(bool)arg1;
- (bool)socialEngineeringThreatTypeOff;
- (bool)unwantedSoftwareThreatTypeOff;

@end
