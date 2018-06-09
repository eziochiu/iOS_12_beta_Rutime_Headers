/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WAWeatherPlatterViewController : UIViewController <WFTemperatureUnitObserver> {
    WFURLComponents * _URLComponents;
    NSURL * _commitURL;
    NSMutableArray * _constraints;
    UIView * _dividerLineView;
    WATodayHeaderView * _headerView;
    UIStackView * _hourlyBeltView;
    NSArray * _hourlyForecastViews;
    WATodayModel * _model;
    long long  _status;
}

@property (nonatomic, retain) WFURLComponents *URLComponents;
@property (nonatomic, copy) NSURL *commitURL;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dividerLineView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WATodayHeaderView *headerView;
@property (nonatomic, retain) UIStackView *hourlyBeltView;
@property (nonatomic, retain) NSArray *hourlyForecastViews;
@property (nonatomic, retain) WATodayModel *model;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLComponents;
- (void)_buildModelForLocation:(id)arg1;
- (void)_contentSizeDidUpdate:(id)arg1;
- (void)_kickoffLoadingWithLocation:(id)arg1 orPerhapsALocationString:(id)arg2;
- (void)_updateStatus:(long long)arg1;
- (void)_updateViewContent;
- (id)commitURL;
- (id)constraints;
- (id)dividerLineView;
- (id)headerView;
- (id)hourlyBeltView;
- (id)hourlyForecastViews;
- (id)init;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocationString:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLComponents:(id)arg1;
- (id)model;
- (void)setCommitURL:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDividerLineView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHourlyBeltView:(id)arg1;
- (void)setHourlyForecastViews:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setURLComponents:(id)arg1;
- (long long)status;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;
- (void)viewDidLoad;

@end
