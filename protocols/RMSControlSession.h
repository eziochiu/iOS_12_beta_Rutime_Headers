/* made by EzioChiu.
 */

@protocol RMSControlSession <NSObject>

@required

- (void)addToWishlist:(void *)arg1 databaseID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)beginObservingNowPlaying;
- (void)connectToService:(void *)arg1 pairingGUID:(void *)arg2 allowPairing:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: RMSService *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, int, RMSControlInterface *, void*
- (<RMSControlSessionDelegate> *)delegate;
- (void)endObservingNowPlaying;
- (void)logout;
- (void)pickAudioRoute:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: RMSAudioRoute *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)seekToPlaybackTime:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)sendNavigationCommand:(long long)arg1;
- (void)sendPlaybackCommand:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)sendText:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (RMSService *)service;
- (void)setDelegate:(id <RMSControlSessionDelegate>)arg1;
- (void)setLikedState:(void *)arg1 itemID:(void *)arg2 databaseID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: long long, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)setVolume:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
