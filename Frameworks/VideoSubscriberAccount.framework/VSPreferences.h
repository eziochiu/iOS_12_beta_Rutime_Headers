/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSPreferences : NSObject {
    VSDevice * _device;
    NSUndoManager * _undoManager;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic) long long cachedAvailabilityStatus;
@property (nonatomic) long long cachedDeveloperProviderStatus;
@property (nonatomic) long long cachedStoreProviderStatus;
@property (nonatomic, retain) VSDevice *device;
@property (nonatomic, readonly) bool hasSentWelcomeMessage;
@property (nonatomic, readonly, copy) NSURL *overridingAppBootURL;
@property (nonatomic, readonly) bool shouldAlwaysAllowRemoteInspection;
@property (nonatomic, readonly) bool shouldDisableRequestTimeouts;
@property (nonatomic, readonly) bool shouldSkipSetup;
@property (nonatomic, retain) NSUndoManager *undoManager;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (void)_updateShouldSkipSetupWithNumber:(id)arg1;
- (void)_updateValue:(id)arg1 forKey:(id)arg2;
- (long long)cachedAvailabilityStatus;
- (long long)cachedDeveloperProviderStatus;
- (long long)cachedStoreProviderStatus;
- (id)device;
- (bool)hasChosenDesiredApp;
- (bool)hasSentWelcomeMessage;
- (void)noteDesiredApp:(id)arg1;
- (void)noteDidSendWelcomeMessage;
- (void)noteShouldSkipSetup;
- (id)overridingAppBootURL;
- (void)setCachedAvailabilityStatus:(long long)arg1;
- (void)setCachedDeveloperProviderStatus:(long long)arg1;
- (void)setCachedStoreProviderStatus:(long long)arg1;
- (void)setDevice:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (bool)shouldAlwaysAllowRemoteInspection;
- (bool)shouldDisableRequestTimeouts;
- (bool)shouldSkipSetup;
- (id)undoManager;
- (id)userDefaults;

@end
