/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSampleTypeUpdateController : NSObject {
    HKHealthStore * _healthStore;
    NSMutableDictionary * _observersByType;
    NSMutableDictionary * _outstandingQueriesByType;
    NSMutableDictionary * _queryStatesByType;
}

- (void).cxx_destruct;
- (id)_allObservedTypes;
- (void)_callObservers:(id)arg1 withType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)_createQueryForType:(id)arg1 retryCount:(long long)arg2;
- (void)_handleQueryCallbackForType:(id)arg1 samplesAdded:(id)arg2 objectsDeleted:(id)arg3 error:(id)arg4 retryCount:(long long)arg5;
- (void)_handleQueryErrorForType:(id)arg1 retryCount:(long long)arg2;
- (void)_handleQuerySuccessForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3;
- (id)_observersForType:(id)arg1;
- (long long)_queryStateForType:(id)arg1;
- (void)_removeQueryForType:(id)arg1;
- (void)_setQueryState:(long long)arg1 forType:(id)arg2;
- (void)_transitionToQueryFailureForType:(id)arg1;
- (bool)_typeRequiresNewQuery:(id)arg1;
- (void)addObserver:(id)arg1 forType:(id)arg2;
- (id)initWithHealthStore:(id)arg1;
- (void)removeObserver:(id)arg1 forType:(id)arg2;

@end