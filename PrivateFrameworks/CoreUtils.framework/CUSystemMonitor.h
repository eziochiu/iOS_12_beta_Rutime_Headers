/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUSystemMonitor : NSObject {
    bool  _activateCalled;
    bool  _activateCompleted;
    id /* block */  _bluetoothAddressChangedHandler;
    id /* block */  _callChangedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _familyUpdatedHandler;
    id /* block */  _firstUnlockHandler;
    bool  _invalidateCalled;
    bool  _invalidateCalled2;
    id /* block */  _invalidationHandler;
    id /* block */  _meDeviceChangedHandler;
    id /* block */  _powerUnlimitedChangedHandler;
    id /* block */  _primaryAppleIDChangedHandler;
    id /* block */  _screenLockedChangedHandler;
    id /* block */  _screenOnChangedHandler;
    id /* block */  _screenSaverChangedHandler;
    id /* block */  _wifiStateChangedHandler;
}

@property (readonly) int activeCallCount;
@property (readonly) struct { unsigned char x1[6]; } bluetoothAddress48;
@property (copy) id /* block */ bluetoothAddressChangedHandler;
@property (readonly, copy) NSData *bluetoothAddressData;
@property (copy) id /* block */ callChangedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy) NSArray *familyMembers;
@property (copy) id /* block */ familyUpdatedHandler;
@property (nonatomic, copy) id /* block */ firstUnlockHandler;
@property (nonatomic, readonly) bool firstUnlocked;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (copy) id /* block */ meDeviceChangedHandler;
@property (readonly, copy) NSString *meDeviceFMFDeviceID;
@property (readonly, copy) NSString *meDeviceIDSDeviceID;
@property (readonly, copy) NSString *meDeviceName;
@property (readonly) bool meDeviceValid;
@property (readonly) bool powerUnlimited;
@property (copy) id /* block */ powerUnlimitedChangedHandler;
@property (copy) id /* block */ primaryAppleIDChangedHandler;
@property (readonly) bool primaryAppleIDIsHSA2;
@property (readonly) bool screenLocked;
@property (copy) id /* block */ screenLockedChangedHandler;
@property (readonly) bool screenOn;
@property (copy) id /* block */ screenOnChangedHandler;
@property (readonly) bool screenSaverActive;
@property (copy) id /* block */ screenSaverChangedHandler;
@property (nonatomic, readonly) unsigned int wifiFlags;
@property (nonatomic, readonly) int wifiState;
@property (nonatomic, copy) id /* block */ wifiStateChangedHandler;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (int)activeCallCount;
- (struct { unsigned char x1[6]; })bluetoothAddress48;
- (id /* block */)bluetoothAddressChangedHandler;
- (id)bluetoothAddressData;
- (id /* block */)callChangedHandler;
- (id)dispatchQueue;
- (id)familyMembers;
- (id /* block */)familyUpdatedHandler;
- (id /* block */)firstUnlockHandler;
- (bool)firstUnlocked;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)meDeviceChangedHandler;
- (id)meDeviceFMFDeviceID;
- (id)meDeviceIDSDeviceID;
- (id)meDeviceName;
- (bool)meDeviceValid;
- (bool)powerUnlimited;
- (id /* block */)powerUnlimitedChangedHandler;
- (id /* block */)primaryAppleIDChangedHandler;
- (bool)primaryAppleIDIsHSA2;
- (bool)screenLocked;
- (id /* block */)screenLockedChangedHandler;
- (bool)screenOn;
- (id /* block */)screenOnChangedHandler;
- (bool)screenSaverActive;
- (id /* block */)screenSaverChangedHandler;
- (void)setBluetoothAddressChangedHandler:(id /* block */)arg1;
- (void)setCallChangedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFamilyUpdatedHandler:(id /* block */)arg1;
- (void)setFirstUnlockHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMeDeviceChangedHandler:(id /* block */)arg1;
- (void)setPowerUnlimitedChangedHandler:(id /* block */)arg1;
- (void)setPrimaryAppleIDChangedHandler:(id /* block */)arg1;
- (void)setScreenLockedChangedHandler:(id /* block */)arg1;
- (void)setScreenOnChangedHandler:(id /* block */)arg1;
- (void)setScreenSaverChangedHandler:(id /* block */)arg1;
- (void)setWifiStateChangedHandler:(id /* block */)arg1;
- (unsigned int)wifiFlags;
- (int)wifiState;
- (id /* block */)wifiStateChangedHandler;

@end
