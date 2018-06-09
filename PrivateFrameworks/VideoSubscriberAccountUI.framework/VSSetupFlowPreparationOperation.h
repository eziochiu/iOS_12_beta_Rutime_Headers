/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSSetupFlowPreparationOperation : VSAsyncOperation {
    VSStoreURLBag * _bag;
    VSOptional * _preferences;
    NSOperationQueue * _privateQueue;
    VSOptional * _result;
    VSOptional * _storage;
}

@property (nonatomic, retain) VSStoreURLBag *bag;
@property (nonatomic, retain) VSOptional *preferences;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, retain) VSOptional *storage;

- (void).cxx_destruct;
- (void)_checkAvailability;
- (void)_checkForExistingAccounts;
- (void)_checkForPersonalizedChannelsWithResponse:(id)arg1 identityProvider:(id)arg2;
- (void)_checkForSupportedAppsButton;
- (void)_checkForSupportedAppsButtonWithFlow:(id)arg1;
- (void)_checkForSupportedAppsFromProvider:(id)arg1;
- (void)_checkPreferences;
- (void)_fetchAllProviders;
- (void)_fetchAllProvidersIfNeeded;
- (void)_fetchProviderForAccount:(id)arg1;
- (void)_findBundleIDsForAdamIDs:(id)arg1 withFlow:(id)arg2;
- (void)_finishWithError:(id)arg1;
- (void)_finishWithFlow:(id)arg1;
- (void)_resolveBundleIDs:(id)arg1 forFlow:(id)arg2;
- (id)bag;
- (void)executionDidBegin;
- (id)init;
- (id)preferences;
- (id)privateQueue;
- (id)result;
- (void)setBag:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
