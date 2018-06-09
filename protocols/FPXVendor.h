/* made by EzioChiu.
 */

@protocol FPXVendor <FPXOperationService, FPXVendorObservation, FPXVendorMessaging>

@required

- (void)URLForItemID:(void *)arg1 creatingPlaceholderIfMissing:(void *)arg2 ignoreAlternateContentsURL:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: FPItemID *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *, void*
- (void)deleteSearchableItemsWithDomainIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didChangeItemID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dropIndexForDomain:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dumpIndexStateForDomain:(void *)arg1 toFileHandler:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)evictItemAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItemID *, NSError *, void*
- (void)fetchRemoteFileProviderEndpointForProtocolName:(void *)arg1 service:(void *)arg2 itemURL:(void *)arg3 needsItemURL:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 13: NSString *, FPFileProviderService *, NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSArray *, NSURL *, NSError *, void*
- (void)identifierForItemAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItemID *, NSError *, void*
- (void)indexOneBatchInDomain:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, void*
- (void)itemChangedAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)itemForURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)privilegedValuesForAttributes:(void *)arg1 forItemAtURL:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)providePlaceholderAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)removeTrashedItemsOlderThanDate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setAlternateContentsURL:(void *)arg1 onDocumentURL:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: FPSandboxingURLWrapper *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItemID *, NSError *, void*
- (void)startProvidingItemAtURL:(void *)arg1 readingOptions:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)trashItemAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)updateDomains:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
