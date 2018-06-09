/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {
    _MRNowPlayingClientProtobuf * _client;
    NSArray * _nowPlayingClients;
    NSMutableArray * _playerClients;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) _MRNowPlayingClientProtobuf *client;
@property (nonatomic, readonly) NSArray *nowPlayingClients;

- (void).cxx_destruct;
- (id)client;
- (id)debugDescription;
- (id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)initWithClient:(id)arg1;
- (id)nowPlayingClients;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)playerClients;
- (void)removePlayer:(id)arg1;
- (void)restoreNowPlayingClientState;

@end
