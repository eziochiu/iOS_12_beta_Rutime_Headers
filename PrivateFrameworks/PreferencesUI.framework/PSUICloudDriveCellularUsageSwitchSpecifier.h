/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICloudDriveCellularUsageSwitchSpecifier : PSAppCellularUsageSwitchSpecifier

+ (id)_appleAccount;
+ (id)accountStore;
+ (id)cloudDriveGroupSpecifier;
+ (bool)shouldShowCloudDrive;

- (id)cellularUsagePolicy;
- (id)initWithTarget:(id)arg1 set:(SEL)arg2 get:(SEL)arg3;
- (void)prefetchCellularUsagePolicy;
- (bool)setCellularUsagePolicy:(id)arg1;

@end
