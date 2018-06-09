/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPStoreFollowingOperation : MPAsyncOperation {
    MPStoreFollowingRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, retain) MPStoreFollowingRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
