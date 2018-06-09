/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropDiscoveryController : NSObject <SFWirelessSettingsControllerDelegate, UIActionSheetDelegate> {
    UIAlertController * _alertController;
    id  _alertControllerDelegate;
    struct __SFOperation { } * _controller;
    id  _delegate;
    long long  _discoverableMode;
    bool  _isLegacyDevice;
    bool  _isLegacyModeEnabled;
    bool  _isLegacyModeSettable;
    bool  _isVisible;
    SFWirelessSettingsController * _settingsController;
}

@property <SFAirDropDiscoveryAlertControllerDelegate> *alertControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property <SFAirDropDiscoveryControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property long long discoverableMode;
@property (readonly) unsigned long long hash;
@property (getter=isLegacyDevice, readonly) bool legacyDevice;
@property (getter=isLegacyModeEnabled) bool legacyModeEnabled;
@property (getter=isLegacyModeSettable, readonly) bool legacyModeSettable;
@property (readonly) Class superclass;
@property (getter=isVisible, readonly) bool visible;

- (void).cxx_destruct;
- (id)alertControllerDelegate;
- (void)dealloc;
- (id)delegate;
- (long long)discoverableMode;
- (id)discoverableModeAlertController;
- (id)discoverableModeToString:(long long)arg1;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;
- (void)invalidate;
- (bool)isLegacyDevice;
- (bool)isLegacyModeEnabled;
- (bool)isLegacyModeSettable;
- (bool)isVisible;
- (long long)operationDiscoverableModeToInteger:(id)arg1;
- (void)setAlertControllerDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoverableMode:(long long)arg1;
- (void)setLegacyModeEnabled:(bool)arg1;
- (void)updateAlertControllerTitle;
- (void)wirelessSettingsDidChange:(id)arg1;

@end
