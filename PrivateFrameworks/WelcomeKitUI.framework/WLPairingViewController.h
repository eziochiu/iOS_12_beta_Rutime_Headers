/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

@interface WLPairingViewController : WLWelcomeGroupViewController {
    UILabel * _explanationView;
    NSString * _pairingCode;
    UILabel * _pairingCodeView;
    WLSourceDevicesController * _sourceDevicesController;
    NSString * _ssid;
    UIButton * _wifiInfoButton;
    NSString * _wifiPSK;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSourceDevicesController:(id)arg1 pairingCode:(id)arg2 wifiPSK:(id)arg3 ssid:(id)arg4 metrics:(id)arg5;
- (void)loadView;
- (void)showDirectConnectionUI;
- (void)wifiInfoTapped:(id)arg1;

@end
