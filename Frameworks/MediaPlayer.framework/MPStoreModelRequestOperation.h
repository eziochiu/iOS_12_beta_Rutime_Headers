/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    NSOperation * _childOperation;
    MPStoreModelRequest * _request;
    MPModelResponse * _response;
    id /* block */  _responseHandler;
    double  _startExecutingTimeStamp;
    NSObject<OS_dispatch_source> * _timeoutTimerSource;
}

@property (nonatomic, readonly) double remainingTimeInterval;
@property (nonatomic, copy) MPStoreModelRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)_executeItemMetadataLoadForRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 requestContext:(id)arg3;
- (void)_executeURLLoadWithRequest:(id)arg1 storeBagDictionary:(id)arg2 requestContext:(id)arg3;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (void)_handleTimeout;
- (void)_tearDownTimeoutTimerSource;
- (double)adjustTimeoutInterval:(double)arg1;
- (void)assertRunningInAccessQueue;
- (void)cancel;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)dispatchSync:(id /* block */)arg1;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)init;
- (id)initWithRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;
- (double)remainingTimeInterval;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
