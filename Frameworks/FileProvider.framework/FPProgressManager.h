/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPProgressManager : NSObject {
    NSMapTable * _copyProgressPerItemIDs;
    NSMapTable * _downloadProgressPerItemIDs;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _uploadProgressPerItemIDs;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)_progressForItem:(id)arg1 usingProgressMap:(id)arg2;
- (void)attachProgressToItemsIfNeeded:(id)arg1;
- (id)copyProgressForItem:(id)arg1;
- (id)downloadProgressForItem:(id)arg1;
- (id)init;
- (void)registerCopyProgress:(id)arg1 forItemID:(id)arg2;
- (void)removeCopyProgressForItemID:(id)arg1;
- (id)uploadProgressForItem:(id)arg1;

@end
