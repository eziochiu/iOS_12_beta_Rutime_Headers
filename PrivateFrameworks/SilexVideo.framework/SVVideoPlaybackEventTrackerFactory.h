/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackEventTrackerFactory : NSObject <SVVideoPlaybackEventTrackerFactory> {
    <SVVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SVVideoPlaybackStateObserverFactory> * _playbackStateObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, readonly) <SVVideoPlaybackStateObserverFactory> *playbackStateObserverFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createEventTrackerForVideo:(id)arg1;
- (id)initWithPlaybackStateObserverFactory:(id)arg1 loadingStateObserverFactory:(id)arg2;
- (id)loadingStateObserverFactory;
- (id)playbackStateObserverFactory;

@end
