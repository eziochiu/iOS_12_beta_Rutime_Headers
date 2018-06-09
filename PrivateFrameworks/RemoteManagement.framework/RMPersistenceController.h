/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMPersistenceController : NSObject <RMPersistenceControllerProtocol, RMPersistenceStoreChangeProcessingOperationDelegate> {
    NSMutableDictionary * _lastStoreTokenByIdentifier;
    CATSerialOperationQueue * _operationQueue;
    id  _persistenceStoreNotificationObserver;
    NSPersistentContainer * _persistentContainer;
    bool  _persistentContainerLoaded;
    NSObject<OS_dispatch_queue> * _persistentContainerQueue;
    NSMutableDictionary * _storeByIdentifier;
    NSArray * _storeConfigurations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSMutableDictionary *lastStoreTokenByIdentifier;
@property (nonatomic, readonly) CATSerialOperationQueue *operationQueue;
@property (nonatomic, retain) id persistenceStoreNotificationObserver;
@property (getter=isPersistentContainerLoaded, nonatomic) bool persistentContainerLoaded;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *persistentContainerQueue;
@property (nonatomic, readonly, copy) NSMutableDictionary *storeByIdentifier;
@property (nonatomic, readonly, copy) NSArray *storeConfigurations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createPersistentContainer;
- (id)_createStoreDescriptionWithConfigurationType:(id)arg1;
- (id)_loadPersistentContainerWithError:(id*)arg1;
- (void)_persistenceStoreChangedNotification:(id)arg1;
- (void)_registerForPersistenceNotifications;
- (void)_unregisterForPersistenceNotifications;
- (void)_weAreGoingToStopTheWorldFromMovingForwardAndBlockEverythingWhileWeGetTheDataWeNeedWithHandler:(id /* block */)arg1;
- (void)clearUsageDataForOrganization:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)handlePersistenceStoreChanges:(id)arg1 store:(id)arg2;
- (id)initWithStoreConfigurations:(id)arg1;
- (bool)isPersistentContainerLoaded;
- (id)lastStoreTokenByIdentifier;
- (id)operationQueue;
- (void)performBackgroundTask:(id /* block */)arg1;
- (id)persistenceStoreNotificationObserver;
- (id)persistentContainerQueue;
- (id)persistentHistoryTokenForStoreIdentifier:(id)arg1;
- (void)refreshUsageDataForOrganization:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)savePersistentHistoryToken:(id)arg1 forStoreIdentifier:(id)arg2;
- (void)setPersistenceStoreNotificationObserver:(id)arg1;
- (void)setPersistentContainerLoaded:(bool)arg1;
- (id)storeByIdentifier;
- (id)storeConfigurations;

@end
