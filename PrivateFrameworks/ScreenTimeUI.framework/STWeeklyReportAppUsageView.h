/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STWeeklyReportAppUsageView : UIView {
    UIStackView * _appImageStackView;
    STUsageReport * _report;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIStackView *appImageStackView;
@property (nonatomic, retain) STUsageReport *report;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)appImageStackView;
- (id)initWithUsageReport:(id)arg1;
- (id)report;
- (void)setAppImageStackView:(id)arg1;
- (void)setReport:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
