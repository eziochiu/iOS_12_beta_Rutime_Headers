/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFSaveSettingsOperation : WFOperation {
    bool  _currentNetwork;
    NSOperationQueue * _keychainQueue;
    struct __SCPreferences { } * _prefs;
    NSArray * _settings;
    NSString * _ssid;
}

@property (getter=isCurrentNetwork, nonatomic) bool currentNetwork;
@property (nonatomic, retain) NSOperationQueue *keychainQueue;
@property (nonatomic) struct __SCPreferences { }*prefs;
@property (nonatomic, retain) NSArray *settings;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (void)_applyProxySettings:(id)arg1 service:(struct __SCNetworkProtocol { }*)arg2;
- (struct __SCNetworkSet { }*)_createNewSetForNetworkNamed:(id)arg1;
- (struct __SCNetworkSet { }*)_defaultSetRetained;
- (void)dealloc;
- (id)initWithNetworkProfile:(id)arg1 settings:(id)arg2;
- (id)initWithSSID:(id)arg1 settings:(id)arg2;
- (bool)isCurrentNetwork;
- (id)keychainQueue;
- (struct __SCPreferences { }*)prefs;
- (void)setCurrentNetwork:(bool)arg1;
- (void)setKeychainQueue:(id)arg1;
- (void)setPrefs:(struct __SCPreferences { }*)arg1;
- (void)setSettings:(id)arg1;
- (void)setSsid:(id)arg1;
- (id)settings;
- (id)ssid;
- (void)start;

@end
