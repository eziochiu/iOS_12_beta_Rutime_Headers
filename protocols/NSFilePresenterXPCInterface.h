/* made by EzioChiu.
 */

@protocol NSFilePresenterXPCInterface <NSFileCoordinationDebugInfoXPCInteface>

@required

- (void)accommodateDeletionOfSubitemAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURLPromisePair *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)logSuspensionWarning;
- (oneway void)observeChangeOfUbiquityAttributes:(NSSet *)arg1;
- (oneway void)observeChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeDisconnection;
- (oneway void)observeMoveToURL:(NSURLPromisePair *)arg1 withSubitemURL:(NSURLPromisePair *)arg2 byWriterWithPurposeID:(id)arg3;
- (oneway void)observePresenterChange:(bool)arg1 forSubitemAtURL:(NSURLPromisePair *)arg2;
- (oneway void)observeReconnection;
- (oneway void)observeSharingChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeUbiquityChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeVersionChangeOfKind:(NSString *)arg1 toItemAtURL:(NSURLPromisePair *)arg2 withClientID:(NSString *)arg3 name:(NSString *)arg4;
- (oneway void)reacquireFromReadingClaimForID:(id)arg1;
- (void)reacquireFromWritingClaimForID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)relinquishToReadingClaimWithID:(void *)arg1 options:(void *)arg2 purposeID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: id, unsigned long long, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)relinquishToWritingClaimWithID:(void *)arg1 options:(void *)arg2 purposeID:(void *)arg3 subitemURL:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: id, unsigned long long, id, NSURLPromisePair *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveChangesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setProviderPurposeIdentifier:(NSString *)arg1;
- (oneway void)updateLastEventID:(unsigned long long)arg1;

@end
