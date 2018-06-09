/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSettingsManager : NSObject {
    FIUIWorkoutDefaultMetricsProvider * _defaultMetricsProvider;
    NPSDomainAccessor * _domainAccessor;
    NSMutableArray * _enabledMetrics;
    NSMutableDictionary * _settingOverridesByMetric;
    NSMutableDictionary * _settingsByActivityType;
    NPSManager * _syncManager;
    FIUIWorkoutActivityType * _workoutActivityType;
}

@property (nonatomic, retain) NPSDomainAccessor *domainAccessor;
@property (nonatomic, retain) NPSManager *syncManager;

- (void).cxx_destruct;
- (bool)_enabledMetricsAreDefaultAfterPaceMigration:(id)arg1 workoutActivityType:(id)arg2;
- (bool)_hasUserMadeMetricChangesToWorkoutType:(id)arg1 enabledMetrics:(id)arg2 settingOverridesByMetric:(id)arg3 metricFormatVersion:(id)arg4;
- (void)_migratePaceViewSettingIfNeeded;
- (void)_readFromDomain;
- (void)_writeToDomain;
- (long long)disabledIndexForMetricType:(unsigned long long)arg1;
- (id)domainAccessor;
- (id)init;
- (id)initWithWorkoutActivityType:(id)arg1;
- (bool)isMetricEnabled:(unsigned long long)arg1;
- (void)moveMetricType:(unsigned long long)arg1 toEnabledIndex:(long long)arg2;
- (id)orderedDisabledMetrics;
- (id)orderedEnabledAndSupportedMetrics;
- (id)orderedEnabledMetrics;
- (id)orderedSupportedMetrics;
- (void)reloadMetrics;
- (void)setDomainAccessor:(id)arg1;
- (void)setEnabled:(bool)arg1 forMetricType:(unsigned long long)arg2 didChange:(bool*)arg3;
- (void)setSyncManager:(id)arg1;
- (id)supportedMetrics;
- (id)syncManager;

@end
