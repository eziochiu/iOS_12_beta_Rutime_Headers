/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMRecentItemsList : NSObject {
    NSObject<OS_dispatch_queue> * _diskWritingQueue;
}

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)sharedInstance;

- (void)_addRecentDataPayloadEntry:(id)arg1 toDomain:(id)arg2;
- (id)_buildLRUCacheUsingArray:(id)arg1 forDomain:(id)arg2;
- (id)_guidForFileURL:(id)arg1;
- (id)_recentsCacheForDomain:(id)arg1;
- (void)_removeRecentDataPayloadEntry:(id)arg1 forDomain:(id)arg2;
- (void)_removeRecentDataPayloadEntryFromDisk:(id)arg1 forDomain:(id)arg2;
- (void)_saveRecentDataPayloadEntryToDisk:(id)arg1 forDomain:(id)arg2;
- (void)_updateRecentsCache:(id)arg1 forDomain:(id)arg2;
- (void)addRecentItemAtFileURL:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4;
- (void)addRecentItemWithData:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4;
- (long long)cacheSizeForDomain:(id)arg1;
- (void)dealloc;
- (void)deleteAllRecentItemsForDomain:(id)arg1;
- (void)deleteRecentItemWithData:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3;
- (void)deleteRecentItemWithFileURL:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3;
- (void)deleteRecentsInFirstLaunch;
- (void)dispatchCacheUpdateWithBlock:(id /* block */)arg1;
- (void)fetchRecentItemsForDomain:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRecentStickersWithCompletion:(id /* block */)arg1;
- (id)init;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void)loadRecentHandwritingsAndStickersWithThumbnailSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)loadRecentHandwritingsWithThumbnailSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)loadRecentStickers:(id /* block */)arg1;

@end
