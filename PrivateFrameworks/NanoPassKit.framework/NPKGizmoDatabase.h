/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKGizmoDatabase : NSObject {
    struct sqlite3_stmt { } * _currentEphemeralTransactionIdentifierStatement;
    struct sqlite3 { } * _database;
    NSObject<OS_dispatch_queue> * _dbQueue;
    struct sqlite3_stmt { } * _deleteEphemeralTransactionByPassUniqueIDStatement;
    struct sqlite3_stmt { } * _deleteStatement;
    struct sqlite3_stmt { } * _deleteTransactionsForPassStatement;
    int  _externallyChangedBroadcasts;
    struct sqlite3_stmt { } * _insertDiffStatement;
    struct sqlite3_stmt { } * _insertEphemeralTransactionStatement;
    struct sqlite3_stmt { } * _insertStatement;
    struct sqlite3_stmt { } * _insertTransactionStatement;
    bool  _isInTransaction;
    NSArray * _libraryHashes;
    NSMutableDictionary * _manifest;
    bool  _needsMoreLocalNotifyDatabaseChanged;
    bool  _passDBIsAvailable;
    NSMutableArray * _passDescriptions;
    struct sqlite3_stmt { } * _removeTransactionStatement;
    struct sqlite3_stmt { } * _removeTransactionWithServiceIdentifier;
    struct sqlite3_stmt { } * _selectBalancesForPassStatement;
    struct sqlite3_stmt { } * _selectCloudKitArchivedTransactionsStatement;
    struct sqlite3_stmt { } * _selectDeletePendingStatement;
    struct sqlite3_stmt { } * _selectLastAddValueAmountForPassStatement;
    struct sqlite3_stmt { } * _selectPassAndImageSetsDataStatement;
    struct sqlite3_stmt { } * _selectPassDataStatement;
    struct sqlite3_stmt { } * _selectPassDiffStatement;
    struct sqlite3_stmt { } * _selectPassUniqueIDAsssociateToTransactionWithIdentifierStatement;
    struct sqlite3_stmt { } * _selectPassUniqueIDAsssociateToTransactionWithServiceIdentifierStatement;
    struct sqlite3_stmt { } * _selectPendingAddValueDateForPassStatement;
    struct sqlite3_stmt { } * _selectPreferredAIDStatement;
    struct sqlite3_stmt { } * _selectTransactionWithIdentifierStatement;
    struct sqlite3_stmt { } * _selectTransactionWithServiceIdentifierStatement;
    struct sqlite3_stmt { } * _selectTransactionsStatement;
    struct sqlite3_stmt { } * _selectTransactionsStatementWithSource;
    struct sqlite3_stmt { } * _selectTransactionsStatementWithoutSource;
    struct sqlite3_stmt { } * _selectTransitAppletStateForPassStatement;
    bool  _sendingLocalNotifyDatabaseChanged;
    struct sqlite3_stmt { } * _trimTransactionsForPassStatement;
    struct sqlite3_stmt { } * _updateBalancesForPassStatement;
    struct sqlite3_stmt { } * _updateDeletePendingStatment;
    struct sqlite3_stmt { } * _updateLastAddValueAmountForPassStatement;
    struct sqlite3_stmt { } * _updatePendingAddValueDateForPassStatement;
    struct sqlite3_stmt { } * _updatePreferredAIDStatement;
    struct sqlite3_stmt { } * _updateTransitAppletStateForPassStatement;
}

@property (readonly) struct sqlite3_stmt { }*currentEphemeralTransactionIdentifierStatement;
@property (readonly) struct sqlite3 { }*database;
@property (readonly) struct sqlite3_stmt { }*deleteEphemeralTransactionByPassUniqueIDStatement;
@property (readonly) struct sqlite3_stmt { }*deleteStatement;
@property (readonly) struct sqlite3_stmt { }*deleteTransactionsForPassStatement;
@property (readonly) struct sqlite3_stmt { }*insertDiffStatement;
@property (readonly) struct sqlite3_stmt { }*insertEphemeralTransactionStatement;
@property (readonly) struct sqlite3_stmt { }*insertStatement;
@property (readonly) NSData *libraryHash;
@property (readonly) NSDictionary *manifestHashes;
@property (nonatomic, readonly) unsigned long long numberOfPasses;
@property (nonatomic) bool passDBIsAvailable;
@property (readonly) NSArray *passDescriptions;
@property (readonly) struct sqlite3_stmt { }*selectCloudKitArchivedTransactionsStatement;
@property (readonly) struct sqlite3_stmt { }*selectLastAddValueAmountForPassStatement;
@property (readonly) struct sqlite3_stmt { }*selectPassAndImageSetsDataStatement;
@property (readonly) struct sqlite3_stmt { }*selectPassDataStatement;
@property (readonly) struct sqlite3_stmt { }*selectPassDiffStatement;
@property (readonly) struct sqlite3_stmt { }*selectPendingAddValueDateForPassStatement;
@property (readonly) struct sqlite3_stmt { }*selectPreferredAIDStatement;
@property (readonly) struct sqlite3_stmt { }*selectTransactionWithIdentifierStatement;
@property (readonly) struct sqlite3_stmt { }*selectTransactionWithServiceIdentifierStatement;
@property (readonly) struct sqlite3_stmt { }*selectTransitAppletStateForPassStatement;
@property (readonly) struct sqlite3_stmt { }*trimTransactionsForPassStatement;
@property (readonly) struct sqlite3_stmt { }*updateDeletePendingStatement;
@property (readonly) struct sqlite3_stmt { }*updateLastAddValueAmountForPassStatement;
@property (readonly) struct sqlite3_stmt { }*updatePendingAddValueDateForPassStatement;
@property (readonly) struct sqlite3_stmt { }*updatePreferredAIDStatement;
@property (readonly) struct sqlite3_stmt { }*updateTransitAppletStateForPassStatement;

+ (id)_migrationDataSource;
+ (id)_migrationDelegateQueue;
+ (unsigned long long)latestWatchOSMajorVersion;
+ (long long)maxDatabaseVersion;
+ (void)setMigrationDataSource:(id)arg1;
+ (id)sharedDatabase;

- (void).cxx_destruct;
- (void)_attemptDatabaseOpen;
- (id)_currentEphemeralTransactionIdentifierForPassWithUniqueID:(id)arg1;
- (long long)_databaseVersionExists:(bool*)arg1 valid:(bool*)arg2;
- (id)_decodeObjectOfClass:(Class)arg1 fromStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (id)_decodeObjectOfClasses:(id)arg1 fromStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (id)_diffForUniqueIDLocked:(id)arg1;
- (void)_enumerateAllPassesForMigration:(id /* block */)arg1;
- (bool)_executeSQL:(id)arg1;
- (void)_executeSQLQuery:(id)arg1 processResultsBlock:(id /* block */)arg2;
- (bool)_getDeletePendingForUniqueID:(id)arg1;
- (id)_getPreferredPaymentApplicationForPaymentPass:(id)arg1 aid:(id*)arg2;
- (void)_handleDatabaseChangedExternally;
- (void)_handleFirstUnlock;
- (void)_handleHasMigrationDataSource;
- (void)_insertDatabaseVersionRow:(long long)arg1;
- (id)_lastAddValueAmountForPassWithUniqueIDLocked:(id)arg1;
- (id)_libraryHashLockedForWatchOSMajorVersion:(unsigned long long)arg1;
- (void)_loadInitialManifestLocked;
- (bool)_migrateDatabase:(id /* block */)arg1;
- (void)_notifyDatabaseChangedExternally;
- (void)_notifyDatabaseChangedWithNoop:(bool)arg1;
- (void)_notifyDatabaseChangedWithNoop:(bool)arg1 firstUnlock:(bool)arg2;
- (void)_notifyForFirstUnlock;
- (void)_notifyTransactionAddedOrUpdated:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_notifyTransactionRemoved:(id)arg1 forPassWithUniqueID:(id)arg2;
- (bool)_passDBIsAvailableLocked;
- (id)_passForUniqueIDLocked:(id)arg1 includeImageSets:(bool)arg2;
- (id)_passUniqueIDForTransactionWithIdentifier:(id)arg1;
- (id)_passUniqueIDForTransactionWithServiceIdentifier:(id)arg1;
- (id)_paymentBalancesForPassWithUniqueIDLocked:(id)arg1;
- (id)_pendingAddValueDateForPassWithUniqueIDLocked:(id)arg1;
- (void)_performTransactionWithBlock:(id /* block */)arg1;
- (bool)_preconditionsMetForDatabaseOpen;
- (bool)_removePassWithUniqueIDLocked:(id)arg1;
- (void)_removeTransactionWithIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_removeTransactionWithServiceIdentifierLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (bool)_repairEncodedImagesDuringMigration:(id)arg1;
- (void)_saveDiffLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_savePassLocked:(id)arg1 locallyAdded:(bool)arg2 wasUpdate:(bool*)arg3;
- (void)_saveTransaction:(id)arg1 forPassWithUniqueID:(id)arg2 withPaymentCredentialType:(long long)arg3 shouldTrim:(bool)arg4;
- (void)_saveTransactionLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_setCurrentEphemeralTransactionIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_setLastAddValueAmountLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_setPaymentBalancesLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_setPendingAddValueDateLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_setTransitAppletStateLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (bool)_table:(id)arg1 containsColumn:(id)arg2;
- (id)_transactionWithIdentifierLocked:(id)arg1;
- (id)_transactionWithServiceIdentifierLocked:(id)arg1;
- (id)_transactionsForUniqueIDLocked:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)_transactionsWithCloudKitArchivedState:(bool)arg1;
- (id)_transitAppletStateForPassWithUniqueIDLocked:(id)arg1;
- (void)_trimTransactionsForPassWithUniqueIDLocked:(id)arg1 withPaymentCredentialType:(long long)arg2;
- (bool)_updateAvailableActionsDuringMigration:(id)arg1;
- (bool)_updateCompleteLocalHashesDuringMigration:(id)arg1;
- (bool)_updateCompleteRemoteHashesDuringMigration;
- (void)_updateDatabaseVersionRow:(long long)arg1;
- (bool)_updateDeviceAndPreferredPaymentApplicationsDuringMigration:(id)arg1;
- (bool)_updateDevicePaymentApplicationsDuringMigration:(id)arg1;
- (bool)_updateEffectivePaymentApplicationStateDuringMigration:(id)arg1;
- (bool)_updateEncodedImageSetsDuringMigration:(id)arg1;
- (bool)_updateEncodedPaymentPassDuringMigration:(id)arg1;
- (bool)_updateExpressPassTypesMaskDuringMigration:(id)arg1;
- (bool)_updateFrontAndBackFieldBucketsDuringMigration:(id)arg1;
- (bool)_updateHasStoredValueDuringMigration:(id)arg1;
- (bool)_updateHasUserSelectableContactlessPaymentApplications:(id)arg1;
- (bool)_updateIngestedDatesDuringMigration:(id)arg1;
- (bool)_updateIssuerCountryCodesDuringMigration:(id)arg1;
- (bool)_updateLocalizedDescriptionDuringMigration:(id)arg1;
- (bool)_updateNFCPayloadDuringMigration:(id)arg1;
- (bool)_updateOrganizationNamesDuringMigration:(id)arg1;
- (bool)_updatePrimaryContactlessAndInAppPaymentApplicationsDuringMigration:(id)arg1;
- (bool)_updatePrivateLabelAndCobrandDuringMigration:(id)arg1;
- (bool)_updateSettingsDuringMigration:(id)arg1;
- (id)currentEphemeralTransactionIdentifierForPassWithUniqueID:(id)arg1;
- (struct sqlite3_stmt { }*)currentEphemeralTransactionIdentifierStatement;
- (struct sqlite3 { }*)database;
- (void)dealloc;
- (struct sqlite3_stmt { }*)deleteEphemeralTransactionByPassUniqueIDStatement;
- (struct sqlite3_stmt { }*)deleteStatement;
- (struct sqlite3_stmt { }*)deleteTransactionsForPassStatement;
- (id)diffForUniqueID:(id)arg1;
- (void)enumerateAllPassesAndDescriptionsWithBlock:(id /* block */)arg1 includeImageSets:(bool)arg2;
- (void)enumerateAllPassesWithBlock:(id /* block */)arg1 includeImageSets:(bool)arg2;
- (id)filteredPassesUsingPassDescriptionPredicate:(id)arg1 includeImageSets:(bool)arg2;
- (bool)hasPassesMatchingPassDescriptionPredicate:(id)arg1;
- (id)init;
- (struct sqlite3_stmt { }*)insertDiffStatement;
- (struct sqlite3_stmt { }*)insertEphemeralTransactionStatement;
- (struct sqlite3_stmt { }*)insertStatement;
- (struct sqlite3_stmt { }*)insertTransactionStatement;
- (id)lastAddValueAmountForPassWithUniqueID:(id)arg1;
- (id)libraryHash;
- (id)libraryHashForWatchOSMajorVersion:(unsigned long long)arg1;
- (id)manifestHashes;
- (id)manifestHashesForWatchOSMajorVersion:(unsigned long long)arg1;
- (unsigned long long)numberOfPasses;
- (bool)passDBIsAvailable;
- (id)passDescriptions;
- (id)passForUniqueID:(id)arg1;
- (id)passForUniqueID:(id)arg1 includeImageSets:(bool)arg2;
- (id)passUniqueIDForTransactionWithIdentifier:(id)arg1;
- (id)passUniqueIDForTransactionWithServiceIdentifier:(id)arg1;
- (id)paymentBalancesForPassWithUniqueID:(id)arg1;
- (id)pendingAddValueDateForPassWithUniqueID:(id)arg1;
- (id)preferredPaymentApplicationForPaymentPass:(id)arg1;
- (id)rebuildDatabaseWithPasses:(id)arg1;
- (id)removePassWithUniqueID:(id)arg1;
- (struct sqlite3_stmt { }*)removeTransactionStatement;
- (void)removeTransactionWithIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (struct sqlite3_stmt { }*)removeTransactionWithServiceIdentifierStatement;
- (id /* block */)restoreBlockForVolatilePassData;
- (void)saveDiff:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)savePass:(id)arg1 isLocalPass:(bool)arg2;
- (void)saveTransaction:(id)arg1 forPass:(id)arg2;
- (void)saveTransaction:(id)arg1 forPassWithUniqueID:(id)arg2 withPaymentCredentialType:(long long)arg3;
- (struct sqlite3_stmt { }*)selectBalancesForPassStatement;
- (struct sqlite3_stmt { }*)selectCloudKitArchivedTransactionsStatement;
- (struct sqlite3_stmt { }*)selectDeletePendingStatement;
- (struct sqlite3_stmt { }*)selectLastAddValueAmountForPassStatement;
- (struct sqlite3_stmt { }*)selectPassAndImageSetsDataStatement;
- (struct sqlite3_stmt { }*)selectPassDataStatement;
- (struct sqlite3_stmt { }*)selectPassDiffStatement;
- (struct sqlite3_stmt { }*)selectPassUniqueIDAsssociateToTransactionWithIdentifierStatement;
- (struct sqlite3_stmt { }*)selectPassUniqueIDAsssociateToTransactionWithServiceIdentifierStatement;
- (struct sqlite3_stmt { }*)selectPendingAddValueDateForPassStatement;
- (struct sqlite3_stmt { }*)selectPreferredAIDStatement;
- (struct sqlite3_stmt { }*)selectTransactionWithIdentifierStatement;
- (struct sqlite3_stmt { }*)selectTransactionWithServiceIdentifierStatement;
- (struct sqlite3_stmt { }*)selectTransactionsStatementWithTransactionSource:(unsigned long long)arg1;
- (struct sqlite3_stmt { }*)selectTransitAppletStateForPassStatement;
- (void)setCurrentEphemeralTransactionIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)setDeletePending:(bool)arg1 forUniqueID:(id)arg2;
- (void)setLastAddValueAmount:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)setPassDBIsAvailable:(bool)arg1;
- (void)setPaymentBalances:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)setPendingAddValueDate:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)setPreferredPaymentApplication:(id)arg1 forPaymentPass:(id)arg2;
- (void)setTransitAppletState:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)transactionWithIdentifier:(id)arg1;
- (id)transactionWithServiceIdentifier:(id)arg1;
- (id)transactionsForPassWithUniqueID:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)transactionsWithCloudKitArchivedState:(bool)arg1;
- (id)transitAppletStateForPassWithUniqueID:(id)arg1;
- (struct sqlite3_stmt { }*)trimTransactionsForPassStatement;
- (struct sqlite3_stmt { }*)updateBalancesForPassStatement;
- (struct sqlite3_stmt { }*)updateDeletePendingStatement;
- (struct sqlite3_stmt { }*)updateLastAddValueAmountForPassStatement;
- (struct sqlite3_stmt { }*)updatePendingAddValueDateForPassStatement;
- (struct sqlite3_stmt { }*)updatePreferredAIDStatement;
- (struct sqlite3_stmt { }*)updateTransitAppletStateForPassStatement;

@end
