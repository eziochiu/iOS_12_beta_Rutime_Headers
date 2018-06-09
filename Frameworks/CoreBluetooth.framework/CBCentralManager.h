/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBCentralManager : CBManager {
    <CBCentralManagerDelegate> * _delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didDiscoverPeripheral : 1; 
        unsigned int didConnectPeripheral : 1; 
        unsigned int didFailToConnectPeripheral : 1; 
        unsigned int didDisconnectPeripheral : 1; 
        unsigned int didUpdatePeripheralConnectionState : 1; 
        unsigned int didFindPeripheral : 1; 
        unsigned int didLosePeripheral : 1; 
        unsigned int didLoseZone : 1; 
        unsigned int didUpdateConnectionParameters : 1; 
        unsigned int connectionEventDidOccur : 1; 
    }  _delegateFlags;
    bool  _isScanning;
    NSMapTable * _peripherals;
}

@property (nonatomic) <CBCentralManagerDelegate> *delegate;
@property (nonatomic) bool isScanning;
@property (nonatomic, readonly, retain) NSMapTable *peripherals;

- (void).cxx_destruct;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)cancelPeripheralConnection:(id)arg1 force:(bool)arg2;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)enablePrivateModeForPeripheral:(id)arg1 forDuration:(unsigned short)arg2;
- (void)forEachPeripheral:(id /* block */)arg1;
- (void)handleAdvertisingAddressChanged:(id)arg1;
- (void)handleApplicationActivityEvent:(id)arg1;
- (void)handleApplicationConnectionEventDidOccur:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handlePeripheralTrackingUpdated:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (bool)isMsgAllowedAlways:(unsigned short)arg1;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (bool)isScanning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)orphanPeripherals;
- (void)pauseLeConnectionManager;
- (void)pauseScans;
- (id)peerWithInfo:(id)arg1;
- (id)peripheralWithIdentifier:(id)arg1;
- (id)peripheralWithInfo:(id)arg1;
- (id)peripherals;
- (void)resumeLeConnectionManager;
- (void)resumeScans;
- (void)retrieveConnectedPeripherals;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(bool)arg2;
- (id)retrievePeripheralWithAddress:(id)arg1;
- (void)retrievePeripherals:(id)arg1;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (id)retrieveState;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)setConnectionEventOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (void)setIsScanning:(bool)arg1;
- (void)startTrackingPeripheral:(id)arg1 options:(id)arg2;
- (void)stopScan;
- (void)stopTrackingPeripheral:(id)arg1 options:(id)arg2;

@end
