/* made by EzioChiu.
 */

@protocol NSFileProviderXPCInterface <NSFileCoordinationDebugInfoXPCInteface>

@required

- (oneway void)cancelProvidingItemAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2;
- (void)checkInProviderWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)observeEndOfWriteAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;
- (oneway void)observePresentationChangeOfKind:(NSString *)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 observedUbiquityAttributes:(NSSet *)arg4 url:(NSURL *)arg5 newURL:(NSURL *)arg6;
- (void)provideItemAtURL:(void *)arg1 forClaimWithID:(void *)arg2 madeByClientWithProcessIdentifier:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSURL *, id, int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)providePhysicalItemForURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*

@end
