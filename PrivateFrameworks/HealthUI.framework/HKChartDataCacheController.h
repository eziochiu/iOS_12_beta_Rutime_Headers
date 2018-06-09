/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKChartDataCacheController : NSObject <HKSampleTypeUpdateControllerObserver> {
    HKActivitySummaryDataProvider * _activitySummaryDataProvider;
    NSMutableDictionary * _alternateCurrentValueDataProvidersByDisplayType;
    struct NSMutableDictionary { Class x1; } * _chartCachesByDisplayTypeIdentifier;
    NSArray * _chartCachesByTimeScopeAndDisplayTypeIdentifier;
    NSMutableDictionary * _currentValueDataProvidersByDisplayType;
    HKHealthStore * _healthStore;
    NSMutableDictionary * _secondaryValueDataProviders;
    HKUnitPreferenceController * _unitController;
    HKSampleTypeUpdateController * _updateController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;
@property (nonatomic, retain) HKSampleTypeUpdateController *updateController;

- (void).cxx_destruct;
- (id)_chartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2 chartCachesByDisplayTypeIdentifier:(struct NSMutableDictionary { Class x1; }*)arg3;
- (id)_chartCacheIdentifiersFromSamples:(id)arg1;
- (id)_chartCacheIdentifiersFromStartDate:(id)arg1 endDate:(id)arg2;
- (id)_createAlternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)_createCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)_generateChartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (void)_subscribeForUpdatesForDisplayType:(id)arg1;
- (id)_timeScopeBasedChartCacheForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (id)activitySummaryDataProviderWithHealthStore:(id)arg1 dateCache:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (id)allInteractiveChartsCaches;
- (id)alternateCurrentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)currentValueDataProviderForDisplayType:(id)arg1 healthStore:(id)arg2 updateController:(id)arg3 dateCache:(id)arg4;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 unitController:(id)arg2 updateController:(id)arg3;
- (id)interactiveChartsCacheForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (void)setHealthStore:(id)arg1;
- (void)setUnitController:(id)arg1;
- (void)setUpdateController:(id)arg1;
- (id)unitController;
- (id)updateController;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;

@end
