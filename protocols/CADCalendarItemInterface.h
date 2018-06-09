/* made by EzioChiu.
 */

@protocol CADCalendarItemInterface

@required

- (void)CADDatabaseAddContactWithIdentifier:(void *)arg1 forCalendarItem:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSString *, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseCountEntitiesOfType:(void *)arg1 withContactIdentifier:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, void*
- (void)CADDatabaseExportCalendarItemAsICS:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(void *)arg1 entityType:(void *)arg2 fetchIdentifier:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSPredicate *, int, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseFetchEntitiesOfType:(void *)arg1 withContactIdentifier:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, int, void*
- (void)CADDatabaseGetCalendarItemWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(void *)arg1 inCalendar:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseRemoveContactIdentifier:(void *)arg1 forCalendarItem:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSString *, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
