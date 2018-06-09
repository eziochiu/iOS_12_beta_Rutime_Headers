/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogPreferencesSubsystem : NSObject {
    NSDictionary * _internalPrefs;
    NSString * _internalPrefsFile;
    NSString * _name;
    NSMutableDictionary * _prefs;
    NSString * _prefsFile;
    NSDictionary * _systemPrefs;
    NSString * _systemPrefsFile;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) long long effectiveEnabledLevel;
@property (nonatomic, readonly) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (nonatomic, readonly) bool isLocked;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) long long persistedLevel;

- (void).cxx_destruct;
- (long long)_defaultEnabledLevelForCategory:(id)arg1;
- (long long)_defaultPersistedLevelForCategory:(id)arg1;
- (long long)_enabledLevelForCategory:(id)arg1;
- (id)_levelPrefsForCategory:(id)arg1;
- (long long)_persistedLevelForCategory:(id)arg1;
- (void)_resetCategory:(id)arg1;
- (void)_setEnabledLevel:(long long)arg1 forCategory:(id)arg2;
- (void)_setPersistedLevel:(long long)arg1 forCategory:(id)arg2;
- (id)categories;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;
- (long long)effectiveEnabledLevel;
- (long long)effectivePersistedLevel;
- (long long)enabledLevel;
- (id)initWithName:(id)arg1;
- (bool)isLocked;
- (id)name;
- (long long)persistedLevel;
- (void)reset;
- (void)resetAll;
- (void)setEnabledLevel:(long long)arg1;
- (void)setPersistedLevel:(long long)arg1;

@end
