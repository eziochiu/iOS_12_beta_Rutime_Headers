/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STOverallUsageSummaryCell : PSTableCell {
    STCandyBarView * _candyBarView;
    STUsageTotalDeltaView * _deltaView;
    STNoUsageDataView * _noUsageDataView;
    UILabel * _screenTimeLabel;
    STTopUsageItemsView * _topItemsView;
    STUsageReport * _usageInfo;
}

@property (nonatomic, retain) STCandyBarView *candyBarView;
@property (nonatomic, retain) STUsageTotalDeltaView *deltaView;
@property (nonatomic, retain) STNoUsageDataView *noUsageDataView;
@property (nonatomic, retain) UILabel *screenTimeLabel;
@property (nonatomic, retain) STTopUsageItemsView *topItemsView;
@property (nonatomic, retain) STUsageReport *usageInfo;

- (void).cxx_destruct;
- (bool)canReload;
- (id)candyBarView;
- (id)deltaView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)noUsageDataView;
- (void)refreshWithUsageReport:(id)arg1;
- (id)screenTimeLabel;
- (void)setCandyBarView:(id)arg1;
- (void)setDeltaView:(id)arg1;
- (void)setNoUsageDataView:(id)arg1;
- (void)setScreenTimeLabel:(id)arg1;
- (void)setTopItemsView:(id)arg1;
- (void)setUsageInfo:(id)arg1;
- (void)setValue:(id)arg1;
- (void)stOverallUsageSummaryCellCommonInit;
- (id)topItemsView;
- (id)usageInfo;

@end
