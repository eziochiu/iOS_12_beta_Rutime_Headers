/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STNotificationsPickupSummaryView : UIView {
    UIStackView * _stackView;
    STUsageReport * _usageReport;
}

@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) STUsageReport *usageReport;

- (void).cxx_destruct;
- (id)initWithUsageReport:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setUsageReport:(id)arg1;
- (id)stackView;
- (id)usageReport;

@end
