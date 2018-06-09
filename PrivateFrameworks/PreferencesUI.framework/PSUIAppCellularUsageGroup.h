/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAppCellularUsageGroup : NSObject <PSSpecifierGroup> {
    PSExpandableAppListGroup * _appGroupController;
    id /* block */  _appSortComparator;
    bool  _cancelled;
    bool  _enabled;
    PSSpecifier * _groupSpecifier;
    NSArray * _headerSpecifiers;
    bool  _loading;
    NSArray * _specifiers;
    PSAppWirelessDataUsageManager * _wirelessManager;
    PSWirelessDataUsageWorkspace * _workspace;
}

@property (nonatomic, retain) PSExpandableAppListGroup *appGroupController;
@property (nonatomic, copy) id /* block */ appSortComparator;
@property (getter=isCancelled) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *headerSpecifiers;
@property bool loading;
@property (readonly) Class superclass;
@property (nonatomic, retain) PSAppWirelessDataUsageManager *wirelessManager;
@property (retain) PSWirelessDataUsageWorkspace *workspace;

+ (id)nameForSpecialCategory:(id)arg1;

- (void).cxx_destruct;
- (id)appCellularUsagePolicyForSpecifier:(id)arg1;
- (id)appGroupController;
- (id /* block */)appSortComparator;
- (void)calculateUsage;
- (void)cancel;
- (void)dealloc;
- (id)getAppSpecifiersForVisibleApps:(id)arg1 hiddenApps:(id)arg2 unknownApps:(id)arg3 internalProcesses:(id)arg4 wifiAssist:(id)arg5;
- (id)groupSpecifier;
- (id)headerSpecifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (bool)isCancelled;
- (bool)isEnabled;
- (bool)loading;
- (void)prefetchResourcesFor:(id)arg1;
- (void)reloadSpecifiers;
- (void)setAppCellularUsagePolicy:(id)arg1 forSpecifier:(id)arg2;
- (void)setAppGroupController:(id)arg1;
- (void)setAppSortComparator:(id /* block */)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setHeaderSpecifiers:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setSwitchesEnabled:(bool)arg1;
- (void)setWirelessManager:(id)arg1;
- (void)setWorkspace:(id)arg1;
- (id)specifierForApp:(id)arg1 enabled:(bool)arg2;
- (id)specifierForAppInNestedList:(id)arg1 app:(id)arg2;
- (id)specifierForSpecialCategory:(id)arg1 app:(id)arg2;
- (id)specifiers;
- (void)updateTotalUsage:(id)arg1;
- (id)wirelessManager;
- (id)workspace;

@end
