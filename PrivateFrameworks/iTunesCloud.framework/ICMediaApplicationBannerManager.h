/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMediaApplicationBannerManager : NSObject <ICMediaApplicationBannerManagerClientProtocol, ICMediaApplicationBannerManagerServiceProtocol, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    ICMediaApplicationBannerStore * _bannerStore;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _isSystemService;
    NSOperationQueue * _operationQueue;
    bool  _resetNeeded;
    NSXPCConnection * _xpcClientConnection;
    NSMutableSet * _xpcConnections;
    NSXPCListener * _xpcServiceListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;
+ (id)sharedSystemService;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_postClientStoreDidChangeNotification;
- (void)_processSyncCommands:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeConnection:(id)arg1;
- (void)_schedulePeriodicTasks;
- (id)_storePlatformRequestContextWithIdentity:(id)arg1;
- (void)allBannersWithCompletion:(id /* block */)arg1;
- (void)bannersForBundleIdentifier:(id)arg1 target:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithNotificationStore:(id)arg1 isSystemService:(bool)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)processSyncCommands:(id)arg1 completion:(id /* block */)arg2;
- (void)resetWithCompletion:(id /* block */)arg1;
- (void)serviceAllBannersWithCompletion:(id /* block */)arg1;
- (void)serviceBannerStoreDidChange;
- (void)serviceBannersForBundleIdentifier:(id)arg1 target:(id)arg2 completion:(id /* block */)arg3;
- (void)serviceProcessSyncCommands:(id)arg1 completion:(id /* block */)arg2;
- (void)serviceResetWithCompletion:(id /* block */)arg1;
- (void)serviceSyncWithCompletion:(id /* block */)arg1;
- (void)startSystemService;
- (void)stopSystemService;
- (void)syncWithCompletion:(id /* block */)arg1;

@end
