/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPrefetcher : NSObject <SVPrefetcher> {
    <SVVideoBufferObserving> * _bufferObserver;
    <SVVideoLoadingProgressObserving> * _loadingProgressObserver;
    <SVVideoLoadingStateObserving> * _loadingStateObserver;
    <SVVideoPlaybackProgressObserving> * _playbackProgressObserver;
    <SVPlayerItemLoading> * _playerItemLoader;
    unsigned long long  _prefetchPolicy;
}

@property (nonatomic, readonly) <SVVideoBufferObserving> *bufferObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoLoadingProgressObserving> *loadingProgressObserver;
@property (nonatomic, readonly) <SVVideoLoadingStateObserving> *loadingStateObserver;
@property (nonatomic, readonly) <SVVideoPlaybackProgressObserving> *playbackProgressObserver;
@property (nonatomic, readonly) <SVPlayerItemLoading> *playerItemLoader;
@property (nonatomic, readonly) unsigned long long prefetchPolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bufferObserver;
- (id)initWithPrefetchPolicy:(unsigned long long)arg1 playerItemLoader:(id)arg2 bufferObserver:(id)arg3 loadingStateObserver:(id)arg4 loadingProgressObserver:(id)arg5 playbackProgressObserver:(id)arg6;
- (id)loadingProgressObserver;
- (id)loadingStateObserver;
- (id)playbackProgressObserver;
- (id)playerItemLoader;
- (unsigned long long)prefetchPolicy;
- (void)prefetchingConditionsChanged;

@end
