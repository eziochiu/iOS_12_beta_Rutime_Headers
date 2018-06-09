/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPrivacyStatementInteractionHandler : NSObject <SVInteractionHandling> {
    <SVVideoPlaybackController> * _playbackController;
    <SVVideoAdProviding> * _videoAdProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackController> *playbackController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoAdProviding> *videoAdProvider;

- (void).cxx_destruct;
- (void)handleInteractionWithContext:(id)arg1;
- (id)initWithVideoAdProvider:(id)arg1 playbackController:(id)arg2;
- (id)playbackController;
- (id)videoAdProvider;

@end
