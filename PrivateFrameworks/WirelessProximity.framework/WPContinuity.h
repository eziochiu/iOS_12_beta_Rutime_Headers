/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPContinuity : WPClient {
    long long  _btBandwidthState;
    <WPContinuityDelegate> * _delegate;
    NSMutableDictionary * _transfers;
}

@property long long btBandwidthState;
@property (nonatomic) <WPContinuityDelegate> *delegate;
@property (retain) NSMutableDictionary *transfers;

+ (unsigned char)clientTypeFromContinuityType:(long long)arg1;
+ (long long)continuityTypeFromClientType:(unsigned char)arg1;

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
- (void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(bool)arg3;
- (void)connectedDeviceOverLEPipe:(id)arg1;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (void)disconnectFromPeer:(id)arg1;
- (void)disconnectedDevice:(id)arg1 withError:(id)arg2;
- (void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2;
- (void)foundPeer:(id)arg1 ofType:(unsigned char)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)lostPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (void)populateClientGATT:(id /* block */)arg1;
- (void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)sendData:(id)arg1 toPeer:(id)arg2;
- (void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5;
- (void)setBtBandwidthState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTransfers:(id)arg1;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(bool)arg5;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(bool)arg5 duplicates:(bool)arg6;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3;
- (void)startTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)stateDidChange:(long long)arg1;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)stopScanningForType:(long long)arg1;
- (void)stopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (id)transfers;
- (void)updateAdvertisingRequest:(id)arg1 withUpdate:(id /* block */)arg2;
- (void)updateScanningRequest:(id)arg1 withUpdate:(id /* block */)arg2;
- (void)updatedNotificationState:(bool)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4;

@end
