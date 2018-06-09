/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {
    bool  _deferredCancel;
    bool  _highPriority;
}

@property (nonatomic) bool highPriority;

- (void)cancel:(bool)arg1;
- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (bool)highPriority;
- (id)newScopedTaskWithScope:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3;
- (void)setHighPriority:(bool)arg1;
- (bool)shouldSkipScopesWithMissingTransportScope;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
