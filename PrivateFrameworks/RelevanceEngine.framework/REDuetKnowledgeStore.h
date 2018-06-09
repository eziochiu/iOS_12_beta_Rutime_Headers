/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDuetKnowledgeStore : RESingleton {
    _DKKnowledgeStore * _knowledgeStore;
}

- (void).cxx_destruct;
- (id)_createDonationsFromDuetEvents:(id)arg1;
- (id)_createEventsFromDuetEvents:(id)arg1;
- (id)_createTimelineFromPredictionTimeline:(id)arg1;
- (id)_createTombstonesFromDuetEvents:(id)arg1;
- (id)_duetChargingEventStream;
- (id)_duetDonationsStreams;
- (void)_executeQuery:(id)arg1 responseQueue:(id)arg2 synchronously:(bool)arg3 withCompletion:(id /* block */)arg4;
- (bool)_isDonationsArray:(id)arg1;
- (bool)_isDuetEventsArray:(id)arg1;
- (bool)_isPredictionTimeline:(id)arg1;
- (bool)_isTombstonesArray:(id)arg1;
- (id)_queryForDonatedActionsAfterDate:(id)arg1 onStreams:(id)arg2 predicate:(id)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)executeQuerySynchronously:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)queryForAllDonatedActions;
- (id)queryForDeletedActionsAfterDate:(id)arg1;
- (id)queryForDonatedActionsAfterDate:(id)arg1;
- (id)queryForDuetEventWithIdentifier:(id)arg1;
- (id)queryForHistoricChargingEventsWithMinimumDuration:(double)arg1 inThePastDays:(unsigned long long)arg2;
- (id)queryForPredictedChargingEventsWithMinimumDuration:(double)arg1;
- (id)queryForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (id)queryForUnfilteredDonations;
- (id)sleepInterval;

@end
