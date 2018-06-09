/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackPositionObserverFactory : NSObject <SVVideoPlaybackPositionObserverFactory> {
    <SVPlayerItemObserverFactory> * _playerItemObserverFactory;
    <SVPlayerTimeControlStatusObserverFactory> * _timeControlStatusObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerItemObserverFactory> *playerItemObserverFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVPlayerTimeControlStatusObserverFactory> *timeControlStatusObserverFactory;

- (void).cxx_destruct;
- (id)createPlaybackPositionObserverForVideo:(id)arg1;
- (id)initWithPlayerItemObserverFactory:(id)arg1 timeControlStatusObserverFactory:(id)arg2;
- (id)playerItemObserverFactory;
- (id)timeControlStatusObserverFactory;

@end
