/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WALockscreenWidgetViewController : UIViewController <WATodayModelObserver> {
    WAForecastModel * _currentForecastModel;
    <WAWidgetDelegate> * _delegate;
    bool  _locationServicesActive;
    WATodayModel * _todayModel;
    WATodayPadView * _todayView;
    double  _updateInterval;
    NSDate * _updateLastCompletionDate;
    NSTimer * _updateTimer;
}

@property (nonatomic, copy) WAForecastModel *currentForecastModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WAWidgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool locationServicesActive;
@property (readonly) Class superclass;
@property (nonatomic, retain) WATodayModel *todayModel;
@property (nonatomic, retain) WATodayPadView *todayView;
@property (nonatomic, readonly) bool todayViewIsVisible;
@property (nonatomic) double updateInterval;
@property (nonatomic, copy) NSDate *updateLastCompletionDate;
@property (nonatomic, retain) NSTimer *updateTimer;

+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (id)_conditionsImage;
- (id)_conditionsLine;
- (void)_delegateDidUpdate;
- (bool)_delegateShouldUpdateForecast;
- (void)_delegateUpdateDidFailWithError:(id)arg1;
- (void)_delegateWillUpdate;
- (id)_locationName;
- (void)_scheduleNewTimer;
- (void)_setTodayViewHidden:(bool)arg1;
- (void)_setupWeatherModel;
- (void)_teardownTimer;
- (void)_teardownWeatherModel;
- (id)_temperature;
- (void)_updateTimerFired:(id)arg1;
- (void)_updateTodayView;
- (void)_updateWithReason:(id)arg1;
- (id)currentForecastModel;
- (id)delegate;
- (void)getLocationServicesAuthorizationStatus:(id /* block */)arg1;
- (id)init;
- (bool)locationServicesActive;
- (void)setCurrentForecastModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationServicesActive:(bool)arg1;
- (void)setTodayModel:(id)arg1;
- (void)setTodayView:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)setUpdateLastCompletionDate:(id)arg1;
- (void)setUpdateTimer:(id)arg1;
- (bool)shouldFakeWeather;
- (id)todayModel;
- (void)todayModel:(id)arg1 forecastWasUpdated:(id)arg2;
- (void)todayModelWantsUpdate:(id)arg1;
- (id)todayView;
- (bool)todayViewIsVisible;
- (void)updateForChangedSettings:(id)arg1;
- (double)updateInterval;
- (id)updateLastCompletionDate;
- (id)updateTimer;
- (void)updateWeather;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
