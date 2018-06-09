/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartDataFormatter : NSObject {
    HKDisplayType * _displayType;
    UIFont * _majorFont;
    UIFont * _minorFont;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, retain) HKDisplayType *displayType;
@property (nonatomic, retain) UIFont *majorFont;
@property (nonatomic, retain) UIFont *minorFont;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)_formattedStringForValue:(id)arg1;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(bool)arg3;
- (id)_unitNameFromUnit:(id)arg1 number:(id)arg2;
- (id)displayType;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedUnitStringForChartData:(id)arg1;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)majorFont;
- (id)minorFont;
- (void)setDisplayType:(id)arg1;
- (void)setMajorFont:(id)arg1;
- (void)setMinorFont:(id)arg1;
- (void)setUnitController:(id)arg1;
- (id)unitController;

@end
