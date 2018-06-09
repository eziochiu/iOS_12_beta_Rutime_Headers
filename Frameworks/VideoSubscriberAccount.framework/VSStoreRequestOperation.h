/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSStoreRequestOperation : VSAsyncOperation {
    VSStoreRequest * _request;
    int  _requestCompletionFlag;
    VSOptional * _result;
    SSRequest * _storeServicesRequest;
}

@property (nonatomic, copy) VSStoreRequest *request;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, retain) SSRequest *storeServicesRequest;

- (void).cxx_destruct;
- (bool)_isFirstToFinish;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)request;
- (id)result;
- (void)setRequest:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setStoreServicesRequest:(id)arg1;
- (id)storeServicesRequest;

@end
