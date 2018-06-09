/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSSQLiteStatement * _changeRequestStatement;
    NSFetchRequest * _fetchRequest;
    bool  _shouldUseBatches;
}

@property (nonatomic, readonly) NSSQLiteStatement *changeRequestStatement;
@property (nonatomic, readonly) NSPersistentHistoryChangeRequest *request;
@property (nonatomic, readonly) bool shouldUseBatches;

- (id)_changeFromResult:(id)arg1 withTransaction:(id)arg2;
- (void)_createChangeRequestStatement;
- (id)_processResult:(id)arg1;
- (id)_transactionFromResult:(id)arg1 withChanges:(id)arg2;
- (id)changeRequestStatement;
- (id)createCountRequestContextForChanges;
- (id)createDeleteTransactionsRequestContext;
- (id)createRequestContextForChangesWithTransactionIDs:(id)arg1;
- (void)dealloc;
- (void)executePrologue;
- (bool)executeRequestUsingConnection:(id)arg1;
- (id)fetchRequestContextForChanges;
- (id)fetchRequestDescribingChanges;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)request;
- (bool)shouldUseBatches;

@end
