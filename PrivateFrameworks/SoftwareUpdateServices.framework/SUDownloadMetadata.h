/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUDownloadMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    int  _activeDownloadPolicyType;
    bool  _autoDownload;
    int  _downloadFeeAgreementStatus;
    bool  _enabledFor2G;
    bool  _enabledFor3G;
    bool  _enabledFor4G;
    bool  _enabledForCellularRoaming;
    bool  _enabledForWifi;
    bool  _enabledOnBatteryPower;
    bool  _enforceWifiOnlyOverride;
    int  _termsAndConditionsAgreementStatus;
}

@property (nonatomic) int activeDownloadPolicyType;
@property (getter=isAutoDownload, nonatomic) bool autoDownload;
@property (nonatomic) int downloadFeeAgreementStatus;
@property (getter=isEnabledFor2G, nonatomic) bool enabledFor2G;
@property (getter=isEnabledFor3G, nonatomic) bool enabledFor3G;
@property (getter=isEnabledFor4G, nonatomic) bool enabledFor4G;
@property (getter=isEnabledForCellularRoaming, nonatomic) bool enabledForCellularRoaming;
@property (getter=isEnabledForWifi, nonatomic) bool enabledForWifi;
@property (getter=isEnabledOnBatteryPower, nonatomic) bool enabledOnBatteryPower;
@property (nonatomic) bool enforceWifiOnlyOverride;
@property (nonatomic) int termsAndConditionsAgreementStatus;

+ (bool)supportsSecureCoding;

- (id)_stringForBool:(bool)arg1;
- (id)activeDownloadPolicy:(id)arg1;
- (int)activeDownloadPolicyType;
- (void)applyDownloadPolicy:(id)arg1;
- (id)availableDownloadPolicyIfDifferentFromActive:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)downloadFeeAgreementStatus;
- (void)encodeWithCoder:(id)arg1;
- (bool)enforceWifiOnlyOverride;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAutoDownload;
- (bool)isEnabledFor2G;
- (bool)isEnabledFor3G;
- (bool)isEnabledFor4G;
- (bool)isEnabledForCellularRoaming;
- (bool)isEnabledForNetworkType:(int)arg1;
- (bool)isEnabledForWifi;
- (bool)isEnabledOnBatteryPower;
- (bool)isEqual:(id)arg1;
- (bool)matchesDownloadPolicy:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActiveDownloadPolicyType:(int)arg1;
- (void)setAutoDownload:(bool)arg1;
- (void)setDownloadFeeAgreementStatus:(int)arg1;
- (void)setEnabledFor2G:(bool)arg1;
- (void)setEnabledFor3G:(bool)arg1;
- (void)setEnabledFor4G:(bool)arg1;
- (void)setEnabledForCellularRoaming:(bool)arg1;
- (void)setEnabledForWifi:(bool)arg1;
- (void)setEnabledOnBatteryPower:(bool)arg1;
- (void)setEnforceWifiOnlyOverride:(bool)arg1;
- (void)setTermsAndConditionsAgreementStatus:(int)arg1;
- (int)termsAndConditionsAgreementStatus;

@end
