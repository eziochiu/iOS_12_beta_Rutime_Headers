/* made by EzioChiu.
 */

@protocol CADReminderInterface

@required

- (void)CADDatabaseGetCountOfRemindersWithPredicate:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: EKReminderPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, void*
- (void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetProperties:(void *)arg1 forReminders:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseSetDefaultCalendarForNewReminders:(CADObjectID *)arg1;
- (void)CADScheduledTaskCacheGetDaysAndTaskCounts:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*

@end
