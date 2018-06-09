/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue {
    MSASEnqueuedCommand * _lastEnqueuedCommand;
}

@property (nonatomic, retain) MSASEnqueuedCommand *lastEnqueuedCommand;

+ (id /* block */)calloutBlockForCommand:(id)arg1;

- (void).cxx_destruct;
- (void)MSASModel:(id)arg1 didDeleteComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;
- (void)MSASModel:(id)arg1 didFindDeletedAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASModel:(id)arg1 didFindDeletedAlbum:(id)arg2 info:(id)arg3;
- (void)MSASModel:(id)arg1 didFindDeletedAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASModel:(id)arg1 didFindDeletedInvitation:(id)arg2 info:(id)arg3;
- (void)MSASModel:(id)arg1 didFindNewAccessControl:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASModel:(id)arg1 didFindNewAlbum:(id)arg2 info:(id)arg3;
- (void)MSASModel:(id)arg1 didFindNewAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASModel:(id)arg1 didFindNewComment:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;
- (void)MSASModel:(id)arg1 didFindNewInvitation:(id)arg2 info:(id)arg3;
- (void)flushQueue;
- (bool)hasEnqueuedItems;
- (id)lastEnqueuedCommand;
- (void)setLastEnqueuedCommand:(id)arg1;
- (void)workQueueEnqueueCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;
- (void)workQueueFlushQueue;

@end
