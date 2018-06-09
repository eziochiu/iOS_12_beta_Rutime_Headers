/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPersistentHistoryChangeTracker : NSObject <PLCloudChangeTracker> {
    NSManagedObjectContext * _context;
    <PLCloudChangeTrackerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSPersistentHistoryToken * _lastKnownDeletionToken;
    NSPersistentHistoryToken * _lastKnownToken;
    int  _notifyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLCloudChangeTrackerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasChangeTrackerToken;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *lastKnownDeletionTokenDescription;
@property (readonly, copy) NSString *lastKnownTokenDescription;
@property (readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)archivedDataWithToken:(id)arg1;
+ (id)unarchiveTokentWithData:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)_registerToChangeHubNotification;
- (void)_unregisterToChangeHubNotification;
- (void)_updateLastKnownDeletionTokenToToken:(id)arg1;
- (void)_updateLastKnownTokensToToken:(id)arg1;
- (void)changeTrackerDidReceiveChanges;
- (void)clearToken;
- (bool)connect;
- (id)currentToken;
- (id)delegate;
- (void)disconnect;
- (id)eventsResultFromPersistentHistoryToken:(id)arg1;
- (id)fetchAllEvents;
- (id)fetchDeletionEvents;
- (void)forceTokenToCurrent;
- (bool)hasChangeTrackerToken;
- (id)initWithManagedObjectContext:(id)arg1;
- (bool)isConnected;
- (id)lastKnownDeletionTokenDescription;
- (id)lastKnownTokenDescription;
- (id)lastKnownTokenFromDisk;
- (id)name;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)setDelegate:(id)arg1;
- (void)updateLastKnownDeletionTokenToResult:(id)arg1;
- (void)updateLastKnownTokenToResult:(id)arg1;

@end
