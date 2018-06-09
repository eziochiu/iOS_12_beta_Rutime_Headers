/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKBulletinManager : NSObject <NSXPCListenerDelegate, WLKBulletinDataProviderDelegate, WLKBulletinServer, WLKBulletinStoreDelegate> {
    long long  _appInstallationState;
    WLKBulletinStore * _bulletinStore;
    NSMutableSet * _clients;
    BBDataProviderConnection * _connection;
    NSMutableSet * _connections;
    BBDataProviderProxy * _dataProviderProxy;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _privateQueue;
}

@property (nonatomic) long long appInstallationState;
@property (nonatomic, retain) WLKBulletinStore *bulletinStore;
@property (nonatomic, retain) NSMutableSet *clients;
@property (nonatomic, retain) BBDataProviderConnection *connection;
@property (nonatomic, retain) NSMutableSet *connections;
@property (nonatomic, retain) BBDataProviderProxy *dataProviderProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateQueue;
@property (readonly) Class superclass;

+ (id)sharedBulletinManager;

- (void).cxx_destruct;
- (void)_handleTVAppInstalledNotification:(id)arg1;
- (void)_setAppInstalled:(bool)arg1;
- (void)_start;
- (void)_stop;
- (void)addClient:(id)arg1;
- (long long)appInstallationState;
- (void)bulletinDataProvider:(id)arg1 didReceiveResponse:(id)arg2;
- (id)bulletinStore;
- (void)bulletinStore:(id)arg1 didRemoveBulletinWithCoalescingIDs:(id)arg2;
- (id)clients;
- (id)connection;
- (id)connections;
- (id)dataProviderProxy;
- (void)dealloc;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)postBulletin:(id)arg1;
- (id)privateQueue;
- (void)setAppInstallationState:(long long)arg1;
- (void)setBulletinStore:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDataProviderProxy:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)start;
- (void)updateAppInstallationState;

@end
