/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSPerSitePreferenceManager : NSObject <WBSPerSitePreferenceManager> {
    <WBSPerSitePreferenceManagerDefaultsDelegate> * _defaultsDelegate;
    <WBSPerSitePreferenceManagerDelegate> * _delegate;
    <WBSPerSitePreferenceManagerStorageDelegate> * _storageDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSPerSitePreferenceManagerDefaultsDelegate> *defaultsDelegate;
@property (nonatomic) <WBSPerSitePreferenceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <WBSPerSitePreferenceManagerStorageDelegate> *storageDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_validatePreferenceValue:(id)arg1 inPreference:(id)arg2;
- (id)defaultsDelegate;
- (id)delegate;
- (void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)preferences;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDefaultsDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStorageDelegate:(id)arg1;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)storageDelegate;
- (id)valuesForPreference:(id)arg1;

@end
