/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncPeerStatusTracker : NSObject {
    NSMutableDictionary * _lastSuccessfulActivityDates;
    NSMutableArray * _observers;
    NSMutableDictionary * _peerInfos;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_loadPeers;
- (void)_modifyActiveTransportInPeer:(id)arg1 withNewTransportsBlock:(id /* block */)arg2;
- (id)_observerBlocks;
- (id)_peerInfoForPeer:(id)arg1;
- (long long)activeTransportsForPeer:(id)arg1;
- (void)addActiveTransports:(long long)arg1 toPeer:(id)arg2;
- (id)addStatusChangeObserverWithBlock:(id /* block */)arg1;
- (id)allPeers;
- (void)debugLogPeers;
- (id)description;
- (id)existingPeerWithSourceDeviceID:(id)arg1;
- (unsigned long long)foreignPeersWithAnyActiveTransportsCount;
- (id)init;
- (id)lastSuccessfulActivityDateOnTransport:(long long)arg1 forPeer:(id)arg2;
- (id)peerWithCompanionLinkDevice:(id)arg1;
- (id)peerWithIDSDeviceIdentifier:(id)arg1;
- (id)peerWithZoneName:(id)arg1 sourceDeviceID:(id)arg2;
- (id)peersWithActiveTransports:(long long)arg1;
- (id)peersWithAnyActiveTransports;
- (id)pseudoPeerForSyncTransportCloudUp;
- (void)registerNewPeer:(id)arg1;
- (void)removeActiveTransports:(long long)arg1 fromPeer:(id)arg2;
- (void)removeStatusChangeObserver:(id)arg1;
- (void)setLastSuccessfulActivityDate:(id)arg1 onTransport:(long long)arg2 forPeer:(id)arg3;
- (void)setSourceDeviceID:(id)arg1 peer:(id)arg2;
- (id)uuidWithUUIDString:(id)arg1;

@end
