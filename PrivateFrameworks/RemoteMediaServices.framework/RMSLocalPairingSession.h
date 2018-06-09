/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSLocalPairingSession : NSObject <NSNetServiceDelegate, RMSPairingServerDelegate, RMSPairingSession> {
    NSString * _advertisedAppName;
    NSString * _advertisedDeviceModel;
    NSString * _advertisedDeviceName;
    <RMSPairingSessionDelegate> * _delegate;
    RMSPairingServer * _pairingServer;
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
- (id)_expectedPasscodeHashForPasscode:(id)arg1 publicKey:(id)arg2;
- (id)_generatePublicKey;
- (id)_pairingNetServiceName;
- (void)_startBonjourAdvertisingWithPublicKey:(id)arg1 httpServerPort:(unsigned short)arg2;
- (id)advertisedAppName;
- (id)advertisedDeviceModel;
- (id)advertisedDeviceName;
- (void)beginPairing;
- (void)dealloc;
- (id)delegate;
- (void)endPairing;
- (id)init;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)pairingServer:(id)arg1 didPairWithService:(id)arg2 pairingGUID:(id)arg3;
- (void)pairingServerDidFail:(id)arg1;
- (id)passcode;
- (void)setAdvertisedAppName:(id)arg1;
- (void)setAdvertisedDeviceModel:(id)arg1;
- (void)setAdvertisedDeviceName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasscode:(id)arg1;
- (void)unpairService:(id)arg1 completionHandler:(id /* block */)arg2;

@end
