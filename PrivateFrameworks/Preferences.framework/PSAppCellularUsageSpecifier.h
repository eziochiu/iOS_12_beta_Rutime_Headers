/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAppCellularUsageSpecifier : PSSpecifier {
    NSString * _appName;
    NSString * _bundleID;
    bool  _canEnable;
    bool  _isManaged;
    int  _selectedBillingCycle;
    bool  _shouldShowUsage;
    bool  _shouldUseBillingCycleData;
    PSCellularUsage * _usage;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) bool canEnable;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool isManaged;
@property (nonatomic) int selectedBillingCycle;
@property (nonatomic) bool shouldShowUsage;
@property (nonatomic) bool shouldUseBillingCycleData;
@property (nonatomic, copy) PSCellularUsage *usage;

+ (id)specifierWithCellTitle:(id)arg1 appName:(id)arg2 bundleID:(id)arg3 canBeEnabled:(bool)arg4 shouldShowUsage:(bool)arg5 target:(id)arg6 set:(SEL)arg7 get:(SEL)arg8 icon:(id)arg9;
+ (id)systemPolicySpecifierForAppName:(id)arg1 bundleID:(id)arg2 icon:(id)arg3 enabled:(bool)arg4;

- (void).cxx_destruct;
- (id)appName;
- (id)bundleID;
- (bool)canEnable;
- (id)cellularUsagePolicy;
- (double)dataUsage;
- (id)dataUsageString;
- (bool)isEnabled;
- (bool)isManaged;
- (void)prefetchCellularUsagePolicy;
- (int)selectedBillingCycle;
- (void)setAppName:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCanEnable:(bool)arg1;
- (bool)setCellularUsagePolicy:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIsManaged:(bool)arg1;
- (void)setSelectedBillingCycle:(int)arg1;
- (void)setShouldShowUsage:(bool)arg1;
- (void)setShouldUseBillingCycleData:(bool)arg1;
- (void)setUsage:(id)arg1;
- (bool)shouldShowUsage;
- (bool)shouldUseBillingCycleData;
- (id)usage;

@end
