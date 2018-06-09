/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
 */

@interface WiFiCloudSyncEngineCore : NSObject {
    int (* callback;
    NSThread * clientThread;
    void * context;
    bool  iCloudSyncingEnabled;
    NSUbiquitousKeyValueStore * keyValueStore;
}

@property int (*callback;
@property (retain) NSThread *clientThread;
@property void*context;
@property bool iCloudSyncingEnabled;
@property (retain) NSUbiquitousKeyValueStore *keyValueStore;

- (void)addToKVStore:(id)arg1;
- (int (*)callback;
- (void)clearKVS;
- (id)clientThread;
- (void*)context;
- (void)dealloc;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1;
- (void)enableIcloudSyncing:(bool)arg1 ForBundleId:(id)arg2;
- (bool)iCloudSyncingEnabled;
- (void)initWithCallback:(int (*)arg1 callbackContext:(void*)arg2;
- (id)keyValueStore;
- (void)printCompleteKVStore;
- (void)queryKeychainSyncState;
- (id)readCompleteKVStore;
- (void)readStoreValueForKey:(id)arg1;
- (void)relayCloudCleanUpEvent;
- (void)relayCloudEvent:(id)arg1;
- (void)relayKeychainSyncState:(id)arg1;
- (void)relayMergeNetworks:(id)arg1;
- (void)relayReadStoreValueAction:(id)arg1;
- (void)removeFromKVStore:(id)arg1;
- (void)setCallback:(int (*)arg1;
- (void)setClientThread:(id)arg1;
- (void)setContext:(void*)arg1;
- (void)setICloudSyncingEnabled:(bool)arg1;
- (void)setKeyValueStore:(id)arg1;
- (void)subscribeKVStoreNotficationsForBundleId:(id)arg1;
- (void)synchronizeAndCallMergeNetworks;
- (void)synchronizeKVS;
- (void)ubiquitousKeyValueStoreDidChange:(id)arg1;
- (void)unSubscribeKVStoreNotfications;

@end
