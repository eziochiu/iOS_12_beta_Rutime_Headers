/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate, WPAWDLDelegate, WPNearbyDelegate> {
    bool  _activateCalled;
    bool  _activated;
    bool  _activeScan;
    id /* block */  _bluetoothStateChangedHandler;
    struct BTSessionImpl { } * _btSession;
    bool  _btStarted;
    CBCentralManager * _centralManager;
    unsigned int  _changeFlags;
    id /* block */  _deviceChangedHandler;
    NSArray * _deviceFilter;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    struct NSMutableDictionary { Class x1; } * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    bool  _needDups;
    NSData * _payloadFilterData;
    NSData * _payloadFilterMask;
    long long  _payloadType;
    double  _rescanInterval;
    NSObject<OS_dispatch_source> * _rescanTimer;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _rssiEventLogFile;
    bool  _rssiLog;
    bool  _rssiLogStdOut;
    long long  _rssiThreshold;
    bool  _scanCache;
    long long  _scanInterval;
    long long  _scanRate;
    bool  _scanStarted;
    long long  _scanState;
    id /* block */  _scanStateChangedHandler;
    long long  _scanWindow;
    CURetrier * _startRetrier;
    double  _timeout;
    bool  _timeoutFired;
    id /* block */  _timeoutHandler;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    NSSet * _trackedPeers;
    NSSet * _trackedPeersApplied;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    bool  _updating;
    WPAWDL * _wpAirDrop;
    WPNearby * _wpNearby;
    long long  _wpNearbyType;
    WPPairing * _wpPairing;
}

@property (nonatomic, copy) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic) unsigned int changeFlags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, copy) NSArray *deviceFilter;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly, copy) NSData *payloadFilterData;
@property (nonatomic, readonly, copy) NSData *payloadFilterMask;
@property (nonatomic) double rescanInterval;
@property (nonatomic) bool rssiLog;
@property (nonatomic) bool rssiLogStdOut;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) bool scanCache;
@property (nonatomic) long long scanInterval;
@property (nonatomic) long long scanRate;
@property (nonatomic, readonly) long long scanState;
@property (nonatomic, copy) id /* block */ scanStateChangedHandler;
@property (nonatomic) long long scanWindow;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;
@property (nonatomic, copy) id /* block */ timeoutHandler;
@property (nonatomic, copy) NSSet *trackedPeers;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (int)_btSessionEnsureStarted;
- (void)_btSessionEnsureStopped;
- (void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4;
- (void)_invalidate;
- (void)_invokeBlockActivateSafe:(id /* block */)arg1;
- (void)_nearbyParseManufacturerData:(id)arg1 fields:(id)arg2;
- (void)_nearbyParseNearbyActionPtr:(const char *)arg1 end:(const char *)arg2 fields:(id)arg3;
- (void)_nearbyParseNearbyInfoPtr:(const char *)arg1 end:(const char *)arg2 fields:(id)arg3;
- (bool)_needActiveScan;
- (bool)_needDups;
- (void)_poweredOff;
- (void)_rescanTimerFired;
- (void)_restartIfNeeded;
- (void)_rssiLogClose;
- (void)_rssiLogOpen;
- (void)_startTimeoutIfNeeded;
- (void)_timeoutTimerFired;
- (bool)_updateCounterpart:(id)arg1;
- (void)_updateRescanTimer;
- (void)_updateTrackedPeers;
- (void)_watchSetupParseName:(id)arg1 fields:(id)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;
- (void)awdlDidUpdateState:(id)arg1;
- (void)awdlStartedScanning:(id)arg1;
- (id /* block */)bluetoothStateChangedHandler;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (unsigned int)changeFlags;
- (void)dealloc;
- (id)description;
- (id /* block */)deviceChangedHandler;
- (id)deviceFilter;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id)dispatchQueue;
- (id)init;
- (id)initWithType:(long long)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)modelWithProductID:(unsigned short)arg1;
- (void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5;
- (void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3;
- (void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;
- (void)nearby:(id)arg1 didStartScanningForType:(long long)arg2;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5;
- (void)pairingDidUpdateState:(id)arg1;
- (id)pairingParsePayload:(id)arg1 identifier:(id)arg2 bleDevice:(id)arg3;
- (void)pairingStartedScanning:(id)arg1;
- (bool)pairingUpdatePairedInfo:(id)arg1 fields:(id)arg2 bleDevice:(id)arg3;
- (id)payloadFilterData;
- (id)payloadFilterMask;
- (void)performUpdate:(id /* block */)arg1;
- (double)rescanInterval;
- (bool)rssiLog;
- (bool)rssiLogStdOut;
- (long long)rssiThreshold;
- (bool)scanCache;
- (long long)scanInterval;
- (long long)scanRate;
- (long long)scanState;
- (id /* block */)scanStateChangedHandler;
- (long long)scanWindow;
- (void)setBluetoothStateChangedHandler:(id /* block */)arg1;
- (void)setChangeFlags:(unsigned int)arg1;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFilter:(id)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPayloadFilterData:(id)arg1 mask:(id)arg2;
- (void)setRescanInterval:(double)arg1;
- (void)setRssiLog:(bool)arg1;
- (void)setRssiLogStdOut:(bool)arg1;
- (void)setRssiThreshold:(long long)arg1;
- (void)setScanCache:(bool)arg1;
- (void)setScanInterval:(long long)arg1;
- (void)setScanRate:(long long)arg1;
- (void)setScanStateChangedHandler:(id /* block */)arg1;
- (void)setScanWindow:(long long)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimeoutHandler:(id /* block */)arg1;
- (void)setTrackedPeers:(id)arg1;
- (unsigned int)statusToHeadsetStatus:(unsigned char)arg1;
- (double)timeout;
- (id /* block */)timeoutHandler;
- (id)trackedPeers;

@end
