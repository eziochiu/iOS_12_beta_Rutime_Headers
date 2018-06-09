/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIWiFiAssistCellularUsageSwitchSpecifier : PSAppCellularUsageSwitchSpecifier

+ (bool)shouldShowWifiAssist;
+ (id)wifiAssistGroupSpecifier;

- (id)cellularUsagePolicy;
- (id)initWithTarget:(id)arg1 set:(SEL)arg2 get:(SEL)arg3;
- (void)prefetchCellularUsagePolicy;
- (bool)setCellularUsagePolicy:(id)arg1;

@end
