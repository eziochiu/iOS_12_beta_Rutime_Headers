/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGEKCalendarAdapter : NSObject <SGJournalCalendarObserver> {
    EKEventStore * _externalEKStore;
    SGSqlEntityStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SGSqlEntityStore *store;
@property (readonly) Class superclass;

+ (id)defaultEKStore;

- (void).cxx_destruct;
- (void)_addEKEventToCalendar:(id)arg1 storageEvent:(id)arg2 ekStore:(id)arg3 commit:(bool)arg4;
- (bool)_cancelEKEvent:(id)arg1 ekStore:(id)arg2 error:(id*)arg3;
- (id)_eventsAssociatedWithStorageEvent:(id)arg1 store:(id)arg2;
- (bool)_isEKEventFromNLEventsCalendar:(id)arg1 ekStore:(id)arg2;
- (bool)_isEKEventFromSuggestedCalendar:(id)arg1 ekStore:(id)arg2;
- (void)_removeEKEvent:(id)arg1 store:(id)arg2 commit:(bool)arg3;
- (void)_removeEvent:(id)arg1 commit:(bool)arg2;
- (bool)_updateEKEvent:(id)arg1 withEvent:(id)arg2 ekStore:(id)arg3 error:(id*)arg4;
- (void)_updateEvent:(id)arg1 withValuesFrom:(id)arg2 ekStore:(id)arg3;
- (void)addEvent:(id)arg1;
- (void)addEvent:(id)arg1 commit:(bool)arg2;
- (void)addEvents:(id)arg1;
- (void)calendarDeleted;
- (void)cancelEvent:(id)arg1;
- (void)cancelEvent:(id)arg1 commit:(bool)arg2;
- (void)cancelEvents:(id)arg1;
- (void)confirmEventFromOtherDevice:(id)arg1;
- (void)confirmEventFromThisDevice:(id)arg1;
- (id)ekStore;
- (id)initWithSGSqlEntityStore:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1 andEKStore:(id)arg2;
- (void)orphanEvent:(id)arg1;
- (void)rejectEventFromOtherDevice:(id)arg1;
- (void)rejectEventFromThisDevice:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
