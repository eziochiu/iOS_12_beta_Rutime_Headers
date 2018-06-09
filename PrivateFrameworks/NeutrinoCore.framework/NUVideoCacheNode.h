/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoCacheNode : NUCacheNode

- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)outputSettings:(out id*)arg1;
- (id)persistentURL;
- (bool)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2;

@end
