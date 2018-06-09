/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTDomainServer : NSObject <NSXPCListenerDelegate, PTDomainServer, PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver> {
    NSMutableDictionary * _clientsByDomainID;
    NSMutableSet * _dirtyDomainIDs;
    NSArray * _domainGroupNames;
    NSMutableDictionary * _domainIDsByGroupName;
    NSMutableDictionary * _domainInfoByID;
    bool  _persistScheduled;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _restoredDomainIDs;
    NSMutableDictionary * _rootSettingsByDomainID;
    NSMutableDictionary * _testRecipeIDsByDomainID;
    NSMutableDictionary * _testRecipeInfoByID;
    NSMutableSet * _unregisteredClients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *domainGroupNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_onQueueAndBlockingMainQueue_loadSettingsOfClass:(Class)arg1 forDomainID:(id)arg2 observeOutlets:(bool)arg3;
- (id)_queue_domainIDForSettings:(id)arg1;
- (void)_queue_invokeOutletAtKeyPath:(id)arg1 inDomain:(id)arg2;
- (void)_queue_persistChanges;
- (void)_queue_removeClient:(id)arg1;
- (void)_queue_schedulePersistChanges;
- (void)_queue_sendArchiveValue:(id)arg1 forKeyPath:(id)arg2 domainID:(id)arg3;
- (void)_queue_sendRestoreDefaultsForDomainID:(id)arg1;
- (id)displayNameForDomainID:(id)arg1;
- (id)domainGroupNames;
- (id)domainIDForTestRecipeID:(id)arg1;
- (id)domainIDsInGroup:(id)arg1;
- (id)groupNameForDomainID:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)localSettingsOfClass:(Class)arg1;
- (void)persistChanges;
- (void)registerDomainWithInfo:(id)arg1;
- (void)registerTestRecipeWithInfo:(id)arg1;
- (id)rootSettingsForDomainID:(id)arg1;
- (void)sendEvent:(long long)arg1 forTestRecipeID:(id)arg2;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)settingsDidRestoreDefaults:(id)arg1;
- (void)settingsWillRestoreDefaults:(id)arg1;
- (bool)testRecipeForID:(id)arg1 consumesEvent:(long long)arg2;
- (id)testRecipeIDsForDomainID:(id)arg1;
- (id)titleForTestRecipeID:(id)arg1;

@end
