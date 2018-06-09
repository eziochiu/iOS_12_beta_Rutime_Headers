/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDevicePickupsSummaryCell : PSTableCell {
    UILabel * _averagePickupsLabel;
    UILabel * _averagePickupsTextLabel;
    STUsageGraphView * _graphView;
    UILabel * _totalPickupsLabel;
}

@property (nonatomic, retain) UILabel *averagePickupsLabel;
@property (nonatomic, retain) UILabel *averagePickupsTextLabel;
@property (nonatomic, retain) STUsageGraphView *graphView;
@property (nonatomic, retain) UILabel *totalPickupsLabel;

- (void).cxx_destruct;
- (id)averagePickupsLabel;
- (id)averagePickupsTextLabel;
- (bool)canReload;
- (id)graphView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setAveragePickupsLabel:(id)arg1;
- (void)setAveragePickupsTextLabel:(id)arg1;
- (void)setGraphView:(id)arg1;
- (void)setTotalPickupsLabel:(id)arg1;
- (void)setValue:(id)arg1;
- (id)totalPickupsLabel;

@end
