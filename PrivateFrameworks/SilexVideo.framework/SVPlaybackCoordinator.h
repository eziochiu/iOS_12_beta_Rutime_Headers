/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlaybackCoordinator : NSObject {
    SVPlayer * _player;
    <SVPlayerItemLoading> * _playerItemLoader;
}

@property (nonatomic, readonly) SVPlayer *player;
@property (nonatomic, readonly) <SVPlayerItemLoading> *playerItemLoader;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1 playerItemLoader:(id)arg2;
- (void)load;
- (void)loadVideoIfNeeded;
- (void)pause;
- (void)play;
- (id)player;
- (id)playerItemLoader;

@end
