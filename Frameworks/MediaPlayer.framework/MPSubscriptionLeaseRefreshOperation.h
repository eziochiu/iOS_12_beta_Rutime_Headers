/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSubscriptionLeaseRefreshOperation : MPAsyncOperation {
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;

@end
