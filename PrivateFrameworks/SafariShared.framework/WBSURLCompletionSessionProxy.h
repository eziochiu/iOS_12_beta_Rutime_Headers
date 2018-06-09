/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSURLCompletionSessionProxy : NSObject {
    <WBSURLCompletionSessionProtocol> * _completionSession;
    NSObject<OS_dispatch_queue> * _completionSessionAccessQueue;
    WBSHistoryConnectionProxy * _historyConnectionProxy;
}

- (void).cxx_destruct;
- (void)_completionSessionWithCompletionHandler:(id /* block */)arg1;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)userDidSelectCompletionMatch:(id)arg1 forTypedString:(id)arg2;

@end