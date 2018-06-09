/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {
    NSArray * _annotationLabels;
    UIStackView * _dateColumn;
    NSDateComponents * _dateComponents;
    UILabel * _lowerDateLabel;
    UIFont * _majorFont;
    HKUIMetricColors * _metricColors;
    UIFont * _minorFont;
    HKSelectedRangeFormatter * _selectedRangeFormatter;
    long long  _timeScope;
    UILabel * _upperDateLabel;
}

@property (nonatomic, retain) NSArray *annotationLabels;
@property (nonatomic, retain) UIStackView *dateColumn;
@property (retain) NSDateComponents *dateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *lowerDateLabel;
@property (nonatomic, retain) UIFont *majorFont;
@property (nonatomic, retain) HKUIMetricColors *metricColors;
@property (nonatomic, retain) UIFont *minorFont;
@property (nonatomic, readonly) HKSelectedRangeFormatter *selectedRangeFormatter;
@property (readonly) Class superclass;
@property (nonatomic) long long timeScope;
@property (nonatomic, retain) UILabel *upperDateLabel;

- (void).cxx_destruct;
- (id)annotationLabels;
- (id)columnViewForColumnAtIndex:(long long)arg1;
- (id)dateColumn;
- (id)dateComponents;
- (id)initWithSelectedRangeFormatter:(id)arg1 metricColors:(id)arg2;
- (id)lowerDateLabel;
- (id)majorFont;
- (id)metricColors;
- (id)minorFont;
- (long long)numberOfColumnsForAnnotationView:(id)arg1;
- (id)selectedRangeFormatter;
- (void)setAnnotationLabels:(id)arg1;
- (void)setDateColumn:(id)arg1;
- (void)setDateComponents:(id)arg1;
- (void)setLowerDateLabel:(id)arg1;
- (void)setMajorFont:(id)arg1;
- (void)setMetricColors:(id)arg1;
- (void)setMinorFont:(id)arg1;
- (void)setTimeScope:(long long)arg1;
- (void)setUpperDateLabel:(id)arg1;
- (long long)timeScope;
- (void)updateDateText;
- (void)updateWithSelectionContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)upperDateLabel;

@end
