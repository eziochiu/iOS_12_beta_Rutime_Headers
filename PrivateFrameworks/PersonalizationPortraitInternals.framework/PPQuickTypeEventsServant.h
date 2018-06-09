/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPQuickTypeEventsServant : NSObject <PPQuickTypeServantProtocol> {
    PPContactScorer * _contactScorer;
    PPLocalEventStore * _localEventStore;
}

- (void).cxx_destruct;
- (bool)_areAllPeopleOfInterest:(id)arg1 inAttendeeList:(id)arg2;
- (id)_busyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_dateRangeForQuery:(id)arg1;
- (bool)_eventIsHappening:(id)arg1;
- (id)_filterEvents:(id)arg1 time:(unsigned char)arg2 people:(id)arg3 busy:(bool)arg4 fields:(unsigned int)arg5 explanationSet:(id)arg6;
- (id)_freeEventsAndGapsFromEvents:(id)arg1 explanationSet:(id)arg2;
- (id)_fuzzyNextEvents:(id)arg1 minimumCount:(unsigned long long)arg2;
- (bool)_isFreeTime:(id)arg1;
- (id)_labelForEvent:(id)arg1 value:(id)arg2 fields:(unsigned int)arg3 formatter:(id)arg4;
- (id)_lastBusyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3;
- (id)_lastFreeEventsFromEvents:(id)arg1 explanationSet:(id)arg2;
- (id)_nextBusyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3;
- (id)_nextFreeEventsFromEvents:(id)arg1 explanationSet:(id)arg2;
- (id)_quickTypeItemsForEvent:(id)arg1 fields:(unsigned int)arg2 formatter:(id)arg3;
- (id)_quickTypeItemsForEvents:(id)arg1 fields:(unsigned int)arg2 limit:(unsigned long long)arg3 formatter:(id)arg4 explanationSet:(id)arg5;
- (bool)_shouldTreatAsUnscheduledFreeTime:(id)arg1;
- (id)_unscheduledFreeTimeEventFrom:(id)arg1 to:(id)arg2;
- (bool)_userDidOrganizeEvent:(id)arg1;
- (bool)_userIsInvitedToEvent:(id)arg1;
- (long long)_userStatusForEvent:(id)arg1;
- (id)_valuesForPrediction:(id)arg1 fields:(unsigned int)arg2 formatter:(id)arg3;
- (void)_warmUpFormatters;
- (id)init;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (void)setContactScorer:(id)arg1;

@end
