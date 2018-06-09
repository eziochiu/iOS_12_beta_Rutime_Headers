/* made by EzioChiu.
 */

@protocol HDHealthDatabase <NSObject>

@required

- (bool)addJournalEntries:(NSArray *)arg1 error:(id*)arg2;
- (bool)addJournalEntry:(HDJournalEntry *)arg1 error:(id*)arg2;
- (void)addProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1;
- (HDAssertion *)cloneAccessibilityAssertion:(HDAssertion *)arg1 ownerIdentifier:(NSString *)arg2 error:(id*)arg3;
- (bool)isDataProtectedByFirstUnlockAvailable;
- (bool)isProtectedDataAvailable;
- (void)performAsynchronously:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)performTransactionWithContext:(void *)arg1 options:(void *)arg2 error:(void *)arg3 block:(void *)arg4 inaccessibilityHandler:(void *)arg5; // needs 5 arg types, found 15: HDDatabaseTransactionContext *, unsigned long long, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDDatabaseTransaction *, id*, id /* block */, void*, bool, id /* block */, NSError *, id*
- (bool)performTransactionWithOptions:(void *)arg1 error:(void *)arg2 block:(void *)arg3 inaccessibilityHandler:(void *)arg4; // needs 4 arg types, found 14: unsigned long long, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDDatabaseTransaction *, id*, id /* block */, void*, bool, id /* block */, NSError *, id*
- (bool)performTransactionWithOptions:(void *)arg1 error:(void *)arg2 usingBlock:(void *)arg3 inaccessibilityHandler:(void *)arg4; // needs 4 arg types, found 14: unsigned long long, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, HDSQLiteDatabase *, id*, id /* block */, void*, bool, id /* block */, NSError *, id*
- (void)performWhenDataProtectedByFirstUnlockIsAvailable:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)performWithTransactionContext:(void *)arg1 error:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: HDDatabaseTransactionContext *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, id*
- (void)removeProtectedDataObserver:(id <HDDatabaseProtectedDataObserver>)arg1;
- (HDAssertion *)takeAccessibilityAssertionWithOwnerIdentifier:(NSString *)arg1 timeout:(double)arg2 error:(id*)arg3;

@end
