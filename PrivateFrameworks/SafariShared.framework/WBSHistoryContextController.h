/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryContextController : NSObject {
    CKContextResponse * _cachedResponse;
    CKContextClient * _client;
    WBSHistory * _history;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSURL * _pageURLForCachedResponse;
}

@property (nonatomic, readonly) WBSHistory *history;

- (void).cxx_destruct;
- (void)contextForPageURL:(id)arg1 content:(id)arg2 contentType:(long long)arg3 metadata:(id)arg4 isPrivate:(bool)arg5 withCompletionHandler:(id /* block */)arg6;
- (id)history;
- (id)initWithHistory:(id)arg1 contextClient:(id)arg2;

@end
