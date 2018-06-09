/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSubscriptionLeaseAssetRequestOperation : MPAsyncOperation {
    SSVPlaybackLeaseRequest * _playbackLeaseRequest;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) SSVPlaybackLeaseRequest *playbackLeaseRequest;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)playbackLeaseRequest;
- (id /* block */)responseHandler;
- (void)setPlaybackLeaseRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
