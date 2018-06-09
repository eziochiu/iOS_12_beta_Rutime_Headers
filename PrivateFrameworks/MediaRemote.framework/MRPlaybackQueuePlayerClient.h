/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackQueuePlayerClient : NSObject {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _offsets;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _requests;
}

@property (nonatomic, readonly) _MRContentItemProtobuf *nowPlayingItem;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (void)_onQueue_augmentCommandOptions:(id)arg1 forCommand:(unsigned int)arg2;
- (void)_onQueue_invalidate;
- (id)_onQueue_writeData;
- (void)addRequest:(id)arg1;
- (void)augmentCommandOptions:(id)arg1 forCommand:(unsigned int)arg2;
- (id)contentItemForOffset:(long long)arg1;
- (id)description;
- (bool)hasRequest:(id)arg1;
- (id)initWithPlayerPath:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (id)nowPlayingItem;
- (id)offsetForIdentifier:(id)arg1;
- (id)playerPath;
- (void)readData:(id)arg1;
- (void)removeRequest:(id)arg1;
- (id)requestForContentItem:(id)arg1;
- (id)requestForIdentifer:(id)arg1;
- (void)subscribeToPlaybackQueue:(id)arg1 forRequest:(id)arg2;
- (id)subscribedContentItemRequests:(id)arg1;
- (id)subscribedContentItems:(id)arg1;
- (id)subscribedContentItems:(id)arg1 forRequest:(id)arg2;
- (id)subscribedContentItemsIdentifiers:(id)arg1 forRequest:(id)arg2;

@end
