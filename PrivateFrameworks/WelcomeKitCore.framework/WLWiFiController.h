/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLWiFiController : NSObject {
    NSNumber * _channel;
    struct __WiFiManagerClient { } * _managerClientRef;
    struct NETRBClient { } * _netrbClientRef;
    NSString * _password;
    NSString * _ssid;
    struct __WiFiNetwork { } * _startedNetwork;
    id /* block */  _wifiStartCompletionBlock;
    id /* block */  _wifiStopCompletionBlock;
}

@property (nonatomic, readonly) bool hasSoftAPCapability;
@property (nonatomic, readonly) bool softAPIsEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (struct __WiFiDeviceClient { }*)_deviceClient;
- (void)_enableSoftAPWithCompletion:(id /* block */)arg1;
- (struct NETRBClient { }*)_netrbClient;
- (id)_networkRecordFromOptions:(id)arg1;
- (void)disableSoftAPWithCompletion:(id /* block */)arg1;
- (void)enableSoftAPWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(id /* block */)arg4;
- (bool)hasSoftAPCapability;
- (id)init;
- (void)network:(struct __WiFiNetwork { }*)arg1 didFailToStartWithErrorCode:(int)arg2 response:(id)arg3;
- (void)network:(struct __WiFiNetwork { }*)arg1 didFailToStopWithErrorCode:(int)arg2 response:(id)arg3;
- (void)network:(struct __WiFiNetwork { }*)arg1 didStartWithResponse:(id)arg2;
- (void)network:(struct __WiFiNetwork { }*)arg1 didStopWithResponse:(id)arg2;
- (bool)softAPIsEnabled;
- (bool)startDHCPReturningError:(id*)arg1;
- (void)startWiFiWithCompletion:(id /* block */)arg1;
- (void)stopDHCP;
- (void)stopWiFiWithCompletion:(id /* block */)arg1;

@end
