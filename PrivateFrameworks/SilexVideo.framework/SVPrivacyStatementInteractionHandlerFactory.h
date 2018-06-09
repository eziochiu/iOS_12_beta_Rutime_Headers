/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPrivacyStatementInteractionHandlerFactory : NSObject <SVVideoInteractionHandlerFactory> {
    <SVVideoPlaybackController> * _playbackController;
    <SVVideoProviderProviding> * _videoProviderProviding;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackController> *playbackController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoProviderProviding> *videoProviderProviding;

- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoProviderProviding:(id)arg1 playbackController:(id)arg2;
- (id)playbackController;
- (id)videoProviderProviding;

@end
