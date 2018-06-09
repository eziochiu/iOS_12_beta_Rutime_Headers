/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackStateObserverFactory : NSObject <SVVideoPlaybackStateObserverFactory> {
    <SVVideoPlaybackPositionObserverFactory> * _playbackPositionObserverFactory;
    <SVPlayerStatusObserverFactory> * _statusObserverFactory;
    <SVPlayerTimeControlStatusObserverFactory> * _timeControlStatusObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackPositionObserverFactory> *playbackPositionObserverFactory;
@property (nonatomic, readonly) <SVPlayerStatusObserverFactory> *statusObserverFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVPlayerTimeControlStatusObserverFactory> *timeControlStatusObserverFactory;

- (void).cxx_destruct;
- (id)createPlaybackStateObserverForVideo:(id)arg1;
- (id)initWithStatusObserverFactory:(id)arg1 playbackPositionObserverFactory:(id)arg2 timeControlStatusObserverFactory:(id)arg3;
- (id)playbackPositionObserverFactory;
- (id)statusObserverFactory;
- (id)timeControlStatusObserverFactory;

@end
