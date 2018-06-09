/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate> {
    WebBookmarksXPCConnection * _connection;
    <WebBookmarksClientDelegateProtocol> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WebBookmarksClientDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearAllReadingListArchives;
- (void)clearReadingListArchiveWithUUID:(id)arg1;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (id)delegate;
- (void)didFinishFetching;
- (void)didStartFetchingReadingListItemWithMessage:(id)arg1;
- (void)didStopFetchingReadingListItemWithMessage:(id)arg1;
- (void)didUpdateProgressWithMessage:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)startReadingListFetcher;

@end
