/* made by EzioChiu.
 */

@protocol NSFileAccessArbiterXPCInterface <NSFileAccessArbiter>

@required

- (void)addPresenter:(id <NSFilePresenterXPCInterface>)arg1 withID:(id)arg2 fileURL:(NSURL *)arg3 lastPresentedItemEventIdentifier:(NSNumber *)arg4 ubiquityAttributes:(NSSet *)arg5 options:(unsigned long long)arg6 responses:(unsigned long long)arg7;
- (void)addProvider:(void *)arg1 withID:(void *)arg2 uniqueID:(void *)arg3 forProvidedItemsURL:(void *)arg4 options:(void *)arg5 withServer:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 12: <NSFileProviderXPCInterface> *, id, NSUUID *, NSURL *, unsigned long long, NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getItemHasPresentersAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)grantAccessClaim:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 10: NSFileAccessClaim *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSArray *, NSError *, void*
- (void)grantSubarbitrationClaim:(void *)arg1 withServer:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSFileSubarbitrationClaim *, NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)performBarrierWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)prepareToArbitrateForURLs:(NSArray *)arg1;
- (void)provideDebugInfoWithLocalInfo:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)provideSubarbiterDebugInfoIncludingEverything:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (oneway void)removePresenterWithID:(id)arg1;
- (oneway void)removeProviderWithID:(id)arg1 uniqueID:(NSUUID *)arg2;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (void)startArbitratingWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end