/* made by EzioChiu.
 */

@protocol CADEventInterface

@required

- (void)CADDatabaseActOnSuggestedEvent:(void *)arg1 action:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CADObjectID *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)CADDatabaseCanModifySuggestedEventCalendar:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)CADDatabaseGetBirthdayContactIdentifierForEvent:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSString *, void*
- (void)CADDatabaseGetCountOfNotifiableEvents:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, void*
- (void)CADDatabaseGetCountOfUnacknowledgedEvents:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, void*
- (void)CADDatabaseGetDefaultCalendarForNewEventsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetDefaultLocalCalendarWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:(void *)arg1 timeZone:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSTimeZone *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDate *, void*
- (void)CADDatabaseGetEventWithEventIdentifier:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetEventWithUniqueID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(CADObjectID *)arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(bool)arg1;
- (void)CADDatabaseShouldWhitelistOrganizerEmailFromJunkChecks:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)CADDatabaseShouldWhitelistOrganizerPhoneNumberFromJunkChecks:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1;
- (void)CADOccurrenceCacheDoEvents:(void *)arg1 haveOccurrencesAfterDate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(void *)arg1 nearestDate:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: int, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDate *, void*
- (void)CADOccurrenceCacheGetOccurrenceForCalendars:(void *)arg1 onDay:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(void *)arg1 inCalendars:(void *)arg2 responseToken:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSArray *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADOccurrenceCacheSearchWithTerm:(void *)arg1 inCalendars:(void *)arg2 responseToken:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSArray *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADOccurrencesExistInRangeForEvent:(void *)arg1 startDate:(void *)arg2 endDate:(void *)arg3 mustStartInInterval:(void *)arg4 timezone:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: CADObjectID *, NSDate *, NSDate *, bool, NSTimeZone *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*

@end
