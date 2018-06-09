/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFKnownNetworkStore : NSObject {
    bool  _hasHS20Networks;
    NSSet * _knownNetworks;
    NSObject<OS_dispatch_queue> * _knownNetworksQueue;
    NSSet * _managedNetworkNames;
}

@property (nonatomic, readonly) bool hasHS20Networks;
@property (nonatomic, retain) NSSet *knownNetworks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *knownNetworksQueue;
@property (nonatomic, retain) NSSet *managedNetworkNames;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clientServerRestarted:(id)arg1;
- (void)_forceUpdateKnownNetworks;
- (void)_forceUpdateKnownNetworksAndWait:(bool)arg1;
- (id)_init;
- (id)_networkProfileFromNetworkAttributes:(id)arg1;
- (void)_preferredNetworksDidChange:(id)arg1;
- (id)getGeoTagsForNetworkProfile:(id)arg1;
- (id)getScoreForNetworkProfile:(id)arg1;
- (bool)hasHS20Networks;
- (id)init;
- (id)knownNetworks;
- (id)knownNetworksQueue;
- (id)managedNetworkNames;
- (bool)networkMatchesManagedProfile:(id)arg1;
- (id)networkProfileForNetwork:(id)arg1;
- (id)networkProfileWithSSID:(id)arg1;
- (id)networkProfileWithSSID:(id)arg1 securityMode:(long long)arg2;
- (bool)removeNetworkProfile:(id)arg1 error:(id*)arg2;
- (bool)saveNetworkProfile:(id)arg1 forReason:(unsigned long long)arg2 error:(out id*)arg3;
- (bool)setAutoJoinEnabled:(bool)arg1 forProfile:(id)arg2 error:(out id*)arg3;
- (void)setKnownNetworks:(id)arg1;
- (void)setKnownNetworksQueue:(id)arg1;
- (void)setManagedNetworkNames:(id)arg1;
- (void)updateKnownNetworks;

@end
