/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WAGreetingView : UIView {
    UIImageView * _conditionImageView;
    NSMutableArray * _constraints;
    bool  _isViewCreated;
    UIColor * _labelColor;
    UILabel * _natualLanguageDescriptionLabel;
    UILabel * _temperatureLabel;
    WATodayAutoupdatingLocationModel * _todayModel;
}

@property (nonatomic, retain) UIImageView *conditionImageView;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic) bool isViewCreated;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, retain) UILabel *natualLanguageDescriptionLabel;
@property (nonatomic, retain) UILabel *temperatureLabel;
@property (nonatomic, retain) WATodayAutoupdatingLocationModel *todayModel;

- (void).cxx_destruct;
- (id)_conditionsImage;
- (id)_temperature;
- (id)conditionImageView;
- (id)constraints;
- (void)createViews;
- (void)dealloc;
- (id)init;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isViewCreated;
- (id)labelColor;
- (id)natualLanguageDescriptionLabel;
- (void)setConditionImageView:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setIsViewCreated:(bool)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setNatualLanguageDescriptionLabel:(id)arg1;
- (void)setTemperatureLabel:(id)arg1;
- (void)setTodayModel:(id)arg1;
- (void)setupConstraints;
- (void)startService;
- (id)temperatureLabel;
- (id)todayModel;
- (void)updateConstraints;
- (void)updateLabelColors;
- (void)updateView;

@end
