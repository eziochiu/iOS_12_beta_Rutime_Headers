/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageSummaryView : UIView {
    STUsageTotalDeltaView * _deltaView;
    STUsageGraphView * _graphView;
    UILabel * _screenTimeLabel;
    STTopUsageItemsView * _topItemsView;
    STUsageReport * _usageReport;
}

@property (nonatomic, retain) STUsageTotalDeltaView *deltaView;
@property (nonatomic, retain) STUsageGraphView *graphView;
@property (nonatomic, retain) UILabel *screenTimeLabel;
@property (nonatomic, retain) STTopUsageItemsView *topItemsView;
@property (nonatomic, retain) STUsageReport *usageReport;

- (void).cxx_destruct;
- (id)deltaView;
- (id)graphView;
- (id)init;
- (id)screenTimeLabel;
- (void)setDeltaView:(id)arg1;
- (void)setGraphView:(id)arg1;
- (void)setScreenTimeLabel:(id)arg1;
- (void)setTopItemsView:(id)arg1;
- (void)setUsageReport:(id)arg1;
- (id)topItemsView;
- (id)usageReport;

@end
