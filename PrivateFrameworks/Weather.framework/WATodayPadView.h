/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WATodayPadView : UIView {
    UIImageView * _conditionsImageView;
    WALegibilityLabel * _conditionsLabel;
    NSArray * _constraints;
    _UILegibilitySettings * _legibilitySettings;
    WALegibilityLabel * _locationLabel;
    WATodayPadViewStyle * _style;
    WALegibilityLabel * _temperatureLabel;
}

@property (nonatomic, copy) UIImage *conditionsImage;
@property (nonatomic, retain) UIImageView *conditionsImageView;
@property (nonatomic, retain) WALegibilityLabel *conditionsLabel;
@property (nonatomic, copy) NSString *conditionsLine;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) WALegibilityLabel *locationLabel;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic, copy) WATodayPadViewStyle *style;
@property (nonatomic, copy) NSString *temperature;
@property (nonatomic, retain) WALegibilityLabel *temperatureLabel;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_setupConstraintsForViews;
- (id)conditionsImage;
- (id)conditionsImageView;
- (id)conditionsLabel;
- (id)conditionsLine;
- (id)constraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)legibilitySettings;
- (id)locationLabel;
- (id)locationName;
- (void)setConditionsImage:(id)arg1;
- (void)setConditionsImageView:(id)arg1;
- (void)setConditionsLabel:(id)arg1;
- (void)setConditionsLine:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTemperature:(id)arg1;
- (void)setTemperatureLabel:(id)arg1;
- (void)sizeToFit;
- (id)style;
- (id)temperature;
- (id)temperatureLabel;
- (void)updateForChangedSettings:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
