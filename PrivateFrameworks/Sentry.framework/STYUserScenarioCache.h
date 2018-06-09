/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
 */

@interface STYUserScenarioCache : NSObject {
    NSDictionary * _animationThresholdsForWhitelistedCategories;
    NSDictionary * _animationThresholdsForWhitelistedNames;
    NSDictionary * _animationThresholdsForWhitelistedSubsystems;
    NSError * _badConfigError;
    NSDictionary * _bundleIdForAppName;
    NSError * _bundledIdLookupFailedrror;
    NSString * _hwModel;
    NSMutableDictionary * _lifecycleScenarios;
    NSDictionary * _responsivenessThresholdsForWhitelistedCategories;
    NSDictionary * _responsivenessThresholdsForWhitelistedNames;
    NSDictionary * _responsivenessThresholdsForWhitelistedSubsystems;
    NSMutableDictionary * _scenarioObjects;
}

@property (retain) NSDictionary *animationThresholdsForWhitelistedCategories;
@property (retain) NSDictionary *animationThresholdsForWhitelistedNames;
@property (retain) NSDictionary *animationThresholdsForWhitelistedSubsystems;
@property (retain) NSError *badConfigError;
@property (retain) NSDictionary *bundleIdForAppName;
@property (retain) NSError *bundledIdLookupFailedrror;
@property (retain) NSString *hwModel;
@property (retain) NSMutableDictionary *lifecycleScenarios;
@property (retain) NSDictionary *responsivenessThresholdsForWhitelistedCategories;
@property (retain) NSDictionary *responsivenessThresholdsForWhitelistedNames;
@property (retain) NSDictionary *responsivenessThresholdsForWhitelistedSubsystems;
@property (retain) NSMutableDictionary *scenarioObjects;

+ (id)internalResourceBundle;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)animationThresholdsForWhitelistedCategories;
- (id)animationThresholdsForWhitelistedNames;
- (id)animationThresholdsForWhitelistedSubsystems;
- (id)appNameFromBundleId:(id)arg1;
- (id)badConfigError;
- (id)bundleIdForAppName;
- (id)bundleIdForProcessName:(id)arg1;
- (id)bundledIdLookupFailedrror;
- (float)framerateGoalsForSignpostInterval:(id)arg1;
- (id)hwModel;
- (id)initWithPlatform:(id)arg1;
- (bool)isAnimationScenarioWhitelisted:(id)arg1 error:(id*)arg2;
- (bool)isResponsivenessScenarioWhitelisted:(id)arg1 error:(id*)arg2;
- (bool)kpiIsLatency:(id)arg1;
- (float)latencyGoalsForSignpostInterval:(id)arg1;
- (id)lifecycleScenarios;
- (id)loadWhitelist:(id)arg1 platform:(id)arg2 bundles:(id)arg3;
- (id)processBundleIdForSignpostInterval:(id)arg1;
- (bool)processWhitelisted:(id)arg1 error:(id*)arg2;
- (id)responsivenessThresholdsForWhitelistedCategories;
- (id)responsivenessThresholdsForWhitelistedNames;
- (id)responsivenessThresholdsForWhitelistedSubsystems;
- (id)scenarioFromSignpostInterval:(id)arg1 error:(id*)arg2;
- (id)scenarioGroupForSignpostInterval:(id)arg1;
- (id)scenarioIdForSignpostInterval:(id)arg1;
- (id)scenarioObjects;
- (bool)scenarioWhitelisted:(id)arg1 error:(id*)arg2;
- (void)setAnimationThresholdsForWhitelistedCategories:(id)arg1;
- (void)setAnimationThresholdsForWhitelistedNames:(id)arg1;
- (void)setAnimationThresholdsForWhitelistedSubsystems:(id)arg1;
- (void)setBadConfigError:(id)arg1;
- (void)setBundleIdForAppName:(id)arg1;
- (void)setBundledIdLookupFailedrror:(id)arg1;
- (void)setHwModel:(id)arg1;
- (void)setLifecycleScenarios:(id)arg1;
- (void)setResponsivenessThresholdsForWhitelistedCategories:(id)arg1;
- (void)setResponsivenessThresholdsForWhitelistedNames:(id)arg1;
- (void)setResponsivenessThresholdsForWhitelistedSubsystems:(id)arg1;
- (void)setScenarioObjects:(id)arg1;
- (void)setupBundleIdWhitelists:(id)arg1 bundles:(id)arg2;
- (bool)setupWhitelistedAnimationScenarios:(id)arg1 bundles:(id)arg2;
- (bool)setupWhitelistedResponsivenessScenarios:(id)arg1 bundles:(id)arg2;
- (bool)setupWhitelistedScenarios:(id)arg1 bundles:(id)arg2;

@end
