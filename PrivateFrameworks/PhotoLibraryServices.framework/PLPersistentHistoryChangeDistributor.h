/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistentHistoryChangeDistributor : NSObject {
    NSPersistentHistoryToken * _lastToken;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    int  _notifyToken;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

- (void).cxx_destruct;
- (void)_inq_startObservingRemoteNotifications;
- (void)_inq_stopObservingRemoteNotifications;
- (void)dealloc;
- (void)distributeNewTransactionsSinceLastToken;
- (void)distributeTransactions:(id)arg1;
- (id)fetchTransactionsSinceLastToken;
- (void)forceUserInterfaceReload;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (id)localEventFromTransactions:(id)arg1;
- (id)makeManagedObjectContext;
- (void)startObservingRemoteNotifications;
- (void)stopObservingRemoteNotifications;

@end
