/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesSeenHelper : NSObject {
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultHelper;

- (void).cxx_destruct;
- (void)_clearPendingNotificationForMemory:(id)arg1 inLibrary:(id)arg2;
- (void)clearAnyPendingNotificationsFromMemories:(id)arg1 inLibrary:(id)arg2;
- (void)clearAnyPendingStateFromMemories:(id)arg1 inLibrary:(id)arg2;
- (id)init;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
