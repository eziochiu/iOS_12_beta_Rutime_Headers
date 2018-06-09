/* made by EzioChiu.
 */

@protocol ICSearchIndexerDataSource <NSObject>

@required

- (NSArray *)allIndexableObjectIDs;
- (NSString *)dataSourceIdentifier;
- (NSArray *)indexableObjectIDsWithIdentifiers:(NSArray *)arg1;
- (bool)isObservingChanges;
- (bool)needsReindexing;
- (NSManagedObjectContext *)newManagedObjectContext;
- (<ICSearchIndexable> *)objectForSearchableItem:(CSSearchableItem *)arg1 context:(NSManagedObjectContext *)arg2;
- (<ICSearchIndexable> *)objectForSearchableItemIdentifier:(NSString *)arg1 context:(NSManagedObjectContext *)arg2;
- (NSArray *)objectIDsNeedingIndexing;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerDidFinishIndexingObjectIDs:(NSArray *)arg1 error:(NSError *)arg2;
- (void)searchIndexerDidFinishReindexingWithError:(NSError *)arg1;
- (void)searchIndexerWillBeginReindexing;
- (void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(NSArray *)arg1;
- (void)searchIndexerWillIndexObjectIDs:(NSArray *)arg1;
- (NSArray *)searchableItemIdentifiersToBeDeleted;
- (NSArray *)searchableItemsForObjectIDs:(NSArray *)arg1;
- (void)startObservingChanges;
- (void)stopObservingChanges;

@end
