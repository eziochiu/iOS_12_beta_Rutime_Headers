/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDailyAverageView : UIView {
    UILabel * _dailyAverageTitleLabel;
    STUsageSummaryView * _summaryView;
}

@property (nonatomic, retain) UILabel *dailyAverageTitleLabel;
@property (nonatomic, retain) STUsageSummaryView *summaryView;

- (void).cxx_destruct;
- (id)dailyAverageTitleLabel;
- (id)initWithUsageReport:(id)arg1;
- (void)setDailyAverageTitleLabel:(id)arg1;
- (void)setSummaryView:(id)arg1;
- (id)summaryView;

@end
