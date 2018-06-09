/* made by EzioChiu.
 */

@protocol FPXOperationService

@required

- (void)setFavoriteRanks:(void *)arg1 forItemIdentifiers:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)setLastUsedDate:(void *)arg1 forItemIDs:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)setTagsData:(void *)arg1 forItemIdentifiers:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)startOperation:(void *)arg1 toCreateFolderWithName:(void *)arg2 underParent:(void *)arg3 bounceOnCollision:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: <FPOperationClient> *, NSString *, FPItemID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)startOperation:(void *)arg1 toDeleteItems:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: <FPOperationClient> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startOperation:(void *)arg1 toFetchDefaultContainerForBundleIdentifier:(void *)arg2 englishName:(void *)arg3 inDomainIdentifier:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: <FPOperationClient> *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)startOperation:(void *)arg1 toFetchItemID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: <FPOperationClient> *, FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)startOperation:(void *)arg1 toFetchParentForItem:(void *)arg2 recursively:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: <FPOperationClient> *, FPItemID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)startOperation:(void *)arg1 toFetchThumbnailsForItemIdentifiers:(void *)arg2 size:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: <FPOperationClient> *, NSArray *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startOperation:(void *)arg1 toImportDocumentsAtURLs:(void *)arg2 withSandboxExtensions:(void *)arg3 lastUsedDates:(void *)arg4 intoFolderWithIdentifier:(void *)arg5 bounceOnCollision:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 13: <FPOperationClient> *, NSArray *, NSArray *, NSArray *, FPItemID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)startOperation:(void *)arg1 toRenameItem:(void *)arg2 toNewName:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: <FPOperationClient> *, FPItemID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)startOperation:(void *)arg1 toReparentItems:(void *)arg2 underParent:(void *)arg3 shouldBounce:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: <FPOperationClient> *, NSArray *, FPItemID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)trashItemsWithIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)untrashItemsWithIdentifiers:(void *)arg1 toDirectoryWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
