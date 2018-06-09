/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularDataSpecifier : PSSpecifier {
    NSArray * _cachedPlanItems;
    PSUICoreTelephonyCallCache * _callCache;
    PSUICoreTelephonyDataCache * _dataCache;
    PSListController * _hostController;
    PSUICellularPlanManagerCache * _planManagerCache;
    PSSimStatusCache * _simStatusCache;
    PSUIDeviceWiFiState * _wifiState;
}

@property (nonatomic, retain) NSArray *cachedPlanItems;
@property (nonatomic, retain) PSUICoreTelephonyCallCache *callCache;
@property (nonatomic, retain) PSUICoreTelephonyDataCache *dataCache;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) PSUICellularPlanManagerCache *planManagerCache;
@property (nonatomic, retain) PSSimStatusCache *simStatusCache;
@property (nonatomic, retain) PSUIDeviceWiFiState *wifiState;

- (void).cxx_destruct;
- (void)acceptedDataSwitch:(id)arg1;
- (id)cachedPlanItems;
- (id)callCache;
- (id)callEndConfirmationSpecifier;
- (void)canceledDataSwitch:(id)arg1;
- (id)dataCache;
- (id)hostController;
- (id)initWithHostController:(id)arg1;
- (id)initWithHostController:(id)arg1 simStatusCache:(id)arg2 planManagerCache:(id)arg3 callCache:(id)arg4 dataCache:(id)arg5 wifiState:(id)arg6;
- (id)isCellularDataEnabled:(id)arg1;
- (id)planManagerCache;
- (void)setCachedPlanItems:(id)arg1;
- (void)setCallCache:(id)arg1;
- (void)setCellularDataEnabled:(id)arg1 specifier:(id)arg2;
- (void)setCellularDataSwitch:(bool)arg1;
- (void)setDataCache:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setPlanManagerCache:(id)arg1;
- (void)setSimStatusCache:(id)arg1;
- (void)setWifiState:(id)arg1;
- (id)simStatusCache;
- (id)wifiState;

@end
