/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPeriodicTimeObserverFactory : NSObject <SVVideoPeriodicTimeObserverFactory> {
    <SVVideoPlaybackStateObserverFactory> * _playbackStateObserverFactory;
    <SVPlayerProviding> * _playerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackStateObserverFactory> *playbackStateObserverFactory;
@property (nonatomic, readonly) <SVPlayerProviding> *playerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createPeriodicTimeObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 playbackStateObserverFactory:(id)arg2;
- (id)playbackStateObserverFactory;
- (id)playerProvider;

@end
