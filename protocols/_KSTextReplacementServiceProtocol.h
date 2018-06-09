/* made by EzioChiu.
 */

@protocol _KSTextReplacementServiceProtocol <NSObject>

@required

- (void)addEntries:(void *)arg1 removeEntries:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cancelPendingUpdatesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)queryTextReplacementEntriesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool, void*
- (void)queryTextReplacementsWithPredicate:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool, void*
- (void)removeAllEntries;
- (void)requestSyncWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end