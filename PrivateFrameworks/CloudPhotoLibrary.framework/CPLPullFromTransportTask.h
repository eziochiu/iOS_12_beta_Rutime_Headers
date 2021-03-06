/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask

- (id)enumerateScopesForTaskInTransaction:(id)arg1;
- (id)newScopedTaskWithScope:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3;
- (id)taskIdentifier;

@end
