/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRelayPairingClient : HAPRelayPairingClient <HMDRelayManagerDelegate, HMFLogging> {
    HMDAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDRelayManager * _relayManager;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDRelayManager *relayManager;
@property (readonly) Class superclass;

+ (id)accessoryBagURL;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (id)accessory;
- (id)accessoryBagURL;
- (id)clientQueue;
- (void)close;
- (id)initWithRelayManager:(id)arg1 accessory:(id)arg2;
- (id)logIdentifier;
- (void)open;
- (id)relayManager;
- (void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2;
- (void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2;
- (void)requestControllerIdentifier;

@end
