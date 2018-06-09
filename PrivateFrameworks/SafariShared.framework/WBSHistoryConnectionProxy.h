/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionProxyQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionProxyQueue;

- (void).cxx_destruct;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(id /* block */)arg1;
- (void)beginHistoryAccessSession:(id /* block */)arg1;
- (void)beginURLCompletionSession:(id /* block */)arg1;
- (id)connectionProxyQueue;
- (void)dealloc;
- (void)debugGetDatabaseURLWithCompletionHandler:(id /* block */)arg1;
- (void)ensureConnected:(id /* block */)arg1;
- (void)getServiceInfo:(id /* block */)arg1;
- (void)getVisitedLinksWithCompletionHandler:(id /* block */)arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)killService;
- (void)queryMemoryFootprint:(id /* block */)arg1;
- (id)queryMemoryFootprintWithError:(id*)arg1;

@end
