/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackController : NSObject <SVVideoPlaybackController> {
    SVVideoPlaybackManager * _playbackManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SVVideoPlaybackManager *playbackManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlaybackManager:(id)arg1;
- (void)pause;
- (void)play;
- (id)playbackManager;

@end
