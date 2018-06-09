/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayerManager : NSObject <SVPlayerProviding, SVVideoTransitionObserver, SVVolumeObserving> {
    <SVPlayerFactory> * _playerFactory;
    SVWeakObjectCache * _players;
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerFactory> *playerFactory;
@property (nonatomic, readonly) SVWeakObjectCache *players;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (id)initWithPlayerFactory:(id)arg1 videoViewControllerProvider:(id)arg2;
- (void)muteStateChanged:(id)arg1;
- (id)playerFactory;
- (id)playerForVideo:(id)arg1;
- (id)players;
- (id)videoViewControllerProvider;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
