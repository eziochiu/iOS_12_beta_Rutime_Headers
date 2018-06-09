/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSMediaRemoteControlSession : NSObject <RMSControlSession> {
    id /* block */  _connectionResponseBlock;
    <RMSControlSessionDelegate> * _delegate;
    bool  _observingNowPlaying;
    void * _origin;
    RMSService * _service;
    unsigned int  _state;
    void * _television;
    void * _textEditingSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSControlSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RMSService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_artworkDataWithArtwork:(void*)arg1;
- (void)_beginObservingTextEditingEvents;
- (void)_didGetTextEditingSession:(void*)arg1 error:(struct __CFError { }*)arg2;
- (void)_didReceiveConnectionStateCallbackWithConnectionState:(unsigned int)arg1 error:(struct __CFError { }*)arg2;
- (void)_didReceivePairingCallbackWithCredentials:(struct { unsigned int x1; unsigned long long x2; })arg1 completion:(id /* block */)arg2;
- (void)_didReceiveTextEditingCallbackWithSession:(void*)arg1 eventType:(unsigned int)arg2;
- (void)_disconnectExternalDevice;
- (void)_endObservingTextEditingEvents;
- (void)_handleConnected;
- (void)_handleDidBeginEditingWithSession:(void*)arg1;
- (void)_handleDidEndEditing;
- (void)_handleDisconnectedWithError:(struct __CFError { }*)arg1;
- (void)_handleMediaRemoteNowPlayingApplicationPlaybackStateDidChangeNotification:(id)arg1;
- (void)_handleMediaRemoteOriginNowPlayingInfoDidChangeNotification:(id)arg1;
- (bool)_isExternalDeviceConnected;
- (bool)_isPairingAllowed:(void*)arg1;
- (bool)_isSystemVersionSupported:(void*)arg1;
- (id)_nowPlayingInfoWithNowPlayingMetadata:(id)arg1;
- (void)_unpairExternalDevice;
- (void)_updateNowPlayingInfo;
- (void)_updateNowPlayingInfo:(id)arg1 withPlaybackState:(unsigned int)arg2;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)beginObservingNowPlaying;
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 allowPairing:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)delegate;
- (void)endObservingNowPlaying;
- (id)init;
- (void)logout;
- (void)pickAudioRoute:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToPlaybackTime:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)sendNavigationCommand:(long long)arg1;
- (void)sendPlaybackCommand:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)sendText:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setVolume:(float)arg1 completionHandler:(id /* block */)arg2;

@end