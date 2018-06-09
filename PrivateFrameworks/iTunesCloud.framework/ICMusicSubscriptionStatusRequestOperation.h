/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation {
    ICMusicSubscriptionStatusRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, readonly, copy) ICMusicSubscriptionStatusRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

+ (bool)_shouldDisplayPrivacyLink;

- (void).cxx_destruct;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(bool)arg3 maximumRetryCount:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)execute;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;

@end
