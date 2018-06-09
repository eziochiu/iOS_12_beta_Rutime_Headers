/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPTransfer : WPClient {
    bool  _advertiserConnected;
    bool  _advertising;
    bool  _connectedToPeripheral;
    NSUUID * _currentPeripheralUUID;
    NSUUID * _currentlySubscribedCentral;
    <WPTransferDelegate> * _delegate;
    NSMutableSet * _ignoredDevices;
    long long  _lockScanTimer;
    NSMutableData * _notificationData;
    bool  _scanning;
    bool  _sendingTransferComplete;
    bool  _sentEOM;
    bool  _unsubscribeComing;
}

@property bool advertiserConnected;
@property bool advertising;
@property bool connectedToPeripheral;
@property (retain) NSUUID *currentPeripheralUUID;
@property (retain) NSUUID *currentlySubscribedCentral;
@property <WPTransferDelegate> *delegate;
@property (retain) NSMutableSet *ignoredDevices;
@property long long lockScanTimer;
@property (retain) NSMutableData *notificationData;
@property bool scanning;
@property bool sendingTransferComplete;
@property bool sentEOM;
@property bool unsubscribeComing;

- (void).cxx_destruct;
- (bool)advertiserConnected;
- (void)advertiserStateDidChange:(long long)arg1;
- (bool)advertising;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (void)central:(id)arg1 subscribed:(bool)arg2 toCharacteristic:(id)arg3 inService:(id)arg4;
- (id)clientAsString;
- (void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(bool)arg3;
- (bool)connectedToPeripheral;
- (id)currentPeripheralUUID;
- (id)currentlySubscribedCentral;
- (void)dealloc;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (void)disconnectedDevice:(id)arg1 withError:(id)arg2;
- (void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (void)ignoreDevice;
- (id)ignoredDevices;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 options:(id)arg4;
- (void)invalidate;
- (long long)lockScanTimer;
- (id)notificationData;
- (void)populateClientGATT:(id /* block */)arg1;
- (void)receivedData:(id)arg1;
- (void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;
- (void)scannerStateDidChange:(long long)arg1;
- (bool)scanning;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (bool)sendingTransferComplete;
- (void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5;
- (bool)sentEOM;
- (void)setAdvertiserConnected:(bool)arg1;
- (void)setAdvertising:(bool)arg1;
- (void)setConnectedToPeripheral:(bool)arg1;
- (void)setCurrentPeripheralUUID:(id)arg1;
- (void)setCurrentlySubscribedCentral:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIgnoredDevices:(id)arg1;
- (void)setLockScanTimer:(long long)arg1;
- (void)setNotificationData:(id)arg1;
- (void)setScanning:(bool)arg1;
- (void)setSendingTransferComplete:(bool)arg1;
- (void)setSentEOM:(bool)arg1;
- (void)setUnsubscribeComing:(bool)arg1;
- (void)startAdvertising;
- (void)startScan;
- (void)stopAdvertising;
- (void)stopScan;
- (void)transferFailed:(id)arg1;
- (bool)unsubscribeComing;
- (void)updatedNotificationState:(bool)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4;

@end
