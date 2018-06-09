/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelRadioGetTracksOperation : MPAsyncOperation {
    id /* block */  _completionHandler;
    SSVPlayActivityController * _playActivityController;
    ICRadioGetTracksRequest * _request;
    NSString * _siriAssetInfo;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)_cacheTracksForStep:(id)arg1;
- (void)_runStep:(id)arg1 withFinishHandler:(id /* block */)arg2;
- (id /* block */)completionHandler;
- (void)execute;
- (id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
