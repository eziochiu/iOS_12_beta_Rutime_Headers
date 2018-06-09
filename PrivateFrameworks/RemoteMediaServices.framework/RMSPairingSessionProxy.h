/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSPairingSessionProxy : RMSSessionProxy <RMSPairingSession> {
    NSString * _advertisedAppName;
    NSString * _advertisedDeviceModel;
    NSString * _advertisedDeviceName;
    <RMSPairingSessionDelegate> * _delegate;
    RMSIDSClient * _idsClient;
    bool  _pairing;
    NSString * _passcode;
}

@property (nonatomic, retain) NSString *advertisedAppName;
@property (nonatomic, retain) NSString *advertisedDeviceModel;
@property (nonatomic, retain) NSString *advertisedDeviceName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSPairingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *passcode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDidPairWithServiceNotification:(id)arg1;
- (void)_handlePairingDidFailNotification:(id)arg1;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)_notifyDelegatePairingFailed;
- (id)advertisedAppName;
- (id)advertisedDeviceModel;
- (id)advertisedDeviceName;
- (void)beginPairing;
- (void)dealloc;
- (id)delegate;
- (void)endPairing;
- (void)heartbeatDidFail;
- (id)init;
- (id)passcode;
- (void)setAdvertisedAppName:(id)arg1;
- (void)setAdvertisedDeviceModel:(id)arg1;
- (void)setAdvertisedDeviceName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasscode:(id)arg1;
- (void)unpairService:(id)arg1 completionHandler:(id /* block */)arg2;

@end
