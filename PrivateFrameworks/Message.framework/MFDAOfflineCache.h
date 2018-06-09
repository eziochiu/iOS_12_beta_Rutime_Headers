/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAOfflineCache : MFOfflineCache {
    NSString * _lastSelectedFolderID;
}

- (void)dealloc;
- (void)deferOperation:(id)arg1;
- (void)deleteOfflineCacheData;
- (bool)replayOperationsUsingBlock:(id /* block */)arg1;
- (void)setLastSelectedMailbox:(id)arg1;

@end
