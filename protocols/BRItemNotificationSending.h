/* made by EzioChiu.
 */

@protocol BRItemNotificationSending <BRCancellable>

@required

- (void)boostPriority:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)watchItemAtURL:(void *)arg1 options:(void *)arg2 gatherReply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)watchItemsNamesPrefixedBy:(void *)arg1 inScopes:(void *)arg2 appLibraryIDs:(void *)arg3 gatherReply:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned short, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)watchScopes:(void *)arg1 appLibraryIDs:(void *)arg2 gatherReply:(void *)arg3; // needs 3 arg types, found 8: unsigned short, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)watchScopes:(void *)arg1 gatherReply:(void *)arg2; // needs 2 arg types, found 7: unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
