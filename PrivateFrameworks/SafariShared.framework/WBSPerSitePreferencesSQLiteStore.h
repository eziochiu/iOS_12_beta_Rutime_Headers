/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
}

+ (id)sharedStore;

- (void).cxx_destruct;
- (void)_closeDatabase;
- (int)_createFreshDatabaseSchema;
- (bool)_isDatabaseOpen;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (bool)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (void)_openDatabase;
- (void)_openDatabaseIfNecessary;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (bool)_tryToPerformTransactionInBlock:(id /* block */)arg1;
- (void)closeDatabase;
- (void)dealloc;
- (void)getAllDomainsConfiguredForPreference:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getAllPreferenceInformationForPreference:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getDefaultValueForPreference:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getTimestampAndValueOfPreference:(long long)arg1 forDomain:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getValueOfPreference:(long long)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)getValuesOfPreferences:(id)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;
- (void)removeAllPreferenceValuesFromPreference:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setDefaultValue:(id)arg1 forPreference:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setValue:(id)arg1 ofPreference:(long long)arg2 forDomain:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setValue:(id)arg1 ofPreference:(long long)arg2 forDomain:(id)arg3 includeTimestamp:(bool)arg4 completionHandler:(id /* block */)arg5;

@end
