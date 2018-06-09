/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackSeeker : NSObject <SVVideoPlaybackSeeking> {
    SVPlayer * _player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SVPlayer *player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1;
- (id)player;
- (void)seekToStart;

@end
