/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STScreenTimeUsageSummaryCell : PSTableCell {
    STUsageSummaryView * _usageSummaryView;
}

@property (nonatomic, retain) STUsageSummaryView *usageSummaryView;

- (void).cxx_destruct;
- (bool)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setUsageSummaryView:(id)arg1;
- (void)setValue:(id)arg1;
- (id)usageSummaryView;

@end
