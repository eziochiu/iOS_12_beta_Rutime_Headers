/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLClientServerTransaction : NSObject {
    NSSet * _changeScopes;
    NSString * _transactionToken;
}

@property (nonatomic, readonly, retain) NSSet *changeScopes;
@property (nonatomic, copy) NSString *transactionToken;

+ (id)_allTransactionPaths;
+ (bool)_archiveRecoveryHistoryWithError:(id*)arg1;
+ (void)_checkForAndHandleExcessiveRecoveryAttempts;
+ (id)_fileManager;
+ (id)_filePathForTransactionWithToken:(id)arg1;
+ (bool)_hasExcessiveRecoveryAttempts;
+ (bool)_isOutstandingTransactionAtPath:(id)arg1 getScopeValues:(unsigned long long*)arg2;
+ (id)_outstandingTransactionScopesByPath;
+ (unsigned long long)_readScopeValuesFromFileDescriptor:(int)arg1;
+ (void)_recordRecoveryAttempt;
+ (id)_recoveryHistoryFilePath;
+ (id)_scopeValuesByScope;
+ (id)_transactionsDirectory;
+ (void)addScopesForTransaction:(id)arg1 toXPCDictionary:(id)arg2;
+ (void)addTokenForTransaction:(id)arg1 toXPCDictionary:(id)arg2;
+ (void)addTransaction:(id)arg1 toUserInfo:(id)arg2;
+ (id)beginClientTransactionWithChangeScopes:(id)arg1;
+ (id)beginServerTransactionWithToken:(id)arg1 changeScopes:(id)arg2;
+ (id)changeScopesFromXPCDictionary:(id)arg1;
+ (id)descriptionOfAllTransactionFiles;
+ (void)handleOutstandingTransactions:(id /* block */)arg1;
+ (void)removeTransactionFromUserInfo:(id)arg1;
+ (unsigned long long)scopeValuesFromScopes:(id)arg1;
+ (id)scopesFromScopeValues:(unsigned long long)arg1;
+ (id)serverTransactionQueue;
+ (id)transactionFromUserInfo:(id)arg1;
+ (id)transactionTokenFromXPCDictionary:(id)arg1;

- (void)abortTransaction;
- (void)addChangeScopes:(id)arg1;
- (id)changeScopes;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)arg1;
- (void)dealloc;
- (bool)isClientTransaction;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;
- (void)setTransactionToken:(id)arg1;
- (void)stillAlive;
- (id)transactionToken;

@end
