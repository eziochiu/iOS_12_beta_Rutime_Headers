/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLCleanupTask : CPLEngineSyncTask

- (void)_doOneIteration;
- (void)launch;
- (id)taskIdentifier;

@end
