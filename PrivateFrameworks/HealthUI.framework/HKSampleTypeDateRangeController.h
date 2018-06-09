/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSampleTypeDateRangeController : NSObject {
    _HKDateRangeQuery * _dateRangeQuery;
    struct NSDictionary { Class x1; } * _dateRangesBySampleType;
    HKHealthStore * _healthStore;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSDictionary *dateRangesBySampleType;

- (void).cxx_destruct;
- (void)_alertObserverDidUpdateDateRanges:(id)arg1;
- (void)_alertObserversDidUpdateDateRanges;
- (void)_beginUpdatesWithRetryAttemptCount:(long long)arg1;
- (void)_resultsDidUpdate:(struct NSDictionary { Class x1; }*)arg1;
- (void)_updateHandlerDidReceiveError:(id)arg1 retryCount:(long long)arg2;
- (void)addObserver:(id)arg1;
- (id)dateRangeForSampleType:(id)arg1;
- (struct NSDictionary { Class x1; }*)dateRangesBySampleType;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
