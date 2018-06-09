/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPLocalEventStore : NSObject {
    bool  _accessGranted;
    _PASNotificationToken * _assetUpdateNotificationToken;
    EKCalendarVisibilityManager * _calendarVisibilityManager;
    NSArray * _calendars;
    PPContactScorer * _contactScorer;
    PPQuickTypeEventCache * _eventCache;
    NSObject<OS_dispatch_queue> * _eventLoadingQueue;
    EKEventStore * _store;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)_filterOutAllDayAndMultiDayEvents:(id)arg1;
- (id)_loadCalendars;
- (id)_makeEventCache;
- (id)_predicateForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_preloadEvents;
- (id)_recordForDeletedEKEvent:(id)arg1;
- (id)_recordForEKEvent:(id)arg1;
- (void)_registerForNotifications;
- (double)_scoreForSecondsRelativeToNow:(double)arg1;
- (void)_setupCalendarVisibilityManager;
- (void)askForEKAccess;
- (id)calendars;
- (void)clearCaches;
- (void)dealloc;
- (void)discoveredEvents:(id)arg1 store:(id)arg2;
- (id)eventHighlightForEKEvent:(id)arg1 usingScorer:(id)arg2 date:(id)arg3 rankingOptions:(int)arg4;
- (id)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3;
- (id)eventMetaDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)eventNameRecordsForClient:(id)arg1 error:(id*)arg2;
- (id)eventWithExternalID:(id)arg1;
- (id)eventsFromDate:(id)arg1 toDate:(id)arg2;
- (id)eventsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)evictEventsFromCache:(id)arg1;
- (id)getWeakStore;
- (id)init;
- (bool)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id*)arg3;

@end
