/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REApplicationCache : RESingleton <LSApplicationWorkspaceObserverProtocol> {
    NSMutableDictionary * _applicationTypes;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _remoteApplicationsMap;
    NSMutableDictionary * _removedApps;
    NSMutableDictionary * _restrictedApps;
    NARApplicationWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_applicationsDidChange:(id)arg1 state:(unsigned long long)arg2;
- (void)_queue_loadApplicationTypes;
- (void)_queue_loadNanoRegistryCompletion:(id /* block */)arg1;
- (void)_queue_loadStateForBundleID:(id)arg1;
- (bool)applicationIsRemote:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)loadNanoRegistryApplications;
- (id)localApplicationForRemoteApplication:(id)arg1;
- (bool)systemApplicationIsRemoved:(id)arg1;
- (bool)systemApplicationIsRestricted:(id)arg1;
- (unsigned long long)typeForApplication:(id)arg1;

@end
