/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPNearby : WPClient {
    long long  _btBandwidthState;
    <WPNearbyDelegate> * _delegate;
    NSMutableDictionary * _discoveredPeers;
    NSArray * _leCapablePeers;
    NSMutableSet * _lePipePeers;
    NSMutableDictionary * _transfers;
}

@property long long btBandwidthState;
@property (nonatomic) <WPNearbyDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *discoveredPeers;
@property (retain) NSArray *leCapablePeers;
@property (retain) NSMutableSet *lePipePeers;
@property (retain) NSMutableDictionary *transfers;

+ (unsigned char)clientTypeFromNearbyType:(long long)arg1;
+ (bool)holdVoucherForConnections;
+ (long long)nearbyTypeFromClientType:(unsigned char)arg1;

- (void).cxx_destruct;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (void)bandwidthStateUpdated:(id)arg1;
- (long long)btBandwidthState;
- (void)central:(id)arg1 subscribed:(bool)arg2 toCharacteristic:(id)arg3 inService:(id)arg4;
- (id)clientAsString;
- (void)connectToPeer:(id)arg1;
- (void)connectToPeer:(id)arg1 withOptions:(id)arg2;
- (void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(bool)arg3;
- (void)connectedDeviceOverLEPipe:(id)arg1;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (void)disconnectFromPeer:(id)arg1;
- (void)disconnectedDevice:(id)arg1 withError:(id)arg2;
- (void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2;
- (void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (id)discoveredPeers;
- (void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2;
- (void)foundPeer:(id)arg1 ofType:(unsigned char)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (id)leCapablePeers;
- (id)lePipePeers;
- (void)lostPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)pipeStateDidChange:(long long)arg1;
- (void)populateClientGATT:(id /* block */)arg1;
- (void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)sendData:(id)arg1 toPeer:(id)arg2;
- (void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5;
- (void)setBtBandwidthState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveredPeers:(id)arg1;
- (void)setLeCapablePeers:(id)arg1;
- (void)setLePipePeers:(id)arg1;
- (void)setTransfers:(id)arg1;
- (void)startAdvertisingOfType:(long long)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4;
- (void)startAdvertisingOfType:(long long)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4 options:(id)arg5;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 priority:(long long)arg3;
- (void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5;
- (void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(bool)arg7;
- (void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(bool)arg7 scanCache:(bool)arg8;
- (void)startTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)stateDidChange:(long long)arg1;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)stopScanningForType:(long long)arg1;
- (void)stopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (id)transfers;
- (void)updateAdvertisingRequest:(id)arg1 withUpdate:(id /* block */)arg2;
- (void)updatedNotificationState:(bool)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4;

@end
