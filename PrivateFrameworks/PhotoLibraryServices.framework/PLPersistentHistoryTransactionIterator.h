/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistentHistoryTransactionIterator : NSObject {
    NSManagedObjectContext * _context;
    unsigned long long  _count;
    NSPersistentHistoryToken * _initialToken;
    NSPersistentHistoryToken * _lastIteratedToken;
    unsigned long long  _transactionIndex;
    NSArray * _transactions;
}

@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly, copy) NSPersistentHistoryToken *initialToken;
@property (nonatomic, readonly, copy) NSPersistentHistoryToken *lastIteratedToken;

+ (id)iteratorSinceToken:(id)arg1 withBatchSize:(unsigned long long)arg2 managedObjectObjectContext:(id)arg3 error:(id*)arg4;
+ (id)iteratorSinceToken:(id)arg1 withManagedObjectObjectContext:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)_enumerateOneTransactionWithBlock:(id /* block */)arg1;
- (bool)_hasMoreTransactions;
- (id)context;
- (unsigned long long)count;
- (void)enumerateRemainingTransactionsWithBlock:(id /* block */)arg1;
- (id)initWithInitialToken:(id)arg1 transactions:(id)arg2 managedObjectObjectContext:(id)arg3;
- (id)initialToken;
- (id)lastIteratedToken;

@end
