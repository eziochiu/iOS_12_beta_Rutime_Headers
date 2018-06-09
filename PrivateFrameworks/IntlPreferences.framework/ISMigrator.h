/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
 */

@interface ISMigrator : NSObject {
    NSString * _currentVersion;
    unsigned long long  _platform;
    NSDictionary * _preferencesAfterMigration;
    NSDictionary * _preferencesBeforeMigration;
    NSString * _previousVersion;
}

@property (nonatomic, copy) NSString *currentVersion;
@property (nonatomic) unsigned long long platform;
@property (nonatomic, copy) NSDictionary *preferencesAfterMigration;
@property (nonatomic, copy) NSDictionary *preferencesBeforeMigration;
@property (nonatomic, copy) NSString *previousVersion;

+ (unsigned long long)currentPlatform;
+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2;
+ (id)migratorFromVersion:(id)arg1 toVersion:(id)arg2 platform:(unsigned long long)arg3;

- (id)appendRegionalVariantsToLanguageIdentifiers:(id)arg1 regionCode:(id)arg2;
- (id)currentVersion;
- (void)dealloc;
- (id)importPreferredLanguagesForPreferences:(id)arg1;
- (id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg1;
- (bool)performMigration;
- (id)performMigrationForPreferences:(id)arg1;
- (unsigned long long)platform;
- (id)preferencesAfterMigration;
- (id)preferencesBeforeMigration;
- (id)previousVersion;
- (void)setCurrentVersion:(id)arg1;
- (void)setPlatform:(unsigned long long)arg1;
- (void)setPreferencesAfterMigration:(id)arg1;
- (void)setPreferencesBeforeMigration:(id)arg1;
- (void)setPreviousVersion:(id)arg1;

@end
