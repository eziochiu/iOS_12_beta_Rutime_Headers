/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUIInteractiveChartDateLabelSlider : UIView {
    bool  _blankDateLabelSlider;
    HKDateIntervalCache * _dateIntervalCache;
    NSMutableArray * _dateLabels;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _dateRangeInsets;
    long long  _granularity;
    UIColor * _labelColor;
    UIFont * _labelFont;
    NSDate * _leftDate;
    bool  _needsLabelUpdate;
    NSDate * _rightDate;
    long long  _textAlignment;
}

@property (nonatomic) bool blankDateLabelSlider;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } dateRangeInsets;
@property (nonatomic) long long granularity;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic, readonly) NSDate *leftDate;
@property (nonatomic, readonly) NSDate *rightDate;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (unsigned long long)_calendarUnitForGranularity:(long long)arg1;
- (id)_dateSpacingForGranularity:(long long)arg1;
- (long long)_formatTemplateForGranularity:(long long)arg1;
- (void)_layoutDateLabelsWithOffsetMultiple:(double)arg1;
- (void)_setDate:(id)arg1 forLabel:(id)arg2 atIndex:(long long)arg3;
- (void)_setNeedsLabelUpdate;
- (void)_updateLabels;
- (bool)blankDateLabelSlider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })dateRangeInsets;
- (long long)granularity;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelColor;
- (id)labelFont;
- (void)layoutSubviews;
- (id)leftDate;
- (id)rightDate;
- (void)setBlankDateLabelSlider:(bool)arg1;
- (void)setDateRange:(id)arg1;
- (void)setDateRangeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setGranularity:(long long)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (long long)textAlignment;

@end
