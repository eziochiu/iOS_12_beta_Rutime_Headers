/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USUsageStorage : NSObject {
    NSOperationQueue * _completionQueue;
    <_CDLocalContext> * _context;
    NSOperationQueue * _contextQueue;
    <_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting><_DKKnowledgeQuerying><_DKKnowledgeSaving> * _eventStorage;
}

@property (readonly) NSOperationQueue *completionQueue;
@property (readonly) <_CDLocalContext> *context;
@property (readonly) NSOperationQueue *contextQueue;
@property (readonly) <_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting><_DKKnowledgeQuerying><_DKKnowledgeSaving> *eventStorage;

+ (id)sharedStorage;

- (void).cxx_destruct;
- (void)_addWebpageToContext:(id)arg1 domain:(id)arg2 webApplication:(id)arg3 inUseStartDate:(id)arg4 inFocusStartDate:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_chompEventsUpToStartDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_createEventsWithInUseStartDate:(id)arg1 inFocusStartDate:(id)arg2 endDate:(id)arg3 webApplication:(id)arg4 url:(id)arg5 domain:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)_deleteDataDictionariesMatchingWebpageURL:(id)arg1 webDomain:(id)arg2 webApplication:(id)arg3 interval:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_deleteEventsWithEventStreams:(id)arg1 predicate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_deleteWebEventsWithPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeWebpageFromContext:(id)arg1 webApplication:(id)arg2 inUseStartDate:(id)arg3 inFocusStartDate:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_setContextStartDates:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_usUsageStorageCommonInit;
- (id)completionQueue;
- (id)context;
- (id)contextQueue;
- (void)deleteAllHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)deleteStorageDataDuringInterval:(id)arg1 webApplication:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebApplicationFromStorage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteWebDomainFromStorage:(id)arg1 webApplication:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteWebpageURLFromStorage:(id)arg1 webApplication:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)eventStorage;
- (id)init;
- (id)initWithEventStorageDirectory:(id)arg1 context:(id)arg2;
- (void)updateStorageWithInUseStartDate:(id)arg1 inFocusStartDate:(id)arg2 endDate:(id)arg3 webApplication:(id)arg4 url:(id)arg5 domain:(id)arg6 completionHandler:(id /* block */)arg7;

@end
