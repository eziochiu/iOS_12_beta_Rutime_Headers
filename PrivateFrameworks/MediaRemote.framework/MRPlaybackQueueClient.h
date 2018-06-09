/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackQueueClient : NSObject {
    NSMutableArray * _clients;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSArray *playbackQueueClients;

- (void).cxx_destruct;
- (void)_handleApplicationRemovedNotification:(id)arg1;
- (void)_handleOriginRemovedNotification:(id)arg1;
- (void)_handlePlayerPathRemovedNotification:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (id)playbackQueueClientForPlayerPath:(id)arg1;
- (id)playbackQueueClients;
- (void)removeClientIfPredicate:(id /* block */)arg1;

@end
