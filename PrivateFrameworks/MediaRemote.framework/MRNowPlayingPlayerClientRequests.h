/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {
    NSOperationQueue * _enquedNowPlayingInfoAssetRequests;
    NSOperationQueue * _enquedNowPlayingInfoRequests;
    _MRPlaybackQueueProtobuf * _playbackQueue;
    MRPlaybackQueuePlayerClient * _playbackQueueClient;
    NSMutableDictionary * _playbackQueueCompletions;
    unsigned int  _playbackState;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSObject<OS_dispatch_queue> * _responseQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _transactionCallbacks;
    NSMutableDictionary * _transactions;
}

@property (nonatomic, retain) _MRPlaybackQueueProtobuf *playbackQueue;
@property (nonatomic, readonly) MRPlaybackQueuePlayerClient *playbackQueueClient;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (void)_handleEnqueuedPlaybackQueueRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleTransactionPackets:(id)arg1 packets:(id)arg2 completion:(id /* block */)arg3;
- (void)_registerDefaultCallbacks;
- (id)_transactionDestintationForName:(unsigned long long)arg1;
- (void)addPlaybackQueueCompletion:(id /* block */)arg1 forRequest:(id)arg2;
- (void)addTransactionCallback:(id /* block */)arg1 forName:(unsigned long long)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)enqueuePlaybackQueueRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithPlayerPath:(id)arg1;
- (id)playbackQueue;
- (id)playbackQueueClient;
- (unsigned int)playbackState;
- (id)playerPath;
- (void)receiveTransaction:(unsigned long long)arg1 fromMessage:(id)arg2;
- (void)removePlaybackQueueCompletionForRequest:(id)arg1;
- (void)restoreNowPlayingClientState;
- (void)setPlaybackQueue:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (id)transactionCallbacksForName:(unsigned long long)arg1;
- (void)updateContentItemArtwork:(id)arg1;
- (void)updateContentItems:(id)arg1;
- (void)updatePlaybackQueue:(id)arg1;

@end
