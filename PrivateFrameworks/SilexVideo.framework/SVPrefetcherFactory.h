/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPrefetcherFactory : NSObject <SVPrefetcherFactory> {
    <SVVideoBufferObserverFactory> * _bufferObserverFactory;
    <SVVideoLoadingProgressObserverFactory> * _loadingProgressObserverFactory;
    <SVVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SVVideoPlaybackProgressObserverFactory> * _playbackProgressObserverFactory;
    <SVPlayerItemLoaderProviding> * _playerItemLoaderProvider;
    <SVPrefetchPolicyHandler> * _prefetchPolicyHandler;
}

@property (nonatomic, readonly) <SVVideoBufferObserverFactory> *bufferObserverFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoLoadingProgressObserverFactory> *loadingProgressObserverFactory;
@property (nonatomic, readonly) <SVVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, readonly) <SVVideoPlaybackProgressObserverFactory> *playbackProgressObserverFactory;
@property (nonatomic, readonly) <SVPlayerItemLoaderProviding> *playerItemLoaderProvider;
@property (nonatomic, readonly) <SVPrefetchPolicyHandler> *prefetchPolicyHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bufferObserverFactory;
- (id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;
- (id)initWithPrefetchPolicyHandler:(id)arg1 bufferObserverFactory:(id)arg2 playerItemLoaderProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 loadingProgressObserverFactory:(id)arg5 playbackProgressObserverFactory:(id)arg6;
- (id)loadingProgressObserverFactory;
- (id)loadingStateObserverFactory;
- (id)playbackProgressObserverFactory;
- (id)playerItemLoaderProvider;
- (id)prefetchPolicyHandler;

@end
