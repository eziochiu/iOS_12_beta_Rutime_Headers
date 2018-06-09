/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFormAutoFillCorrectionsSQLiteStore : NSObject <WBSCrowdsourcedFeedbackWhitelist, WBSFormAutoFillCorrectionsStore> {
    NSObject<OS_dispatch_queue> * _databaseQueue;
    WBSCrowdsourcedFeedbackDomainNormalizer * _domainNormalizer;
    WBSSQLiteDatabase * _localDatabase;
    NSURL * _localDatabaseURL;
    WBSSQLiteDatabase * _parsecDatabase;
    NSURL * _parsecDatabaseURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_defaultLocalDatabaseURL;
+ (id)_defaultParsecDatabaseURL;
+ (id)standardStore;

- (void).cxx_destruct;
- (id)_classificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2;
- (void)_closeDatabases;
- (void)_configureDatabase:(id)arg1 currentSchemaVersion:(int)arg2;
- (int)_createFreshLocalDatabaseSchema;
- (int)_createFreshParsecDatabaseSchema;
- (bool)_isDatabaseOpen:(id)arg1;
- (int)_migrateToCurrentSchemaVersionIfNeededForDatabase:(id)arg1;
- (bool)_migrateToSchemaVersion:(int)arg1 forDatabase:(id)arg2;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (id)_normalizeDomain:(id)arg1;
- (void)_openDatabasesIfNeeded;
- (void)_openLocalDatabase;
- (void)_openParsecDatabase;
- (id)_parsecMetadataStringValueForKey:(id)arg1;
- (bool)_removeAllLocalClassifications;
- (bool)_removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2;
- (bool)_replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2;
- (bool)_replaceDomainWhitelistWithDomains:(id)arg1 retrievalURLString:(id)arg2;
- (int)_schemaVersionForDatabase:(id)arg1;
- (bool)_setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3;
- (int)_setDatabaseSchemaVersion:(int)arg1 forDatabase:(id)arg2;
- (bool)_setDomain:(id)arg1 isWhitelistedForFeedback:(bool)arg2;
- (void)_setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 date:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)_setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 dateReclassified:(id)arg4;
- (bool)_setParsecMetadataStringValue:(id)arg1 forKey:(id)arg2;
- (bool)_tryToPerformTransactionOnDatabase:(id)arg1 inBlock:(id /* block */)arg2;
- (void)closeDatabase;
- (void)getClassificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(id /* block */)arg1;
- (void)getLastWhitelistRetrievalURLStringWithCompletionHandler:(id /* block */)arg1;
- (void)getWhitelistStatusForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithLocalDatabaseURL:(id)arg1 parsecDatabaseURL:(id)arg2;
- (void)removeAllLocalClassificationsWithCompletionHandler:(id /* block */)arg1;
- (void)removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)replaceDomainWhitelistWithDomains:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDomain:(id)arg1 isWhitelistedForFeedback:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setLastWhitelistRetrievalURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(id /* block */)arg4;

@end
