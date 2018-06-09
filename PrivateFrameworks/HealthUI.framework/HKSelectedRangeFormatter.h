/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSelectedRangeFormatter : NSObject {
    UIFont * _majorFont;
    UIFont * _minorFont;
    HKUnitPreferenceController * _unitPreferenceController;
}

@property (nonatomic, retain) UIFont *majorFont;
@property (nonatomic, retain) UIFont *minorFont;
@property (nonatomic, retain) HKUnitPreferenceController *unitPreferenceController;

- (void).cxx_destruct;
- (id)_formatterForDisplayType:(id)arg1 timeScope:(long long)arg2 majorFont:(id)arg3 minorFont:(id)arg4;
- (id)_statFormatterItemOptionsForDisplayType:(id)arg1 quantityType:(id)arg2 timeScope:(long long)arg3 context:(long long)arg4;
- (id)_statFormatterItemOptionsForTimePeriodDisplayType:(id)arg1 timeScope:(long long)arg2 context:(long long)arg3;
- (id)initWithUnitPreferenceController:(id)arg1;
- (id)majorFont;
- (id)minorFont;
- (id)selectedRangeDataWithCoordinateInfo:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6;
- (id)selectedRangeDataWithCoordinates:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6;
- (id)selectedRangeDataWithGraphView:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6;
- (void)setMajorFont:(id)arg1;
- (void)setMinorFont:(id)arg1;
- (void)setUnitPreferenceController:(id)arg1;
- (id)unitPreferenceController;

@end
