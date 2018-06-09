/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPersistentHistoryTransactionsResult : NSObject <PLCloudChangeEventsResult> {
    NSString * _currentTokenDescription;
    id /* block */  _isTransactionSyncableFilter;
    NSPersistentHistoryToken * _lastProcessedCoreDataToken;
    long long  _resultType;
    PLPersistentHistoryTransactionIterator * _transactionIterator;
    NSArray * _transactions;
}

@property (readonly, copy) NSString *currentTokenDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken;
@property (readonly) long long resultType;
@property (readonly) Class superclass;

+ (id)fetchTransactionsSinceToken:(id)arg1 inContext:(id)arg2;
+ (id /* block */)isTransactionSyncableFilter;

- (void).cxx_destruct;
- (id)currentTokenDescription;
- (void)enumerateLocalEventsWithBlock:(id /* block */)arg1;
- (id)initWithResultType:(long long)arg1 transactionIterator:(id)arg2;
- (id)initWithSuccesfulTransactionIterator:(id)arg1;
- (id)initWithUnsuccessfulResultType:(long long)arg1;
- (id)lastProcessedCoreDataToken;
- (id)localEventForAllTransactions;
- (long long)resultType;
- (void)sendLocalEvent:(id)arg1 toEnumerationBlock:(id /* block */)arg2;
- (void)updateLastProcessedCoreDataToken;

@end
