/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate, HAPRelayActivationClientDelegate, HAPRelayPairingClientDelegate> {
    NSString * _relayAccessoryIdentifier;
    HAPRelayActivationClient * _relayActivationClient;
    HAPCharacteristic * _relayControlPointCharacteristic;
    bool  _relayEnabled;
    HAPCharacteristic * _relayEnabledCharacteristic;
    HAPRelayPairingClient * _relayPairingClient;
    unsigned long long  _relayState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *relayAccessoryIdentifier;
@property (nonatomic, readonly) HAPRelayActivationClient *relayActivationClient;
@property (nonatomic, retain) HAPCharacteristic *relayControlPointCharacteristic;
@property (getter=isRelayEnabled, nonatomic) bool relayEnabled;
@property (nonatomic, retain) HAPCharacteristic *relayEnabledCharacteristic;
@property (nonatomic, readonly) HAPRelayPairingClient *relayPairingClient;
@property (nonatomic, readonly) unsigned long long relayState;
@property (readonly) Class superclass;

+ (id)requiredRelayServiceCharacteristics;

- (void).cxx_destruct;
- (void)_handleRelayActivationCertificate:(id)arg1;
- (void)_handleRelayActivationChallenge:(id)arg1;
- (void)_handleRelayControlPointCharacteristicTransactionWithTLV8Data:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleRelayPairingAccessTokenRequestWithAccessToken:(id)arg1 accessoryIdentifier:(id)arg2;
- (void)_handleRelayPairingIdentifierRequest;
- (void)_handleRelayPairingPairingTokenRequestForControllerIdentifier:(id)arg1;
- (bool)_parseRelayService:(id)arg1;
- (bool)_parseServices;
- (id)_relayActivationClient;
- (id)_relayPairingClient;
- (unsigned long long)_relayState;
- (void)_setRelayActivationClient:(id)arg1;
- (void)_setRelayEnabled:(bool)arg1;
- (void)_setRelayPairingClient:(id)arg1;
- (void)_setRelayState:(unsigned long long)arg1;
- (void)_stopRelayActivationWithError:(id)arg1;
- (void)_stopRelayPairingWithError:(id)arg1;
- (void)_updateRelayEnabled:(bool)arg1;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (void)addRelayPairingWithIdentifier:(id)arg1 accessToken:(id)arg2 admin:(bool)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (bool)isRelayEnabled;
- (id)relayAccessoryIdentifier;
- (id)relayActivationClient;
- (void)relayActivationClient:(id)arg1 didCloseWithError:(id)arg2;
- (void)relayActivationClient:(id)arg1 didReceiveChallenge:(id)arg2;
- (void)relayActivationClient:(id)arg1 didReceiveRelayCertificate:(id)arg2;
- (id)relayControlPointCharacteristic;
- (id)relayEnabledCharacteristic;
- (id)relayPairingClient;
- (void)relayPairingClient:(id)arg1 didCloseWithError:(id)arg2;
- (void)relayPairingClient:(id)arg1 didReceiveAccessToken:(id)arg2 accessoryIdentifier:(id)arg3;
- (void)relayPairingClient:(id)arg1 didReceiveControllerIdentifier:(id)arg2;
- (unsigned long long)relayState;
- (void)removeRelayPairingWithIdentifier:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setRelayAccessoryIdentifier:(id)arg1;
- (void)setRelayControlPointCharacteristic:(id)arg1;
- (void)setRelayEnabled:(bool)arg1;
- (void)setRelayEnabledCharacteristic:(id)arg1;
- (void)startRelayActivationWithActivationClient:(id)arg1;
- (void)startRelayPairingWithPairingClient:(id)arg1;
- (bool)supportsRelay;

@end
