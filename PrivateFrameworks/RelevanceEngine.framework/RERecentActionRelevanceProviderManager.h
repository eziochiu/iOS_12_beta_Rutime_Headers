/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager {
    NSMutableDictionary * _relevanceProviderMap;
}

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_supportsHistoricProviders;

- (void).cxx_destruct;
- (void)_addedProvider:(id)arg1;
- (void)_closeDataStoresAndObserveChanges;
- (void)_handleActionPerformedNotifiction:(id)arg1;
- (void)_handleSignificantTimeChange;
- (bool)_isHistoricProvider:(id)arg1;
- (void)_openDataStoresAndObserveChanges;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;
- (void)_removeProvider:(id)arg1;
- (void)_scheduleUpdatesForActionProvider:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
