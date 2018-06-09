/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WATodayHeaderView : UIView {
    UIImage * _conditionsImage;
    UIImageView * _conditionsImageView;
    UILabel * _conditionsLabel1;
    UILabel * _conditionsLabel2;
    NSString * _conditionsLine1;
    NSString * _conditionsLine2;
    UILabel * _locationLabel;
    NSString * _locationName;
    double  _pageBaselineOffset;
    double  _pageDegreeFontSize;
    double  _pageFontSize;
    NSString * _temperature;
    NSString * _temperatureHigh;
    UILabel * _temperatureHighLowLabel;
    UILabel * _temperatureLabel;
    NSString * _temperatureLow;
    UIVisualEffectView * _weatherInformationVisualEffectView;
}

@property (nonatomic, copy) UIImage *conditionsImage;
@property (nonatomic, retain) UIImageView *conditionsImageView;
@property (nonatomic, retain) UILabel *conditionsLabel1;
@property (nonatomic, retain) UILabel *conditionsLabel2;
@property (nonatomic, copy) NSString *conditionsLine1;
@property (nonatomic, copy) NSString *conditionsLine2;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic) double pageBaselineOffset;
@property (nonatomic) double pageDegreeFontSize;
@property (nonatomic) double pageFontSize;
@property (nonatomic, copy) NSString *temperature;
@property (nonatomic, copy) NSString *temperatureHigh;
@property (nonatomic, retain) UILabel *temperatureHighLowLabel;
@property (nonatomic, retain) UILabel *temperatureLabel;
@property (nonatomic, copy) NSString *temperatureLow;
@property (nonatomic, retain) UIVisualEffectView *weatherInformationVisualEffectView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateContent;
- (id)conditionsImage;
- (id)conditionsImageView;
- (id)conditionsLabel1;
- (id)conditionsLabel2;
- (id)conditionsLine1;
- (id)conditionsLine2;
- (id)init;
- (id)locationLabel;
- (id)locationName;
- (double)pageBaselineOffset;
- (double)pageDegreeFontSize;
- (double)pageFontSize;
- (void)setConditionsImage:(id)arg1;
- (void)setConditionsImageView:(id)arg1;
- (void)setConditionsLabel1:(id)arg1;
- (void)setConditionsLabel2:(id)arg1;
- (void)setConditionsLine1:(id)arg1;
- (void)setConditionsLine2:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setPageBaselineOffset:(double)arg1;
- (void)setPageDegreeFontSize:(double)arg1;
- (void)setPageFontSize:(double)arg1;
- (void)setTemperature:(id)arg1;
- (void)setTemperatureHigh:(id)arg1;
- (void)setTemperatureHighLowLabel:(id)arg1;
- (void)setTemperatureLabel:(id)arg1;
- (void)setTemperatureLow:(id)arg1;
- (void)setWeatherInformationVisualEffectView:(id)arg1;
- (id)temperature;
- (id)temperatureHigh;
- (id)temperatureHighLowLabel;
- (id)temperatureLabel;
- (id)temperatureLow;
- (id)weatherInformationVisualEffectView;

@end
