/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CKSettingSMSRelayController : PSListController <IDSServiceDelegate> {
    IDSService * _relayService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *relayService;
@property (readonly) Class superclass;

+ (id)authorizedSMSRelayDevices;
+ (bool)deviceIsAuthorized:(id)arg1;
+ (unsigned long long)numberOfActiveDevices;
+ (bool)shouldShowSMSRelaySettings;

- (void).cxx_destruct;
- (void)dealloc;
- (id)getDeviceActive:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)relayService;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setDeviceActive:(id)arg1 specifier:(id)arg2;
- (void)setRelayService:(id)arg1;
- (id)specifiers;
- (void)systemApplicationWillEnterForeground;
- (void)viewWillAppear:(bool)arg1;

@end
