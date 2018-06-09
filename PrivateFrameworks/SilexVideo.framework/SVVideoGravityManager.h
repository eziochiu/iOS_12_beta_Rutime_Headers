/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoGravityManager : NSObject <SVVideoTransitionObserver> {
    <SVVideoGravityProviderFactory> * _videoGravityProviderFactory;
    <SVVideoGravityProviding> * _videoGravityProviderForCurrentVideo;
    <SVVideoGravityProviding> * _videoGravityProviderForTransitioningVideo;
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoGravityProviderFactory> *videoGravityProviderFactory;
@property (nonatomic, retain) <SVVideoGravityProviding> *videoGravityProviderForCurrentVideo;
@property (nonatomic, retain) <SVVideoGravityProviding> *videoGravityProviderForTransitioningVideo;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (id)initWithVideoGravityProviderFactory:(id)arg1 videoViewControllerProvider:(id)arg2;
- (void)setVideoGravityProviderForCurrentVideo:(id)arg1;
- (void)setVideoGravityProviderForTransitioningVideo:(id)arg1;
- (id)videoGravityProviderFactory;
- (id)videoGravityProviderForCurrentVideo;
- (id)videoGravityProviderForTransitioningVideo;
- (id)videoViewControllerProvider;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
