/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryConnection : NSObject <WBSHistoryConnectionProtocol> {
    WBSHistoryService * _historyService;
}

- (void).cxx_destruct;
- (void)beginHistoryAccessSession:(id /* block */)arg1;
- (void)beginURLCompletionSession:(id /* block */)arg1;
- (void)debugGetDatabaseURLWithCompletionHandler:(id /* block */)arg1;
- (void)ensureConnected:(id /* block */)arg1;
- (void)getServiceInfo:(id /* block */)arg1;
- (void)getVisitedLinksWithCompletionHandler:(id /* block */)arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithHistoryService:(id)arg1;
- (void)queryMemoryFootprint:(id /* block */)arg1;

@end
