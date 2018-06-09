/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession

+ (id)globalPairingQueue;
+ (id)pairingManager;
+ (bool)systemPairingAvailable;

- (void*)_createPeerDeviceFromPairedPeer:(id)arg1;
- (id)addPeer;
- (id)initializePairingSession:(struct PairingSessionPrivate { }*)arg1;
- (struct NSMutableDictionary { Class x1; }*)mediaRemotePairedDevices;
- (id)pairedPeerDevice;
- (id)pairedPeerDevices;
- (id)pairedPeerFromPeerDevice:(void*)arg1;
- (id)removePeer;
- (bool)shouldAutoRetryPairingExchange:(id)arg1;
- (bool)shouldRetry;
- (id)updateMediaRemotePairedDevice:(id)arg1;
- (id)updatePeer;

@end
