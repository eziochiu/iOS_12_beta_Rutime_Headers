/* made by EzioChiu.
 */

@protocol CADSyncInterface

@required

- (void)CADDatabaseGetDeletableCalendars:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseGetDeletableSources:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*

@end