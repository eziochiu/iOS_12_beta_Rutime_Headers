/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDailyRoutineRelevanceProviderManager : RERelevanceProviderManager <REDailyRoutinePredictorDelegate> {
    bool  _inEveningRoutine;
    bool  _inMorningRoutine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;

- (void)_closeDataStoresAndObserveChanges;
- (bool)_isInRoutine:(unsigned long long)arg1 forDate:(id)arg2;
- (void)_openDataStoresAndObserveChanges;
- (void)_prepareForUpdate;
- (void)_updateRoutines;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)collectLoggableState:(id /* block */)arg1;
- (void)dailyRoutinePredictorDidBeginEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidBeginMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidEndEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidEndMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(id)arg1;

@end
