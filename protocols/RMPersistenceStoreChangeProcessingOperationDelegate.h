/* made by EzioChiu.
 */

@protocol RMPersistenceStoreChangeProcessingOperationDelegate <NSObject>

@required

- (void)handlePersistenceStoreChanges:(NSDictionary *)arg1 store:(NSPersistentStore *)arg2;
- (void)performBackgroundTask:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSManagedObjectContext *, void*
- (NSPersistentHistoryToken *)persistentHistoryTokenForStoreIdentifier:(NSString *)arg1;
- (void)savePersistentHistoryToken:(NSPersistentHistoryToken *)arg1 forStoreIdentifier:(NSString *)arg2;

@end
