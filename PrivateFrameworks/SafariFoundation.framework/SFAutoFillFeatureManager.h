/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver> {
    int  _cachedAutoFillRestrictionValue;
    int  _cachedPasswordAutoFillEffectiveValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct __CFString { }*)autoFillPreferencesDomain;
+ (bool)defaultValueForPasswordAndCreditCardAutoFill;
+ (id)sharedFeatureManager;

- (void)_refreshCachedAutoFillRestrictionValues;
- (void)dealloc;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (bool)shouldAutoFillPasswords;
- (bool)shouldAutoFillPasswordsFromKeychain;

@end
