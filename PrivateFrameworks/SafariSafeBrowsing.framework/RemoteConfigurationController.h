/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

@interface RemoteConfigurationController : NSObject {
    NSDictionary * _currentConfiguration;
    bool  _googleConfigurationDidChange;
    ProviderConfiguration * _googleProviderConfiguration;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _tencentConfigurationDidChange;
    ProviderConfiguration * _tencentProviderConfiguration;
    NSObject<OS_dispatch_source> * _updateTimer;
}

@property (nonatomic, readonly) ProviderConfiguration *googleProviderConfiguration;
@property (getter=isSafeBrowsingOff, nonatomic, readonly) bool safeBrowsingOff;
@property (nonatomic, readonly) ProviderConfiguration *tencentProviderConfiguration;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_didReceiveConfigurationData:(id)arg1;
- (void)_downloadConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)_initializeProviderConfigurationsWithConfiguration:(id)arg1;
- (void)_initializeToDefaultProviderConfigurations;
- (id)_lastConfigurationUpdateAttemptDate;
- (void)_loadConfigurationFromDiskIfNecessary;
- (void)_notifyProviderConfigurationsDidChangeIfNecessary;
- (id)_providerToTurnOffFromProviderDictionary:(id)arg1;
- (void)_resetProviderConfigurationsDidChange;
- (void)_scheduleConfigurationUpdateDaily;
- (void)_setCurrentConfiguration:(id)arg1;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (bool)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1;
- (void)_simplifyProviderConfigurations;
- (void)_updateConfigurationIfNecessary;
- (id)_urlOfDownloadedConfiguration;
- (void)_writeConfigurationToDisk:(id)arg1;
- (void)dealloc;
- (bool)forceLoadConfigurationFromDisk;
- (bool)forceUpdateConfigurationFromServer;
- (id)googleProviderConfiguration;
- (id)init;
- (bool)isSafeBrowsingOff;
- (id)tencentProviderConfiguration;

@end
