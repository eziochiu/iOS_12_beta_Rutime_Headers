/* made by EzioChiu.
 */

@protocol SGDSuggestManagerMailProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>

@required

- (void)fullDownloadRequestBatch:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)harvestedSuggestionsFromSearchableItem:(void *)arg1 options:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: CSSearchableItem *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)messagesToRefreshWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)prepareForRealtimeExtraction:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)reportMessagesFound:(void *)arg1 lost:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)resolveFullDownloadRequests:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*
- (void)suggestionsFromSearchableItem:(void *)arg1 options:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: CSSearchableItem *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)updateMessages:(void *)arg1 state:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse *, void*

@end
