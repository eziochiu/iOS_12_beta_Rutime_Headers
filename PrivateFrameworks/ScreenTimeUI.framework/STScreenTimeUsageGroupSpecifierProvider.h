/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STScreenTimeUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    PSSpecifier * _longestSessionSpecifier;
    PSSpecifier * _screenTimeDuringDowntimeSpecifier;
    NSObject<STTimeAllowancesViewModelCoordinator> * _timeAllowancesCoordinator;
    PSSpecifier * _usageSummaryGraphSpecifier;
    PSSpecifier * _weeklyTotalSpecifier;
}

@property (nonatomic, retain) PSSpecifier *longestSessionSpecifier;
@property (nonatomic, retain) PSSpecifier *screenTimeDuringDowntimeSpecifier;
@property (nonatomic, retain) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property (nonatomic, retain) PSSpecifier *usageSummaryGraphSpecifier;
@property (nonatomic, retain) PSSpecifier *weeklyTotalSpecifier;

- (void).cxx_destruct;
- (id)getUsageInfo:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)longestSession:(id)arg1;
- (id)longestSessionSpecifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)screenTimeDuringDowntime:(id)arg1;
- (id)screenTimeDuringDowntimeSpecifier;
- (void)setLongestSessionSpecifier:(id)arg1;
- (void)setScreenTimeDuringDowntimeSpecifier:(id)arg1;
- (void)setTimeAllowancesCoordinator:(id)arg1;
- (void)setUsageSummaryGraphSpecifier:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setWeeklyTotalSpecifier:(id)arg1;
- (id)timeAllowancesCoordinator;
- (id)usageSummaryGraphSpecifier;
- (id)weeklyTotal:(id)arg1;
- (id)weeklyTotalSpecifier;

@end
