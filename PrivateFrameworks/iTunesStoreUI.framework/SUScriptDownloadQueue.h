/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptDownloadQueue : SUScriptObject <SSDownloadManagerObserver, SSPreorderManagerObserver> {
    SUClientInterface * _clientInterface;
    SUDownloadManager * _downloadManager;
    SSPreorderManager * _preorderManager;
    NSString * _queueType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *queueType;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_setupManagersWithClientInterface:(id)arg1 queueType:(id)arg2;
- (void)_tearDownQueues;
- (id)attributeKeys;
- (void)checkQueue;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (id)downloads;
- (void)finalizeForWebScript;
- (id)initWithQueueType:(id)arg1 clientInterface:(id)arg2;
- (void)preorderManagerPreordersDidChange:(id)arg1;
- (id)queueType;
- (id)scriptAttributeKeys;

@end
