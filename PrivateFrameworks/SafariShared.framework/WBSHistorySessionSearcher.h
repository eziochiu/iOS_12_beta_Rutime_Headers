/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistorySessionSearcher : NSObject {
    NSObject<OS_dispatch_queue> * _searchQueue;
    WBSHistorySessionController * _sessionController;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithSessionController:(id)arg1;
- (void)performSearchWithText:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;

@end
