/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {
    _MRNowPlayingPlayerPathProtobuf * _activePlayer;
    _MRNowPlayingClientProtobuf * _client;
    NSMutableArray * _playerClients;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *activePlayer;
@property (nonatomic, retain) _MRNowPlayingClientProtobuf *client;
@property (nonatomic, readonly) NSArray *playerClients;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (id)activePlayer;
- (id)client;
- (id)debugDescription;
- (id)description;
- (id)initWithPlayerPath:(id)arg1;
- (id)nowPlayingPlayerClientForPlayerPath:(id)arg1;
- (id)playerClients;
- (id)playerPath;
- (void)removePlayer:(id)arg1;
- (void)restoreNowPlayingClientState;
- (void)setActivePlayer:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)updateClient:(id)arg1;

@end
