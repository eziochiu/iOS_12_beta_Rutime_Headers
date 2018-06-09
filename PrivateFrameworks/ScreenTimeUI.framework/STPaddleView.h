/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STPaddleView : UIView {
    UIView * _backgroundView;
    UILabel * _dateTimeLabel;
    UILabel * _dayLabel;
    NSDate * _startDate;
    unsigned long long  _timePeriod;
    NSArray * _usageItems;
    UILabel * _usageLabel;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UILabel *dateTimeLabel;
@property (nonatomic, readonly) UILabel *dayLabel;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) unsigned long long timePeriod;
@property (nonatomic, copy) NSArray *usageItems;
@property (nonatomic, readonly) UILabel *usageLabel;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)dateTimeLabel;
- (id)dayLabel;
- (id)init;
- (void)setStartDate:(id)arg1;
- (void)setTimePeriod:(unsigned long long)arg1;
- (void)setUsageItems:(id)arg1;
- (void)setUsageItems:(id)arg1 timePeriod:(unsigned long long)arg2 startDate:(id)arg3;
- (id)startDate;
- (unsigned long long)timePeriod;
- (id)usageItems;
- (id)usageLabel;

@end
