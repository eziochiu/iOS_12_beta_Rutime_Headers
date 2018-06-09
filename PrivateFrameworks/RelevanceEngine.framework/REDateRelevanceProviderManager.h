/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDateRelevanceProviderManager : RERelevanceProviderManager {
    NSDate * _lastDateUpdate;
    NSDateInterval * _todayInterval;
}

+ (id)_dependencyClasses;
+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_supportsHistoricProviders;

- (void).cxx_destruct;
- (void)_addedProvider:(id)arg1;
- (void)_closeDataStoresAndObserveChanges;
- (void)_handleSignificantTimeChange;
- (bool)_isHistoricProvider:(id)arg1;
- (void)_openDataStoresAndObserveChanges;
- (void)_prepareForUpdate;
- (void)_scheduleUpdateForDate:(id)arg1;
- (void)_scheduleUpdatesForDateProvider:(id)arg1;
- (id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)collectLoggableState:(id /* block */)arg1;

@end
